#include <iostream>
#include<chrono>
using namespace std;

void Merge(int * a, int low, int high, int mid) {
    int i, j, k, temp[high - low + 1];
    i = low;
    k = 0;
    j = mid + 1;

    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            temp[k] = a[i];
            k++;
            i++;
        } else {
            temp[k] = a[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        temp[k] = a[i];
        k++;
        i++;
    }

    while (j <= high) {
        temp[k] = a[j];
        k++;
        j++;
    }


    for (i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
}

void MergeSort(int * a, int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, high, mid);
    }
}

int main() {
    int arr[] = {3, 1, 5, 2, 7, 0, 9, 4};
	int n = sizeof(arr)/sizeof(arr[0]);

	chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    MergeSort(arr, 0, n - 1);
    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

	chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;

	int space = sizeof(arr) + sizeof(n);
    cout << "Kompleksitas ruang: " << space << " bytes" << endl;

    int i;
    cout<<"Sorted array : \n";
    for (int i = 0; i<n ; i++)
		cout << arr[i] << " ";
	cout << endl;
    return 0;
}