#include<iostream>
using namespace std;
class A
{ 
    int x;
    const int y=6;
    public:
    A(int x,int y):y(y)
    {
        this->x=x;
    
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    A t(5,2);
    A t1(6,3);
    t.display();
    t1.display();


return 0 ;
}