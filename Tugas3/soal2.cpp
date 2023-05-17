#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;
        while (key > arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int size) {
    for (int step = 0; step < size; step++) {
        for (int i = 0; i < size -1; i++) {
            if (arr[i] < arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5,9,6,4,2,3,1,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pilih;
    cout << "array awal : ";
    printArray(arr, size);
    cout << endl;
    cout << "pilih metode sorting" << endl;
    cout << "1.insertionSort" << endl;
    cout << "2.bubbleSort" << endl;
    cout << "pilih metode : ";
    cin >> pilih;
    cout << endl;
    if(pilih==1){
        insertionSort(arr, size);
        cout << "sorting array descending :";
        printArray(arr, size);
    }else if(pilih==2){
        bubbleSort(arr, size);
        cout << "sorting array descending : ";
        printArray(arr, size);
    }
    
    
}