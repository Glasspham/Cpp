#pragma once
#include<iostream>
using namespace std;

class Shape{
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};