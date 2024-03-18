#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
    float A,B,C,D,E,r,sum;
    cout << "Enter Radius Circle A (meter) : "; cin >> r;

    Circle circleA(r);
    Circle circleB(circleA);
    Circle circleC(8);
    Circle circleD;
    Circle circleE;
    circleA.cal_area();
    circleB.cal_area();
    circleC.cal_area();
    circleD.cal_area_obj(circleA,circleC);
    circleE = circleB.set_area_obj(circleC);
    
    
    cout << "Circle (A) : " << circleA.get_radius() << "(meter) Area = " << circleA.get_area() << "square meter" << endl;
    cout << "Circle (B) : " << circleB.get_radius() << "(meter) Area = " << circleB.get_area() << "square meter" << endl;
    cout << "Circle (C) : " << circleC.get_radius() << "(meter) Area = " << circleC.get_area() << "square meter" << endl;
    cout << "Circle (D) : " << circleD.get_radius() << "(meter) Area = " << circleD.get_area() << "square meter" << endl;
    cout << "Circle (E) : " << circleE.get_radius() << "(meter) Area = " << circleE.get_area() << "square meter" << endl;


    return 0;
}