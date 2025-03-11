#include <iostream>
using namespace std;

int gcd (int a, int b) {
    while (b != 0) {
     int temp = b;
     b = a % b;
     a = temp;
    }
     return a;
}

int main() {
     int a, b;
     cin >> a >> b;
     cout << gcd(a, b);
     return 0;
}

/* temp = 6
b = 2
a = 6
temp = 2
b = 0
a = 2 */