#include<iostream>
using namespace std;

void InputInt(int &n){
    cout << "Nhap n = ";
    do {
        cin >> n;
        if(n < 2 || n >= 50)
            cout << "Nhap lai n = ";
    }while(n < 2 || n >= 50);
}

void InputArray(int *a, int n){
    for(int i=0; i<n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void OutputArray(int *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

void InsertANumber(int *a, int &n, int pos, int val){
	for(int i=n; i>=pos; i--)
		a[i] = a[i-1];
	a[pos] = val;
	n++;
}

bool IsPerfectNumber(int n){
	int s = 0;
	for(int i=1; i<n; i++)
		if(n % i == 0)
			s += i;
	if(s == n)
		return true;
	return false;
}

void InsertAll(int *a, int &n, int k){
	if(IsPerfectNumber(k))
		return;
	for(int i=0; i<n; i++){
		if(IsPerfectNumber(a[i])){
			InsertANumber(a, n, i, k);
			i++;
		}
	}
}

int main(){
	int n, k;
    int a[50];
    
    InputInt(n);
    InputArray(a, n);

    cout << "Nhap k = ";
    cin >> k;

	InsertAll(a, n, k);
	
	OutputArray(a, n);
	
    return 0;
}