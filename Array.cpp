#include <iostream>
#include <array>
#include <string>
using namespace std;
int main() {
    array <string, 8> firstArray = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = firstArray.size();
    for (int i = 0; i < size; i++)
    {
        string ofArray = firstArray[i];
        char ch = ofArray.at(0);
        if (ch == 'B')
        {
            cout << firstArray[i] << "\n";
        }
        
    }
    
 }