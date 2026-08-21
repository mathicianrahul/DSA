#include <climits>
#include <iostream>
using namespace std;

void maxSubarraySum(int *arr, int n) {
  int MaxSum =
      INT_MIN; // we cannot take "0"incase sometime arrays having all -ve values
               // so at the end it will print 0; instead of Subarray Max;;;
  for (int start = 0; start < n; start++) {
    for (int end = start; end < n; end++) {
      int currSum = 0;
      for (int i = start; i <= end; i++) {
        currSum = currSum + arr[i];
      }
      cout << currSum << ",";
      MaxSum = max(MaxSum, currSum);
    }
    cout << endl;
  }
  cout << "Maximum sum of SubArray = " << MaxSum;
}
int main() {
  int arr[] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(int);
  maxSubarraySum(arr, n);
  return 0;
}
