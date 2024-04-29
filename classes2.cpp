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

    ~Rectangle() {
        // Destructor
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
    Rectangle rect;
    float len, wid;

    cout << "Enter the length of the rectangle: ";
    cin >> len;
    rect.setLength(len);

    cout << "Enter the width of the rectangle: ";
    cin >> wid;
    rect.setWidth(wid);

    cout << "Area of the rectangle is: " << rect.calculateArea() << endl;

    return 0;
}