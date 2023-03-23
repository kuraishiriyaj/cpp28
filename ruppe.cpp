#include<iostream>
using namespace std;
class Rupee
{
    float c;
     public:
    operator float()
    {
        return c;
    }
   Rupee(float t)
   {
    c=t;
   }
};
int main()
{
 Rupee s=97.8;
 float t=s;
 cout<<"t="<<t; 
return 0 ;
}