#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class String {
private:
    string value;

public:
    String() {}
    String(const char* val) : value(val) {}
    String(const string& val) : value(val) {}
    friend istream& operator>>(istream& input, String& str) {
        input >> str.value;
        return input;
    }
    bool operator==(const String& other) const {
        string str1 = value;
        string str2 = other.value;

        transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
        transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

        return str1 == str2;
    }
};

int main() {
    String str1;
    String str2;
    cout << "Enter 1st String : ";
    cin >> str1;
    cout << "Enter 2nd String : ";
    cin >> str2;
    if (str1 == str2)
        cout << "Strings are Equal" << endl;
    else
        cout << "Strings are not Equal" << endl;
    return 0;
}

