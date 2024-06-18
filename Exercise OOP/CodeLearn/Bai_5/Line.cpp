#include"Point.cpp"
#include<math.h>

class Line{
private:
    Point begin, end;
public:
    Line(Point begin, Point end){
        this->begin = begin;
        this->end = end;
    }

    Line(int x1, int y1, int x2, int y2){
        this->begin = Point(x1, y1);
        this->end = Point(x2, y2);
    }

    void setBegin(Point begin){ this->begin = begin; }
    Point getBegin(){ return begin; }

    void setEnd(Point end){ this->end = end; }
    Point getEnd(){ return end; }

    double getLength(){
        return sqrt(pow(begin.getX() - end.getX(),2) + pow(begin.getY() - end.getY(),2));
    }
};