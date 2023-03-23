#include<iostream>
using namespace std;
class parents
{
    public:
    int a,b;
   void display()
     {
        //cout<<"a="<<a<<", b="<<b<<endl;
        cout<<"parents class"<<endl;
     }
};
class child:public parents
{
    public:
    int c,d;
   void display()
    {
       // cout<<"c="<<c<<"d="<<d<<endl;
       cout<<"child class"<<endl;

    }
};
int main()
{
    parents x;
    x.a=78;
    x.b=6;
    child y;
    y.c=9;
    y.d=56;
   // x.display();
   // y.display();
   // parents*p=&x;
   // p->display();
   //   child *c=&y;
   //   c->display();
     parents*p=&y;
    p->display();

return 0 ;
}