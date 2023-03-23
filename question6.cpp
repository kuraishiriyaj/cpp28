#include<iostream>
/* create a complex class and overload assingment operator for the class ?
*/
using namespace std;
class Time
{
    int Hour;
    int Minute;
    public:
    Time()
    {

    }
    Time(int a,int b)
    {
        Hour=a;
        Minute=b;

    }
    void accept()
    {
        cout<<"\n Enter is the Time"<<endl;
        cout<<"\n Enter is Hour"<<endl;
        cin>>Hour;
        cout<<"\n Enter is Minute";
        cin>>Minute;

    }
    void display()
    {
        cout<<"\n Time is  :";
        cout<<Hour;
        cout<<endl<<Minute;
    }
    void operator=(Time t)
    {
       Hour=t.Hour;
       Minute=t.Minute; 
       cout<<"overloading Assinment operator is:"<<endl;
       cout<<Hour<<endl;
       cout<<Minute;
    }
};
int main()
{
     Time t,t1;
     t.accept();
     t.display();
     t1=t;
     return 0;

}