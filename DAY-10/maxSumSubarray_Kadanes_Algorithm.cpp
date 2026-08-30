// Kadane's Algorithm for maximum sum Of Subarray Problem
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

void SubarraySum3(int *arr, int n) {
  int maxSum = INT_MIN;
  int currSum = 0;

  for (int i = 0; i < n; i++) {
    currSum = currSum + arr[i];
    maxSum = max(currSum, maxSum);

    if (currSum < 0) {
      currSum = 0;
    }
    cout << currSum << ",";
  }
  cout << endl;
  cout << "Maximum Sum of Subarray = " << maxSum << endl;
}

int main() {
  int arr[] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(int);
  SubarraySum3(arr, n);
}//dfgdfgdfgdfg