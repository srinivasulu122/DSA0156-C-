#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(const vector<int>& arr)
{
    int left = 0, right = arr.size() - 1;
    int start = arr[0];
    while (left <= right)
	{
        int mid = left + (right - left) / 2;
        if (arr[mid] != start + mid)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return start + left;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << "The smallest missing element is: " << findMissingElement(arr) << endl;
    return 0;
}
