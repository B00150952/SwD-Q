#include <iostream>

using namespace std;

// Base class
class Shape 
{
public:
    // pure virtual function
    virtual float getArea() const = 0;

    void setWidth(float w) {
        width = w;
    }

    void setHeight(float h) {
        height = h;
    }

protected:
    float width = 0.0;
    float height = 0.0;
};

class Triangle : public Shape
{
public:
    float getArea() const override {
        return (width * height) / 2.0;
    }
};

int main() 
{
    Triangle tri;
    tri.setWidth(5.0);
    tri.setHeight(7.0);

    cout << "Total Triangle area: " << tri.getArea() << endl;
    return 0;
}

