#include<iostream>
/* create a Distance class having  2 instance  variable  feet and inches aslo
create dfault constructor and prametrized  constructors takes  2 varibles  Now 
  ovberload () function call operator that makes 3 arguments a ,b,c and 
  set feet=a+c+5 and inches =a+b+15 

 
*/
using namespace std;
class Distance
{
  private:
   int feet;
   int inches;
   public:
   Distance()
   {

   }
   Distance(int f,int i)
   {
     feet=f;
     inches=i;
   }
   Distance operator ()(int a,int b,int c)
   {
     Distance d;
      d.feet=a+c+5;
      d.inches=a+b+15;
      return d;
   }
   void display()
   {
    cout<<"feet="<<feet<<",inches="<<inches<<endl;
   }
};
int main()
{
  Distance d1(5,10);
  Distance d2;
  d1.display();
  d2=d1(10,20,30);
  d1.display();
  d2.display();
  return 0;

}