#include <iostream>
using namespace std;
int findNthFibonacci(int n)
{
    if (n <= 1)
        return n;
    int prev1 = 0, prev2 = 1, current;
    for (int i = 2; i <= n; i++)
	{
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}
int main()
{
    int n;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;
    int result = findNthFibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;
    return 0;
}
