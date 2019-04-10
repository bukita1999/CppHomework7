#include<iostream>
using namespace std;
class container
{
protected:
double radius;
public:
container(double radius)
{
container::radius=radius;
}
virtual double surface_area()=0;
virtual double volume()=0;
};
class cube:public container
{
public:
cube(double radius):container(radius){};
double surface_area()
{
return radius*radius*6;
}
double volume()
{
return radius*radius*radius;
}
};
class sphere:public container
{
public:
sphere(double radius):container(radius){};
double surface_area()
{
return 4*3.1416*radius*radius;
}
double volume()
{
return 3.1416*radius*radius*radius*4/3;
}
};
class cylinder:public container
{
double height;
public:
cylinder(double radius,double height):container(radius)
{
cylinder::height=height;
}
double surface_area()
{
return 2*3.1416*radius*(height+radius);
}
double volume()
{
return 3.1416*radius*radius*height;
}
};
int main()
{
container *p;
cube obj1(10);
sphere obj2(6);
cylinder obj3(4,5);
p=&obj1;
cout<<"This"<<endl;
cout<<endl;
cout<<p->surface_area()<<endl;
cout<<p->volume()<<endl;
p=&obj2;
cout<<p->surface_area()<<endl;
cout<<p->volume()<<endl;p=&obj1;
p=&obj3;
cout<<p->surface_area()<<endl;
cout<<p->volume()<<endl;
return 0;
}