#include <iostream>
using namespace std;

struct lat2
{
    string merk = "Polygon";
    string type = "Sepeda Gunung";
    int tahun = 2013;
    string harga = "2.000.000";
};

struct lat2 sepeda;

int main(){
    cout << "Merk : " << sepeda.merk << endl;
    cout << "Type : " << sepeda.type << endl;
    cout << "Tahun : " << sepeda.tahun << endl;
    cout << "Harga : " << sepeda.harga << endl;
    
    return 0;
}
