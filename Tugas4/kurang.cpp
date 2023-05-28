#include <iostream>
using namespace std;

int kurangrec(int a, int b);

int main(){
    int a,b;
    cout << "masukan bilangan untuk dikurang\n" << "bilangan 1: ";
    cin >> a;
    cout << "bilangan 2: ";
    cin >> b;
    cout << "hasil pengurangan bilangan "  << a << " dan " << b << " : " << kurangrec(a,b);
    return 0;
}

int kurangrec(int a, int b){
    if (b==0)
        return a;
    else
        return kurangrec(a-1,b-1);   
}
