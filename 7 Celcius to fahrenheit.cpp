#include <iostream>
using namespace std;

double ctof(double celsius)
{
	return (9.0/5.0 * celsius) + 32.0;
}

int main()
{
	double c;
	cout<<"Enter the celcius : ";
	cin>>c;
	cout<<endl<<"Fahrenheit = "<<ctof(c);
}
