// C++ program to find the second largest element in the array
#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int n = arr.size();
    int largest = -1, secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);
    return 0;
}