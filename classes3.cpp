#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }

    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    ~Rectangle() {
        
    }

    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    float getLength() {
        return length;
    }

    float getWidth() {
        return width;
    }

    float calculateArea() {
        return length * width;
    }
};

int main() {
    float len1, wid1, len2, wid2;

    cout << "Enter the length of the first rectangle: ";
    cin >> len1;
    cout << "Enter the width of the first rectangle: ";
    cin >> wid1;

    Rectangle rect1(len1, wid1);
    cout << "Area of the first rectangle is: " << rect1.calculateArea() << std::endl;

    cout << "\nEnter the length of the second rectangle: ";
    cin >> len2;
    cout << "Enter the width of the second rectangle: ";
    cin >> wid2;

    Rectangle rect2(len2, wid2);
    cout << "Area of the second rectangle is: " << rect2.calculateArea() << std::endl;

    return 0;
}