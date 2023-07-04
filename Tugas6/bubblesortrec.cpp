#include <iostream>
#include <chrono>
using namespace std;

void printArray(int arr[], int n)
{
	for (int i=0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void bubbleSort(int arr[], int n)
{
	// Base 
	if (n <= 0)
		return;
    
	for (int i=0; i<n-1; i++){
		if (arr[i] > arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
    }
	bubbleSort(arr, n-1);
}


int main()
{
	int arr[] = {2,3,1,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    bubbleSort(arr, n);
	chrono::steady_clock::time_point endTime = chrono::steady_clock::now();
	
	chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;

	int space = sizeof(arr) + sizeof(n);
    cout << "Kompleksitas ruang: " << space << " bytes" << endl;

	cout<<"Sorted array : \n";
	printArray(arr, n);
	return 0;
}
