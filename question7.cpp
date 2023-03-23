#include<iostream>
/* create an integer class and overload not operator for the class ?
*/
using namespace std;
class Integer
{
     int i;
     public:
      Integer(int i):i(i)
      {
          
      }
      int operator!()
      {
             return -i;
      }
};
int main()
{
    Integer a=-55;
    cout<<!a<<endl;
    return 0;

}