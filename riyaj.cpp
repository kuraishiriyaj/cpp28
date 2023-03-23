#include<iostream>
using namespace std;

class Rupee
{
     
     public:
     int r;
     Rupee()
      {
        cout<<"Default Constructors is called"<<endl;
      }
     
     Rupee(int x)
     {
        cout<<"Rupee Parametrised Constructors is called"<<endl;
        r=x;
     }
     void display()
     {
          cout<<"r="<<r<<endl;
     }
     operator int()
     {
        cout<<"Rupee class operator int () is called"<<endl;
     }
    


    
};
class Dollor

{
    int d;
    public:
    Dollor(Rupee y)
    {
        d=y.r;
    }
    Dollor()
    {
        cout<<" Dollor Default Constructors is called"<<endl;
    }
    Dollor(int s)
    {
        cout<<" Dollor parametrised Constructors is called"<<endl;
        d=s;
    }
    void display()
    {
        cout<<"d="<<d<<endl;
    }
    operator int()
    {
        cout<<"Dollor class operator int() is called "<<endl;
    }
    operator Rupee()
    {
        cout<<"Dollor class operator Rupee() is called"<<endl;
        return d;
    }

};
int main()
{
    Dollor s=67;
    s.display();
    int a=s;
      cout<<"a="<<a<<endl;
     Rupee t=89;
    t.display();
     int u=t;
    
     cout<<"u="<<u<<endl;
    Dollor M=t;
    M.display();
    Rupee S=M;
    S.display();


return 0 ;
}