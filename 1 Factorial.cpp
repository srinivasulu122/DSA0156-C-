#include <iostream>
using namespace std;

int fact(int n)
{
	int f=1;
	if(n<=1)
		return 1;
	else
	{
		for(int i=1;i<=n;i++)
			f = f*i;
	}
	return f;
}

int main()
{
	int n,f;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Factorial = "<<fact(n)<<endl;
}
