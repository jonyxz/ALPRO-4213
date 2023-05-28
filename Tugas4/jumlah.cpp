#include <iostream>
using namespace std;

int jumlahrec(int a, int b);

int main(){
    int a,b;
    cout << "masukan bilangan untuk dijumlah\n" << "bilangan 1: ";
    cin >> a;
    cout << "bilangan 2: ";
    cin >> b;
    cout << "hasil penjumlahan bilangan "  << a << " dan " << b << " : "  << jumlahrec(a,b);
    return 0;
}

int jumlahrec(int a, int b){
    if (b==0)
        return a;
    else
        return 1+ jumlahrec(a,b-1);
}
