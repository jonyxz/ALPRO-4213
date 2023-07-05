/*
Nama: Johan Ridho Akbar Auradhana
Nim : A11.2022.14472
Kelp: A11.4213
*/


#include <iostream>
using namespace std;

typedef struct mahasiswa
{
    string nama;
    string nim;
    int score[5];
    void printData(){
        cout << "Nama : " << nama <<endl;
        cout << "Nim : " << nim <<endl;
        for (int i=0;i<5;i++){
            cout << "Nilai " << i+1 << ":" << score[i] <<endl;
        }
    }

    void swapScore(int *a, int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }

    float sumScore(int *arr, int n){
        if (n == 0){
            return arr[0];
        }
        return arr[n] + sumScore(arr,n-1);

    }

     void BubbleSortRec(int *arr, int n)
    {
        if (n <= 1)
            return;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                swapScore(&arr[i], &arr[i + 1]);
        }

        BubbleSortRec(arr, n - 1);
    }

}mahasiswa;


int main() {
    cout << "Program Data Mahasiswa" << endl;
    //Declare m1
    mahasiswa m1 = {"Ardiawan Bagus", "A11.2020.99999", {90,91,99,75,80}};
    cout << "\nBefore swap" << endl;
    m1.printData();

    //Afer swap first and last element
    cout << "\nAfter swap" << endl;
    m1.swapScore(&m1.score[0], &m1.score[4]);
    m1.printData();

    //Average
    int n = sizeof(m1.score)/sizeof(m1.score[0]);
    cout << "\nNilai rata-rata :" << m1.sumScore(m1.score, n)/n << endl;

    //Sorting 
    cout << "\nAfter Sorting" << endl;
    m1.BubbleSortRec(m1.score,n);
    m1.printData();

    return 0;
}