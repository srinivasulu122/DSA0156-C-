#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}
void convertArrayToFahrenheit(double* arr, int n) {
    for(int i = 0; i < n; i++)
        arr[i] = celsiusToFahrenheit(arr[i]);
}
void printArray(double* arr, int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    double celsiusArr[n];
    cout << "Enter the Celsius values:" << endl;
    for(int i = 0; i < n; i++)
        cin >> celsiusArr[i];
    convertArrayToFahrenheit(celsiusArr, n);
    cout << "Converted Fahrenheit values: ";
    printArray(celsiusArr, n);
    return 0;
}
