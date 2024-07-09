#include <iostream>
using namespace std;

int main() {
    const int VOTING_AGE = 18;
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= VOTING_AGE)
        cout << "You are eligible to vote." << endl;
    else
	{
       int years_left = VOTING_AGE - age;
        cout << "You are not eligible to vote." << endl;
        cout << "You will be eligible to vote in " << years_left << " year(s)." << endl;
    }
    return 0;
}
