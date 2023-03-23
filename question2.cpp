#include<iostream>
/* Define a class Complex with appropriate  instance varibles and member functions one
  of the functions should be set()Data to set the properties of the object make sure the
   names of formal arguments are the same as names of instance variables ?
*/
using namespace std;
class complex
{
   private:
   int real;
   int img;
  
   public:
    void setDATA(int a,int b)  
   { 
       
           if(a>0&&b<0)
           {
             real=a;
             img=-b;
           }
           else
           {
              real=0;
              img=0;
           }
           
    }
    void display()
    {
      cout<<"a+ib="<<real<<"+i"<<img;
    }
};
int main()
{
   complex s;
   int a,b;
   cout<<"enter is the real and img part"<<endl;
   cin>>a>>b;
   s.setDATA(a,b);
   s.display();
   return 0;

}