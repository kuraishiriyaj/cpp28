#include<iostream>
/* overload subscript operator[] that will be useful when we want to check
  for an index out of bound ?
*/
using namespace std;
class Array
{
    int a[100];
    const int size=100;
    public:
    Array()
    {

    }
    void setArray(int n,int index)
    {
      if(index>=size)
      {
         cout<<"Array Index out of the Bound Exception"<<endl;
         exit(0);
      }
      a[index]=n;
    }
    void display(int index)
    {
      cout<<a[index]<<endl;
    }
    void operator[](int index)
    {
      if(index>=size)
      {
          cout<<"\n\nArray Out of the Bound Exception"<<endl;
          exit(0);
      }
      return a[index];

    }

};
int main()
{
   Array b;
  b.setArray(5,90);
  cout<<b[90];
  return 0;

}