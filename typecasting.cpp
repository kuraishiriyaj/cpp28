#include<iostream>
using namespace std;
class Rupee
{
     int r;
     public:
     Rupee(int x)
     {
        cout<<"Rupee PC is called"<<endl;
        r=x;
     }
     operator int()
     {
        cout<<"Rupee int() construcrs is called"<<endl;
        return r;
     }
     void display()
     {
        cout<<"r="<<r<<endl;
     }
    
};
     class Dollor
     {
        int d;
        public:
        Dollor(int y)
        {
            cout<<"Dollor PC is called"<<endl;
            d=y;
        }
      operator int()
      {
         cout<<"Dollor PC int[] is called"<<endl;
         return d;
      }
      operator Rupee()
      {
        cout<<" riyaj Dollor class int() is called"<<endl;
       // Rupee m=d; // this is called Rupee construcrs 
                   // compiler itself make the Rupee m=d; implicity 
        return d;
      }
      void display()
      {
        cout<<"d="<<d<<endl;
      }

     };

int main()
{
    Rupee s=67;
    s.display();
    int z=s;
    cout<<"z="<<z<<endl;
    Dollor t=78;
    s.display();
    int g=t;
    cout<<"g="<<g<<endl;
    Rupee j=t;
    j.display();


return 0 ;
}