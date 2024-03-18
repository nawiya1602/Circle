#include "Circle.h"
#include <math.h>
#include <iostream>
using namespace std;

void Circle::set_radius(float radius)
{
    this -> radius = radius;
}

void Circle::cal_area()
{
    if (radius > 0)
    {
        area = M_PI*(radius*radius);
    }
    else
    {
        area = 0;
        cout << "Erorr : Radius Negative Value" << endl;
    }
    
}

void Circle::cal_area_obj(Circle circleA,Circle circleC)
{
    total =circleA.radius + circleC.radius;
    if (total > 0)
    {
        area = M_PI*(total*total);
    }
    else
    {
        area = 0;
        cout << "Erorr : Radius Nagatiive Value" << endl;
    }

}

Circle Circle::set_area_obj(Circle circleC)
{
    Circle sum;
    sum.radius = radius + circleC.radius;
    if (sum.radius > 0)
    {
        area = M_PI*(sum.radius+sum.radius);
    }
    else
    {
        area = 0;
        cout << "Erorr : Radius Nagatiive Value" << endl;
    }
        return sum;

}

float Circle::get_radius()
{
    return radius;
}

float Circle::get_area()
{
    if (radius < 0)
    {
        return 0;
    }
    return area;
}

float Circle::get_total_radius()
{
    return total;
}
