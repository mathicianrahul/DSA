// #include <iostream>
// using namespace std;
// int main() {
//   int n = 5;
//   int oddSum = 0;

//   for (int i = 1; i <= n; i++) {
//     if (i % 2 != 0) {
//       oddSum = oddSum + i;
//     }
//   }
//   cout << oddSum;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n = 5;
//   int OddSum = 0;
//   int i = 0;

//   while (i <= n) {
//     if (i % 2 != 0) {
//       OddSum = OddSum + i;
//     }
//     i++;
//   }
//   cout << "OddSum:" << OddSum << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n = 4;
//   int evenSum = 0;

//   for (int i = 1; i <= n; i++) {
//     if (i % 2 == 0) {
//       evenSum += i;
//     }
//   }
//   cout << "evenSum :" << evenSum << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   bool isPrime = true;
//   int n;
//   cout << "Enter Number: ";
//   cin >> n;
//   for (int i = 2; i < n; i++) {
//     if (n % i == 0) {
//       isPrime = false;
//       break;
//     }
//   }
//   if (isPrime == true) {
//     cout << "Prime" << endl;
//   } else {
//     cout << "Not Prime" << endl;
//   }
//   return 0;
// }

#include <iostream>
using namespace std;
int main() {
  for (int i = 1; i <= 5; i++) {
    int m = 30;
    for (int i = 1; i <= m; i++) {
      cout << "*";
    }
    cout << endl;
  }
}