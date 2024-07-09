#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string toUppercase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}
string toLowercase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
string reverseString(const string& str) {
    string result = str;
    reverse(result.begin(), result.end());
    return result;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string uppercaseStr = toUppercase(str);
    string lowercaseStr = toLowercase(str);
    string reversedStr = reverseString(str);

    cout << "Uppercase: " << uppercaseStr << endl;
    cout << "Lowercase: " << lowercaseStr << endl;
    cout << "Reversed: " << reversedStr << endl;
    return 0;
}
