#include<iostream>
#include<cstdlib>
/* Create a student class and overload new and delete  operators as a member
 function of the class ?
*/
using namespace std;
class student
{
     string name;
     int age;
     public:
      student()
      {
         cout<<"\n Constructor is called";
      }
      student( string str,int a)
      {
         name=str;
         age=a;
      }
      void display()
      {
        cout<<"\n name:"<<name<<endl;
        cout<<"\n age :"<<age<<endl;
      }
};
      void * operator new(size_t size)
      {
        void*p=malloc(size);
        cout<<"\n New operator is called"<<size<<endl;
        return p;
      }
      void operator delete(void*p)
      {
        free(p);
        cout<<"\n Overloading the delete operator"<<endl;
      }


      

int main()
{
  student *p=new student("riyaj",67);

  int*q=new int;
    p->display();
  delete(p);
  return 0;
}