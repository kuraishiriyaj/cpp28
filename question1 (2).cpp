#include<iostream>
/* define a class complex with approate instante variables and member functins
  define following opertors in the class 
   a +
   b -
   c *
   d ==
*/
using namespace std;
class complex 
{
     int a;
     int b;
     public:
     complex ()
     {

     }
      complex(int x,int y)
      {
        a=x;
        b=y;
      }
      void display()
      {
        cout<<"a+ib="<<a<<"+"<<"i"<<b<<endl;
      }
      complex operator+(complex t)
      {
         complex temp;
         temp.a=a+t.a;
         temp.b=b+t.b;
         return temp;
      }
      complex operator-(complex t)
      {
        complex temp;
        temp.a=a-t.a;
        temp.b=b-t.b;
        return temp;
      }
      complex operator *(complex t)
      {
        complex temp;
        temp.a=a*t.a;
        temp.b=b*t.b;
        return temp;
      }
      bool operator==(complex t)
      {
         if(a==t.a&&b==t.b)
         {
           return true;
         }
         else 
         return false;
      }
    
      
};
int main()
{
  complex t(5,4),t1(5,3),t2;
  t2=t1+t2;
  t2.display();
  t2=t1-t2;
  t2.display();
  t2=t1*t2;
  t2.display();
  cout<<"compare of the a and b"<<(t==t1)<<endl;
  return 0;


}