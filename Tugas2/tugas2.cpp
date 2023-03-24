#include <iostream>
using namespace std;

string ajg(bool a){
    if(a==true)
        return "true";
    else
        return "false";
}

//fungsi isEven
bool isEven(int x){
    if ( x % 2 == 0)
        return true;
    else
        return false;
}

//fungsi isOdd
bool isOdd(int x){
    if ( x % 2 != 0)
        return true;
    else
        return false;
}

//fungsi isFactor
bool isFactor(int x, int f){
    return x%f ==0;
}

//fungsi MaxArray
int maxArray(int A[],int n){
    int temp = 0;
    for(int i=0; i<n; i++){
        temp = max(temp,A[i]); 
    }return temp;
}

//fungsi minArray
int minArray(int A[],int n){
    int temp = 0;
    for(int i=0; i<n; i++){
        temp = min(temp,A[i]); 
    }return temp;
}

//fungsi max
int maxx(int a, int b){
    int temp;
    if(a>b)
        temp=a;
    else
        temp=b;
    return temp;
}

//fungsi min
int minn(int a, int b){
    int temp;
    if(a<b)
        temp=a;
    else
        temp=b;
    return temp;
}

//fungsi sumEven
int sumEven(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }return sum;
}

//fungsi sumOdd
int sumOdd(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }return sum;
}

//fungsi Swap
void swapp(int a,int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Nilai a: " << a << " dan " << "Nilai b: " << b;
}

//fungsi isFound
bool isFound(int a[],int x,int n){
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }return false;
}

int main()
{
    int x;
    //isEven
    cout << "Masukan bilangan genap: ";
    cin >> x;
    cout << ajg(isEven(x)) << endl;

    //isOdd
    cout << "Masukan bilangan ganjil: ";
    cin >> x;
    cout << isOdd(x) << endl;

    int f;
    //isFactor
    cout << "Masukan Nilai x: ";
    cin >> x;
    cout << "Masukan Nilai f: ";
    cin >> f;
    cout << "Hasil faktor dari " << x << " dan " << f << ": " << isFactor(x,f) << endl;

    //maxArray

    //swap
    int a,b;
    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;
    swapp(a,b);

    return 0;
}
