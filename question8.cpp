#include<iostream>
/* create a coardinate class for  3 varibles  x,y and z and overload comma operator
 such the when you write c3=(c1,c2) then c2 is assingment to c3 where c1,c2 and c3 are
 object 3D coordinate class ?
*/
using namespace std;
class coords3D
{
    double x,y,z;
    public:
     coords3D()
     {

     }
     coords3D(double x,double y,double z): x(x),y(y),z(z) // insilizer list
     {

     }
     void display()
     {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
     }
     coords3D operator,(coords3D obj)
     {
        coords3D temp;
        temp.x=obj.x;
        temp.y=obj.y;
        temp.z=obj.z;
        return temp;
     }
};
int main()
{  
    coords3D c1(6,7,4);
    coords3D c2(5,8,2);
    coords3D c3;
    c3=(c1,c2);
    c3.display();
    return 0;

}