#include <iostream>
#include <string>
using namespace std;

int count(const string& str) {
    return str.length();
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int c = count(s);
    cout << "The number of characters in the string is: " << c << endl;
}
