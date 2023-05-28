#include <iostream>
using namespace std;

int bagirec(int a, int b);

int main(){
    int a,b;
    cout << "masukan bilangan untuk dibagi: ";
    cin >> a;
    cout << "bagi: ";
    cin >> b;
    cout << "hasil " << a << " dibagi " << b << " : "  << bagirec(a,b);
    return 0;
}


int bagirec(int a, int b){
    if (a<b)
        return 0;
    else
        return 1 + bagirec(a-b,b); 
}
