#include <iostream>
using namespace std;

int sumUpTo(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += i;
    return sum;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sumUpTo(n);
    cout << "The sum of all numbers from 1 to " << n << " is: " << result << endl;
    return 0;
}
