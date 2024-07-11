#include <iostream>
#include <cmath>
using namespace std;

double area(double radius)
{
	return M_PI*radius*radius;
}

int main()
{
	double r;
	cout<<"Enter radius : ";
	cin>>r;
	cout<<"Area = "<<area(r);
}
