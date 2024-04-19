#include <iostream>
using namespace std;
int main() {
    int i;
    cout << "Enter an integer value between 5 and 10\n";
    int input;
    cin >> input;
    while (input < 5 || input >10){
        cout <<"Sorry, you entered an onvali numbe. Please try again\n";
        cin >> input;
     }
 cout << "your in put has been accepted";
    


}