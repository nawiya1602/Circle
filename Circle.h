#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
    private:
        float radius;
        float area;
        float total, sum;
    public:
        Circle (): radius(0), area(0.0){}
        Circle(float r): radius(r){}
        void set_radius(float radius);
        void cal_area();
        void cal_area_obj(Circle circleC, Circle circleA);
        Circle set_area_obj(Circle);
        float get_radius();
        float get_area();
        float get_total_radius();




};
#endif