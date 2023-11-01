#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void minAbsSumPair(int arr[], int n) {
    if (n < 2) {
        cout << "Invalid Input";
        return;
    }
    int min_l = 0, min_r = 1, min_sum = arr[0] + arr[1];
    for (int l = 0; l < n - 1; l++) {
        for (int r = l + 1; r < n; r++) {
            int sum = arr[l] + arr[r];
            if (abs(min_sum) > abs(sum)) {
                min_sum = sum;
                min_l = l;
                min_r = r;
            }
        }
    }
    cout << "The two elements whose sum is closest to zero are " << arr[min_l] << " and " << arr[min_r];
}

int main() {
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    minAbsSumPair(arr, 10);
    return 0;
}
