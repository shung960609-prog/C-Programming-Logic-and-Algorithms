#include <iostream>
using namespace std;
const double PI=3.1415926;

class Cuboid
{
private:
    double length;
    double width;
    double height;
public:
    void set_data(double l,double w,double h)
	{
        length=l;
        width=w;
        height=h;
    }
    double volume()
	{
        return length*width*height;
    }
    double area()
	{
        return 2*(length*width+length*height+width*height);
    }
};
class Cylinder
{
private:
    double radius;
    double height;
public:
    void set_data(double r,double h)
	{
        radius=r;
        height=h;
    }
    double volume()
	{
        return PI*radius*radius*height;
    }
    double area()
	{
        return 2*PI*radius*(radius+height);
    }
};
class Sphere
{
private:
    double radius;
public:
    void set_data(double r)
	{
        radius=r;
    }
    double volume()
	{
        return (4.0/3.0)*PI*radius*radius*radius;
    }
    double area()
	{
        return 4.0*PI*radius*radius;
    }
};
int main(void) {
    Cuboid x; x.set_data(1.0,1.0,1.0);
    Cylinder y; y.set_data(1.0,1.0);
    Sphere z; z.set_data(1.0);
	cout <<"Total Volume="
         <<x.volume()+y.volume()+z.volume()
         <<endl;
	cout <<"Total Area="
         <<x.area()+y.area()+z.area()
         <<endl;
	return 0;
}
