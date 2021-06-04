#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

//	int n=3, m=4;
//	int a[100][100];
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			cin >> a[i][j];
//		}
//	}
//	for(int i=1; i<n-1; i++){
//		for(int j=1; j<m-1; j++){
//			if ((a[i][j]<a[i-1][j]&& 
//				a[i][j]<a[i+1][j]&&
//				a[i][j]<a[i][j-1]&&
//				a[i][j]<a[i][j+1]&&
//				a[i][j]<a[i-1][j-1]&&
//				a[i][j]<a[i+1][j+1]&&
//				a[i][j]<a[i-1][j+1]&&
//				a[i][j]<a[i+1][j-1])
//				||
//				(a[i][j]>a[i-1][j]&& 
//				a[i][j]>a[i+1][j]&&
//				a[i][j]>a[i][j-1]&&
//				a[i][j]>a[i][j+1]&&
//				a[i][j]>a[i-1][j-1]&&
//				a[i][j]>a[i+1][j+1]&&
//				a[i][j]>a[i-1][j+1]&&
//				a[i][j]>a[i+1][j-1]))
//				{
//				cnt++;
//			}
//		}
//	}
//	
//	1 2 3 4
//	1 2 3 4
//	5 6 7 8
//	cnt = 0;
//	int b[100000] = {0};
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			b[a[i][j]]++;
//		}
//	}
//	
//	for(int i=0; i<100000; i++){
//		if(b[i] > 1)
//			cnt++;
//	}
//	
//	cout << cnt;
//	
//	bool isTrue = true;
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			
//		}
//	}
//	
	int a[100][100], b[102][102];
	int n=3, m=4;
	int n1=5, m1=6;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n1; i++){
		for(int j=0; j<m1; j++){
			if(i==0 || j==0 || i == n-1 || j == m-1){
				b[i][j] = -99999;
			}
		}
	}
	
//	for(int i=0; i<n1; i++){
//		for(int j=0; j<m1; j++){
//			if(i!=0 && j!=0 && i != n-1 && j != m-1){
//				b[i][j] = a[i+1][j+1];
//			}
//		}
//	}
	
	for(int i=0; i<n1; i++){
		for(int j=0; j<m1; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	

	
}
