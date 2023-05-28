#include <iostream>
using namespace std;

int kalirec(int a, int b);

int main(){
    int a,b;
    cout << "masukan bilangan untuk dikali\n" << "bilangan 1: ";
    cin >> a;
    cout << "bilangan 2: ";
    cin >> b;
    cout << "hasil perkalian bilangan "  << a << " dan " << b << " : "  << kalirec(a,b);
    return 0;
}

int kalirec(int a, int b){
    if (b==0)
        return 0;
    else
        return a + kalirec(a,b-1); 
}
