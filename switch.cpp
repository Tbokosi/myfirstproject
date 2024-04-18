#include <iostream>
using namespace std;
int main() {
    int daysUntilExpiration = (0 + rand() % 11);
     int x = 10;
    switch (daysUntilExpiration)
    {
    case 0:
        cout << "your subscription has expired";
        break;
    case 1:
        cout << "your subscription expires within a day\n Renew now and save 20%!";
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "your subscription expires in " << daysUntilExpiration << "\n renew now and save up to 10 %!";
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "your subscription will expire soon. Renew now!";
        break;
    
    default:
        cout << "you have an active subscription";
        break;
    }
}