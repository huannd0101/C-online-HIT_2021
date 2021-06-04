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
	cout << endl;
}

bool IsIncrease(int n){
	int last, pre;
	last = n % 10;
	n /= 10;
	while(n > 0){
		pre = n % 10;
		n /= 10;
		if(pre > last)
			return false;
		last = pre;
	}
	return true;
}

int sotangdan(int n){
	int b[20], d=0;
	int j=0;
	while(n!=0){
        b[j] = n % 10;
        n/=10;
        j++;        
    }
    456
    6 5 4
    for(int i = 0; i<j-1; i++){
        if(b[i] > b[i+1] ){
        	d++;
		}       
    }
    if(d==j)
        return 1;
    else{
    	return 0;
	}
}

bool check(int n){
    int k=9;
    while(n>0){
    	4 5 6
        if(n%10<=k) {
            k=n%10;
            n=n/10;
        }else 
			return false;
    }
    return true;
}

bool check(int x){
	if (x < 10) 
		return true;
	int lastDigit = 0;
	while(x>0){
		lastDigit = x % 10;
		x/=10;
		if (lastDigit <= (x%10)) 
			return false;
	}
	return true;
}

void Display(int *a, int n){
	for(int i=0; i<n; i++){
		if(IsIncrease(a[i])){
			cout << a[i] << " ";
		}
	}
}

int main(){
	int *a, n;
	cin >> n;
	a = new int[n];
	
	int *b = a;
	Input(b, n);
	
	Output(b, n);
	
	Display(a, n);
	
	return 0;
}
