#include <iostream>
using namespace std;

class AreaCalculator {
public:
    const float PI = 3.14159;

    float area(float radius) {
        return PI * radius * radius;
    }

    int area(int length, int width) {
        return length * width;
    }

    float area(float base, float height) {
        return 0.5f * base * height;
    }
};

int main() {
    AreaCalculator ac;
    float radius, base, height;
    int length, width;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;

    cout << "\n--- Area Results ---" << endl;
    cout << "Area of Circle: " << ac.area(radius) << endl;
    cout << "Area of Rectangle: " << ac.area(length, width) << endl;
    cout << "Area of Triangle: " << ac.area(base, height) << endl;

    return 0;
}
