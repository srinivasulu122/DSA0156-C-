#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
	int a,b;
	cout<<"Enter the 2 values : ";
	cin>>a>>b;
	cout<<endl<<"GCD = "<<gcd(a,b);
}
