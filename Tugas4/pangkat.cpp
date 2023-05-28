#include <iostream>
using namespace std;

int pangkatrec(int a, int b);

int main(){
    int a,b;
    cout << "masukan bilangan yg dipangkatkan: ";
    cin >> a;
    cout << "pangkat: ";
    cin >> b;
    cout << "hasil "  << a << " pangkat " << b << " : "  << pangkatrec(a,b);
    return 0;
}

int pangkatrec(int a, int b){
    if (b==0)
        return 1;
    else
        return a* pangkatrec(a,b-1);
}
