#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            cout << arr[i] << " ";
            count++;
        }
    }
    cout << count;
    return 0;
}