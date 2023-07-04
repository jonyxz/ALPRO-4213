#include <iostream>
#include <chrono>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int len = 10;
    int arr[len] = {1,2,3,4,5,6,7,8,9,10};
    int key = 5;

    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    int index = binarySearch(arr, 0, len - 1, key);
    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

    chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;

    int space = sizeof(arr) + sizeof(len);
    cout << "Kompleksitas ruang: " << space << " bytes" << endl;

    if (index != -1) {
        cout << "Key ditemukan pada indeks ke-" << index << endl;
    }
    else {
        cout << "Key tidak ditemukan" << endl;
    }

    return 0;
}