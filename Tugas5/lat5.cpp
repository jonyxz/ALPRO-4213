#include <iostream>
using namespace std;

struct lat5
{
    string merk = "Polygon";
    string type = "Sepeda Gunung";
    int tahun = 2013;
    string harga = "2.000.000";
};

struct lat5 sepeda;
struct lat5 *sepedaptr; 

int main(){
    sepedaptr = &sepeda;
    cout << "Merk : " << sepedaptr->merk << endl;
    cout << "Type : " << sepedaptr->type << endl;
    cout << "Tahun : " << sepedaptr->tahun << endl;
    cout << "Harga : " << sepedaptr->harga << endl;
    
    return 0;
}
