#include"Point.cpp"
#include<vector>
#include<math.h>

class PolyLine{
private:
    vector<Point>points;
    double distance(int x1, int y1, int x2, int y2){
        return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    }
public:
    PolyLine(){}
    PolyLine(vector<Point>points){
        this->points = points;
    }

    void appendPoint(Point point){
        this->points.push_back(point);
    }
    void appendPoint(int x, int y){
        this->points.push_back(Point(x,y));
    }

    double getLength(){
        double result = 0;
        for(int i = 0; i < points.size() - 1; ++i)
            result += distance(points[i].getX(), points[i].getY(), points[i + 1].getX(), points[i + 1].getY());
        return result;
    }
};