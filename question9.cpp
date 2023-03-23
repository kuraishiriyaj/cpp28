#include<iostream>
/* create  and integer class that contains int x as  an instance varibles and overload
  casting int() operator that will type cast your integer object to int data type
    
*/
using namespace std;
class integer
{
  int x;
  public:
   integer(int z)
   {
     x=z;
   }
   void display()
   {
    cout<<x;
   }
};
int main()
{
   integer s=9;
   s.display();

   return 0;
}