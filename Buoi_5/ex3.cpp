#include<iostream>
#include<stdlib.h>
using namespace std;

void NhapMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout << "nhap a[" << i << "] = ";
//		cin >> *(a + i);
		cin >> a[i];
	}
}


void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
//		cout << *(a + i) << " ";
		cout << a[i] << " ";
	}
	cout << endl;
}

void InsertEle(int *a, int &n, int pos, int val){
	a = (int*)realloc(a, (n+1)*sizeof(int));
	for(int i=n; i>= pos-1; i--)
		a[i] = a[i-1];
	a[pos-1] = val;
	n++;
}

int main(){
	int n;
	int *a;
	cout << "nhap n = ";
	cin >> n;
	
	a = new int[n];
	
	NhapMang(a, n);
	
	XuatMang(a, n);
	
	InsertEle(a, n, 2, 10);
	InsertEle(a, n, 2, 10);
	XuatMang(a, n);
	
	//C: calloc, malloc, free, realloc
	//C++: new, delete, realloc(C)
	int *a = (int *) malloc( 10 * sizeof( int ));
	int *b = (int *) calloc( 10, sizeof( int )); //gán ve gtri 0 cho cac ptu
	
	delete a;
	return 0;
}
