#include"Shape.cpp"
#include"Rectangle.cpp"
#include"Circle.cpp"

int main() {
    Shape** shapes = new Shape * [3];
    shapes[0] = new Rectangle(3.4, 5.3);
    shapes[1] = new Circle(5.5);
    shapes[2] = new Rectangle(7.4, 4.3);
    for (int i = 0; i < 3; i++) {
        cout << "Area of shapes[" << i << "]: " << shapes[i]->getArea() << endl;
        cout << "Perimeter of shapes[" << i << "]: " << shapes[i]->getPerimeter() << endl;
    }
    return 0;
}