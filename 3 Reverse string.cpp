#include <iostream>
#include <cstring>
using namespace std;

void reverse(char* str)
{
    int n = strlen(str);
    char* start = str;
    char* end = str + n - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[20];
    cout << "Enter a string: ";
    cin.getline(str, 20);
    reverse(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
