#include<iostream>
using namespace std;

//Hoang Mai
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void remove1(int a[],int &n,int vt){
	for(int i=vt-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
void remove2(int a[],int &n){
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			remove1(a,n,i+1);
			i--;
		}
	}
}

void remove3(int a[],int &n){
	for(int i=0;i<n;i++){
		while(a[i]%2==0 && i<n){
			remove1(a,n,i+1);
		}
	}
}
int main()
{
	int n;
	int a[100];
	cin>>n;
	nhap(a,n);
	remove3(a,n);
	xuat(a,n);
}
