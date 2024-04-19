#include <iostream>
using namespace std;
int main() {
    int daysUntilExpiration = (0 + rand() % 11);
    cout << daysUntilExpiration << "\n";
    if (daysUntilExpiration <= 10)
        cout << "your subscription will expire soon, renewe now";
        else if (daysUntilExpiration <= 5)
        cout << "your subscription expires in " << daysUntilExpiration << " days. renewe now and save 10%";
        else if (daysUntilExpiration = 1)
        cout << "your subscription expires within a day \n renew now and save 20%";
        else if (daysUntilExpiration = 0)
        cout << "your subscription has expired";
    else{
        cout << "you have an active subscription";
    }
}