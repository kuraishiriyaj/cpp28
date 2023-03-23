#include<iostream>
using namespace std;
class A
{
    private:
     int a;
     public:
     int b;
     A(int x,int y)
     {
        cout<<"parents class is called"<<endl;
        a=x;
        b=y;
     }
    ~ A()
     {
        cout<<"Destructor parent is called"<<endl;

     }
    
     void display()
     {
        cout<<"a="<<a<<",b="<<b<<endl;
     }
    
};
  class B:public A  // this is the inhertence 
  {
    private :
    int c;
    public:
    int d;
    B(int y,int z) :A(5,0)// this is the also called default constructors 
    {
        cout<<"child class is called"<<endl;
        c=y;
        d=z;
    }
    ~ B()
    {
        cout<<"Destructor child is called"<<endl;
    }
    void display()
    {
        cout<<"b="<<b<<", c="<<c<<", d="<<d<<endl;
    }

  };
int main()
{
    B x(7,3);
    x.display();


return 0 ;
}