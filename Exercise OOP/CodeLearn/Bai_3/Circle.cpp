#include"Shape.cpp"

class Circle : public Shape{
private:
    double radius;
public:
    Circle(double radius){
        this->radius = radius;
    }

    double getArea(){
        return radius * radius * 3.14;
    }

    double getPerimeter(){
        return 2 * 3.14 * radius;
    }
};