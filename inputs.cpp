#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <iterator>
#include <algorithm>
using namespace std;
string CapitalizeSecondLetter(const string& text) {
    string result;
    bool capitalizeNext = false;

    for (char c : text) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                result += toupper(c); 
                capitalizeNext = false;
            } else {
                result += c; 
            }
        } else {
            result += c; 
            capitalizeNext = true; 
        }
    }

    return result;
}
void Reverse(std::string& str) {
    std::reverse(str.begin(), str.end());
}
unsigned int countVowels(const std::string& str) {
    unsigned int vowelCount = 0;
    for (char c : str) {
        if (std::isalpha(c)) { 
            char lowercaseC = std::tolower(c); 
            if (lowercaseC == 'a' || lowercaseC == 'e' || lowercaseC == 'i' || lowercaseC == 'o' || lowercaseC == 'u') {
                ++vowelCount;
            }
        }
    }
    return vowelCount;
}
void capitalizeSecondLetter(std::string& str) {
    bool capitalizeNext = true;

    for (char& ch : str) {
        if (std::isalpha(ch)) {
            if (capitalizeNext) {
                ch = std::toupper(ch);
                capitalizeNext = false;
            }
            else {
                capitalizeNext = true;
            }
        }
        else {
            capitalizeNext = true; 
        }
    }
}

int countWordsInString(const std::string& str) {
    std::stringstream stream(str);
    return std::distance(std::istream_iterator<std::string>(stream), std::istream_iterator<std::string>());
}

int main() {

    std::string file_path = "C:/Users/titus/PROJECTS/helloworld/inputs.txt";

    try {
        
        std::ifstream file(file_path);
        if (!file.is_open()) {
            std::cerr << "Error opening file at path: " << file_path << std::endl;
            return 1;
        }
        std::string fileData;
        std::getline(file, fileData);
       
        file.close();

        std::cout << "Contents of the file assigned to 'fileData':\n";
        std::cout << fileData << std::endl;
         unsigned int numVowels = countVowels(fileData);

        std::cout << "Number of vowels in the text: " << numVowels;
        int wordCount = countWordsInString(fileData);
    std::cout << "Number of words in the string: " << wordCount << std::endl;

    Reverse(fileData); 

    std::cout << "Reversed statement from the file:" << std::endl;
    std::cout << fileData << std::endl;
     Reverse(fileData); 

     string modifiedString = CapitalizeSecondLetter(fileData);

    cout << "Modified string: " << modifiedString << endl;

     } catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
        return 1;
    }
    

    return 0;
}
