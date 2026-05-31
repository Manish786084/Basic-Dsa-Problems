#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int thirdLargest(vector<int> &arr)
{
    int n = arr.size();
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    if (n < 3)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }
    return third;
}

int main()
{
    vector<int> arr = {2, 4, 1, 3, 5};
    cout << thirdLargest(arr) << endl;
    return 0;
}