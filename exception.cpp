#include<iostream>
using namespace std;
int main()
{
   float a,b,c;
   cout<<"enter is the two number "<<endl;
   cin>>a>>b;
   try
   {
      if(b==0)
      {
        throw b;
      }
        if(b==1)
        {
        throw "riyajkuraishi";
        }
       if(b==2)
         {
             throw 'a';
         }
        c=a/b;
   }
     /* catch(float e)
      {
         cout<<"Divide by b is zero="<<e<<endl;
      }
      catch(const char *str)
      {
          cout<<"ye exception kisne kiya hai="<<str<<endl;
      }*/
       catch(...)
      {
         cout<<"jadeja is coming"<<endl;
      }
   


   cout<<"Result="<<c;
   return 0;
}
