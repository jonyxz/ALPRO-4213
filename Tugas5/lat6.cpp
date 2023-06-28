#include <iostream>
using namespace std;

enum hari{senin,selasa,rabu,kamis,jumat,sabtu,minggu};

int main(){
    hari x = kamis;
    if (x == sabtu || x == minggu)
        cout << "libur" << endl;
    else 
        cout << "kerja" << endl;
    return 0;
}