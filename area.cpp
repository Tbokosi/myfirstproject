#include <iostream>
using namespace std;
double areaForSqaiure(double width){
    double area = width * width;
    return area;
}
double areaForLectangle (double width, double heeight){
    double area = width * heeight;
    return area;
}
double areaForTrianlge (double base, double heeight){
    double area = 0.5 * base * heeight;
    return area;
}
int main() {
    int option;
    cout << "please select the are of the shape you want to calculate\n 1. square\n 2. rectangle\n 3. triangle\n 4. quit program" << endl;
    cin >> option;
    while(option != 4){
        double ans;
        double width;
        double heeight;
        double base;
        switch (option)
        {
        case 1:
            cout << "enter your width\n";
            cin >> width;
            ans = areaForSqaiure(width);
            cout << "your area is " << ans << endl;
            break;
        case 2:
            cout << "enter your width and height\n";
            cin >> width;
            cin >> heeight;
            ans = areaForLectangle(width, heeight);
            cout << "your area is " << ans << endl;
            break;
        case 3:
            cout << "enter your base and height\n";
            cin >> base;
            cin >> heeight;
            ans = areaForTrianlge(base, heeight);
            cout << "your area is " << ans << endl;
            break;
        default:
            cout << "your input was 5 which is an invalid input\n please enter a valid input" << endl;
            break;
        }
    cout << "please select the are of the shape you want to calculate\n 1. square\n 2. rectangle\n 3. triangle\n 4. quit program" << endl;
    cin >> option;
    }

}