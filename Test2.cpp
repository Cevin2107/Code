#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Kiểm tra nếu n vượt quá kích thước mảng
    if (n > 1000) {
        cout << "So luong phan tu vuot qua kich thuoc mang!" << endl;
        return 1;
    }

    int arr[1000];
    int count = 0;

    // Đọc các giá trị vào mảng
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Kiểm tra và đếm các phần tử chia hết cho 5
    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            cout << arr[i] << " ";
            count++;
        }
    }

    // In ra tổng số phần tử chia hết cho 5
    cout << endl << count << endl;

    return 0;
}