#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Displaying addresses of elements in the array:\n";
    
    for (int i = 0; i < n; ++i)
        cout << "Address of arr[" << i << "] = " << &arr[i] << endl;

    return 0;
}
