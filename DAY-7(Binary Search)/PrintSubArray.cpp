#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n) {

  for (int start = 1; start < n; start++) {
    int i = 0;
    for (int end = start; end < n; end++) {
      cout << end << i;
      if (i == n) {
        break;
      }
      i++;
    }
    cout << endl;
  }
}
// output:

// 1, 12, 123, 1234, 12345
// 2, 23, 234, 2345
// 3, 34, 345
// 4, 45
// 5

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;

  printSubarrays(arr, n);

  return 0;
}

// Output:
// (0,0) (0,1) (0,2) (0,3) (0,4)
// (1,1) (1,2) (1,3) (1,4)
// (2,2) (2,3) (2,3)
// (3,3) (3,4)
// (4,4)  vbb
