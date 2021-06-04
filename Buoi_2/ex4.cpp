#include<iostream>
using namespace std;

int main(){
	
//	for(int i=1; i<=5; i++){
//		if(i%2==0)
//			continue;
//		cout << "Xin chao cac ban lan " << i << endl;
//	}
	
//	for(int i=1; i<=5; i++){
//		if(i==4)
//			break;
//		cout << "Xin chao cac ban lan " << i << endl;
//	}
	
	int a[30];
	int n;
	cout <<"Nhap n = ";
	cin >> n;
	for(int i=0; i<n; i++){
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
	//1 va chinh
//	for(int i=0; i<n; i++){
//		//lan luot ktra a[i]
//		int cnt = 0;
//		for(int j=2; j<a[i]; j++){
//			if(a[i] % j == 0)
//				cnt++;
//		}
//		if(cnt == 0 && a[i] > 1)
//			cout << a[i] << endl;
//	}
	
//	for(int i=0; i<n; i++){
//		//lan luot ktra a[i]
//		int cnt = 0;
//		int j = 0;
//		for(j=2; j<a[i]; j++){
//			if(a[i] % j == 0){
//				cnt++;
//				break;		
//			}	
//		}
//		
//		if(cnt==0 && a[i] > 1)
//			cout << a[i] << endl;
//	}
	
	
	for(int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 2; j < a[i]; j++){
			if (a[i] % j == 0)
				count++;
		}
		if (count == 0 && a[i] > 1)
			cout << a[i] << endl;
	}
	return 0;
}
