#include<iostream>
using namespace std;
class Flight
{
    public:
    virtual void search()
    {
        cout<<"Invalid searching"<<endl;
    }
   virtual void Book()
    {
        cout<<"Invalid Booking"<<endl;
    }
};
class Spicejet:public Flight
{
    public:
      void search()
      {
         cout<<"Spicejet searching"<<endl; 
      }
     void Book()
     {
           cout<<"Spicejet Booking"<<endl;
     }
};
class Indigo:public Flight
{
    public:
    void search()
    {
       cout<<"Indigo searching"<<endl;
    }
    void Book()
    {
      cout<<"Indigo Booking"<<endl;
    }
};
class Airindia : public Flight
{
    public:
    void search()
    {
      cout<<"Airindia searching"<<endl;
    }
    void Book()
    {
        cout<<"Airindia Booking"<<endl;
    }
};
int main()
{
    Flight*f;
      Spicejet s;
      Indigo i;
      Airindia a;
      f=&s;
      f->search(); /// jis type ka pointer hota hai usi type ke function ko call karta hai
      f->Book();
      f=&i;
      f->search();
      f->Book();
       f=&a;
       f->search();
       f->Book();


return 0 ;
}