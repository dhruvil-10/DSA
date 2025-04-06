#include <iostream>
#include <vector>
using namespace std;

void rearrangeArray(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        } else {
            if (arr[i] < arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        rearrangeArray(arr, N);

        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}