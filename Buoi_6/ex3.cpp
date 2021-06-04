#include<iostream>
#include<stdlib.h>
using namespace std;

void Input(int *a, int n){
	for(int i=0; i<n; i++){
		cin >> *(a+i);
	}
}

void Output(int *a, int n){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}

//cách 1:
void SaoChep(int *&a, int &n){
	int *b = new int[n];
	int j=0;
	for(int i=0; i<n; i++){
		if(a[i] < 0){
			b = (int*)realloc(b, (j+1)*sizeof(int));
			b[j] = a[i];
			j++;
		}
	}
	for(int i=0; i<n; i++){
		b = (int*)realloc(b, (j+1)*sizeof(int));
		b[j] = a[i];
		j++;
	}
	n = j;
	a = (int*)realloc(a, n*sizeof(int));
	for(int i=0; i<n; i++){
		a[i] = b[i];
	}
}

//cách 2
void Insert(int *&a, int &n, int pos, int val){
	a = (int*)realloc(a, (n+1)*sizeof(int));
	for(int i=n; i >= pos-1; i--){
		a[i] = a[i - 1];
	}
	n++;
	a[pos-1] = val;	
}

void SaoChep2(int *&a, int &n){
	int j=1;
	for(int i=0; i<n; i++){
		if(a[i] < 0){
			Insert(a, n, j++, a[i]);
			i++;
		}
	}
}


int main(){
//5
//6  -3  5  4  -2
	int *a, n;
	cin >> n;
	a = new int[n];
	
	Input(a, n);
	
	SaoChep2(a, n);
	
	Output(a, n);
	
	
}
