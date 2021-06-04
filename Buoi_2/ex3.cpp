#include<iostream>
#include<iomanip>
using namespace std;

int main(){
//	int a = 1;
//	int b = 2;
//	int c = 3;
	
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
	
	/*
		<kieu_du_lieu> ten_bien = gtri;
		Khai bao
			<kieu_du_lieu> ten_mang[3];
			<kieu_du_lieu> ten_mang[3] = {1, 2, 3};
			
		truy xuat
		a[chi_so]
		cin >> a[chi_so];
		cout << a[chi_so];
	*/
//	cout << "\n----------------------\n";
//	int arr[3] = {1, 2, 3};
	
//	cout << arr[0] << endl;
	
//	for(int i=0; i<3; i++){
//		cout << arr[i] << endl;
//	}


	int a[100];
//	int a, a1, a2, a3...a99;
//	int sum = a+a1+....+a99;
//	cin >> arr[2];
//	cout << arr[2];
	int n=5;
	for(int i=0; i<n; i++){
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
	//khuyen khich
	for(int i=0; i<n; i++){
		if(a[i] % 2 != 0)
			break;
		cout << a[i] << " ";
		
		//
	}
//	int sum=0;
//	for(int i=0; i<n; i++)
//		sum+=a[i];
//	cout << "\nSum = " << sum;
//	for(int i=0; i<n; i++){
//		cout << a[i] << endl;
//	}
//	
//	cout << endl;
//	for(int i=0; i<2; i++){
//		cout << left << setw(10) << a[i] << " ";
//	}
	
	//Nhap vào mang gom n so nguyên. in ra màn hình các so chan trong mang.
	
	//Quynh
//	int n, a[30];
//	cout << "nhap n = ";
//	cin >> n;
//	for(int i=0; i<n; i++){
//		cout << "a[" << i << "] = ";
//		cin >> a[i];
//	}
//	for(int i=0; i<n; i++){
//		if(a[i] % 2 == 0)
//			cout << a[i] << "  ";	
//	}
	
	//Hung
//	int a[50];
//	int n;
//	cout << "Nhap n: ";
//	cin >> n;
//	for(int i = 0; i < n; i++) {
//		cout << "Nhap a[" << i <<"] = ";
//		cin >> a[i];
//	}
//	
//	for(int i = 0; i < n; i++) {
//		if (a[i] % 2 == 0)
//			cout << a[i] << " ";
//	}
	

//    int a[100];
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for(int i=0;i<n;i++){
//        if(isPrime(a[i])){
//            cout<<a[i]<<" ";
//        }
//    }

	
	return 0;
}
