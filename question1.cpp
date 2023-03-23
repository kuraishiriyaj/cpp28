#include<iostream>
/*
  Define a class Complex with oppropriate instance variables and member functions
   Overloading folliwing operations
   a << insertion operator
   b >> extraction operator
*/
using namespace std;
class Time
{
    private:
    int Hour;
    int Minute;
    int Second;
    public:
    Time (int a,int b=0,int c=0)
    {
        Hour=a;
        Minute=b;
        Second=c;
    }
    Time()
    {

    }
    friend istream & operator>>(istream &in,Time &t);
    friend ostream &operator<<(ostream &os,const Time &t);


};
istream & operator>>(istream &in,Time &t)
{    

     cout<<"\n\n Enter is Hour    :";
    in>>t.Hour;
    cout<<"\n\n Enter is Minute  :";
    in>>t.Minute;
    cout<<"\n\n Enter is Second  :";
    in>>t.Second;
}
ostream & operator<<(ostream &os,const Time & t)
{
    cout<<"\n\n Time is   :";
    cout<<"\n\n Hour :"<<t.Hour;
    cout<<"\n\n Minute:"<<t.Minute;
    cout<<"\n\n Second:"<<t.Second;
}
int main()
{
    Time t;
    cout<<"\n\n Enter is the Time"<<endl;
    cin>>t;
    cout<<t;
return 0 ;
}