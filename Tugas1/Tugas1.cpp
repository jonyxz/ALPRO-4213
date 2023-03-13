#include <iostream>
using namespace std;

//fungsi nomor 1
int tambah(int a,int b){
    return a+b;
}

//fungsi nomor 2
int kurang(int a,int b){
    return a-b;
}

//fungsi nomor 3
int jmlharr(int panjang){
    int arr[panjang];
    int total = 0;
    for (int i=0;i<panjang;i++){
        cout << "masukan nilai ke-" << i+1 << " : ";
        cin >> arr[i];
        total = total + arr[i];
    }
    return total;
}

//fungsi nomor 4
float rata2(float total, int panjang){
    return total/panjang;
}

int main()
{
    int a,b;
    //nomor 1
    cout << "masukan 2 bilangan untuk ditambah" << endl;
    cout << "bilangan 1 : "  ;
    cin >> a;
    cout << "bilangan 2 : "  ;
    cin >> b;
    cout <<  "Hasil tambah " << a << " dan " << b << " adalah " << tambah(a,b) << endl;

    //nomor 2
    cout << "masukan 2 bilangan untuk dikurang" << endl;
    cout << "bilangan 1 : "  ;
    cin >> a;
    cout << "bilangan 2 : "  ;
    cin >> b;
    cout <<  "Hasil kurang " << a << " dan " << b << " adalah " << kurang(a,b) << endl;

    //nomor 3
    int panjang;
     cout << "masukan panjang isi array : ";
     cin >> panjang;
     int total = jmlharr(panjang);
     cout << "jumlah nilai total : " << total << endl.,;

    //nomor 4
    cout << "nilai rata-rata : " << rata2(total,panjang);

    return 0;
}
