#include <iostream>
using namespace std;

int prime(int n)
{
	if(n<=1)
		return 0;
	else
	{
		for(int i=2;i<=n/2;i++){
			if(n%i==0)
				return 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int p = prime(n);
	if(p==0)
		cout<<"Prime number "<<endl;
	else
		cout<<"Not a prime number !"<<endl;
}
