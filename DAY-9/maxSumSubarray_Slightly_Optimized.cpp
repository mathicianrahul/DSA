#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;
void maxSumSubarray2(int *arr, int n) {
  int maxSum = INT_MIN;
  for (int start = 0; start < n; start++) {
    int currSum = 0;
    for (int end = start; end < n; end++) {
      currSum = currSum + arr[end];
      cout << currSum << ',';
      maxSum = max(currSum, maxSum);
    }
    cout << endl;
  }
  cout << "The Maximum Subarray Sum is = " << maxSum << endl;
}

int main() {

  int arr[] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(int);
  maxSumSubarray2(arr, n);
  return 0;
}