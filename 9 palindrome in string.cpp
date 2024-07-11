#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;

bool isPalindrome(const char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (tolower(str[i]) != tolower(str[n - i - 1])) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    if (isPalindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrome" << endl;
    return 0;
}
