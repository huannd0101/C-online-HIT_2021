#include<iostream>
using namespace std;

void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

//Cuong
//void xoa(int a[], int &n, int vitri){
//	for(int i=vitri;i<n;i++){
//		a[i]=a[i+1];
//	}
//	n--; 
//}
//void xoa_chan(int a[], int &n){
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0){
//			xoa(a,n,i);
//			i--;
//		}
//	}
//}\

//Thuy linh Nguyen
//void xoa(int a[],int &n,int vtx)
//{
//	for(int i=vtx;i<n-1;i++)
//	{
//		a[i]=a[i+1];
//	}
//	n--;
//
//}
//void xoa_chan(int a[],int &n)
//{
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]%2==0)
//		{
//			xoa(a,n,i);
//			i--;
//		}
//	}
//}

//Hung
void Remove(int a[], int &n, int pos){
	for (int i = pos; i < n -1; i++){
		a[i] = a[i+1];
	}
	n--;
}

void XoaTatCaSoChan(int a[], int &n){
	for (int i = 0; i < n; i++){
		while(a[i]%2==0 && i<n){
			Remove(a, n, i);
		}
	}
}

int main(){
	int n = 6;
	int a[100] = {4, 7, 5, 6, 10, 10};
	
	XoaTatCaSoChan(a, n);
	XuatMang(a, n);
	
	return 0;
}
