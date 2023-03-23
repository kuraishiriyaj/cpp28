#include<iostream>
#include<cstdlib>
/* create a  student class and overload new and delete operators outside of the class ?
*/
using namespace std;
class student
{
    string name;
    int age;
    public:
    student()
    {
        cout<<"\n Constructors is called"<<endl;
    }
    student(string str,int a)
    {
        name=str;
        age=a;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
    }

};
void* operator new(size_t size)
{
    void*p=malloc(size);
    cout<<"\n Overloading the new operator is called"<<endl;
}
void operator delete(void*p)
{
      
  cout<<"Overloding the delete operator is called";
  free(p);
}

int main()
{
 student *p=new student("king",67);
  p->display();
  delete(p);
  return 0;
}