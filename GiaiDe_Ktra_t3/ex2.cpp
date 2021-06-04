#include<iostream>
#include<math.h>
using namespace std;

void InputInt(int &n){
    cout << "Nhap n = ";
    do {
        cin >> n;
        if(n <= 2 || n > 50)
            cout << "Nhap lai n = ";
    }while(n <= 2 || n > 50);
}

void InputArray(float *a, int n){
    for(int i=0; i<n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void OutputArray(float *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << "  ";
}

bool IsPrime(int n){
    for(int i=2; i<=sqrt(n); i++)
        if(n % i == 0)
            return false;
    return n > 1;
}

float SumAllPrime(float *a, int n){
    float s = 0;
    for(int i=0; i<n; i++)
        if(IsPrime((int)a[i]))
            s += a[i];
    return s;
}

void DeleteANumber(float *a, int &n, int pos){
    for(int i=pos-1; i<n-1; i++)
        a[i] = a[i+1];
    n--;
}

void DeleteAllNumberSatisfy(float *a, int &n){
    for(int i=0; i<n; i++){
        while(a[i] - (int)a[i] >= 0.5 && i < n){
            DeleteANumber(a, n, i+1);
        }
    }
}

int main(){
	int n, k;
    float a[50];
    
    InputInt(n);
    InputArray(a, n);

    cout << "S = " << SumAllPrime(a, n) << endl;

    DeleteAllNumberSatisfy(a, n);

    OutputArray(a, n);
	
    return 0;
}