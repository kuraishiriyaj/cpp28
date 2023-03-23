#include<iostream>
/*
   create  a class marks that have one member variable marks and one 
    member function that will print marks  we know that we can access
     member function using () dot operator  Now you need to overload (->) arrow
     operator to access to access that function ?

*/
using namespace std;
class marks
{
   private:
   int mark;
   public:
   marks(int a)
   {
      mark=a;
   }
   void display()
   {
      cout<<"marks"<<mark<<endl;

   }
   marks *operator->()
   {
      return this;
   }
   
};
int main()
{
    marks s(67);
    s.display();
    s->display();
    return 0;

}