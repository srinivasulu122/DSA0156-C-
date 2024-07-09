#include <iostream.h>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "You are eligible to vote." << endl;
    else
	{
        int years_left = 18 - age;
        cout << "You are not eligible to vote." << endl;
        cout << "You will be eligible to vote in " << years_left << " year(s)." << endl;
    }
    return 0;
}
