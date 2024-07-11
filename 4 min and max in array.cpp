#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int small(const vector<int>& a)
{
	return a[0];
}
int large(const vector<int>& a)
{
	return a[a.size() - 1];
}

int main()
{
	int n;
	cout<<"Enter the no. of elements : ";
	cin>>n;
	vector <int> a(n);
	cout<<"Enter the elements of array : ";
	for(int i = 0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	cout<<"Smallest number = "<<small(a)<<endl;
	cout<<"Largest number = "<<large(a)<<endl;
}
