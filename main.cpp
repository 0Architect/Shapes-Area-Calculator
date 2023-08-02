#include <iostream>

class Shape
{
    public:
        virtual double getArea() = 0;
};

class Circle : public Shape
{
    private:
        double radius;
    
    public:
        Circle(double radius) : radius(radius){};

        double getArea()
        {
            return radius * radius * 3.14;
        }
};

class Rectangle : public Shape
{
    private:
        double height;
        double width;
    
    public:
        Rectangle(double height, double width) : height(height), width(width){};

        double getArea()
        {
            return height * width;
        }
};

int main()
{
    Shape *array[4];
    array[0] = new Circle(5);
    array[1] = new Rectangle(5, 10);
    array[2] = new Circle(10);
    array[3] = new Rectangle(10, 15);

    for(Shape *i: array) std::cout << i->getArea() << " ";
    return 0;
}