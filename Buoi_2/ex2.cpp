#include<iostream>
using namespace std;

int main(){
	/*
		1. for
			for(gtri khoi tao; dk dung; buoc nhay){
				cong viec can lap lai nhieu lan
			}
			
		2. while: ktra dk truoc
			while(dk){
				cong viec can lap lai nhieu lan
			}
			//khi dk == true  while thuc hien
			//khi dk == false while thuc hien
			
		3. do while: ktra dk sau khi chay 1 lan
			do {
				cong viec can lap lai nhieu lan
			}while(dk);
			//khi dk == true  while thuc hien
			//khi dk == false while thuc hien
	*/
	//in ra 5 lan"xin chao moi nguoi"
//	int n=5;
//	int i;
//	for(i=1; i<=n; i++){
//		cout << "xin chao moi nguoi" << endl;
//	}
//	
//	i=1;
//	while(i<=n){
//		cout << "xin chao moi nguoi" << endl;
//		i++;
//	}
	
//	int a = 0;
//	while(a == 5){
//		cout << "xin chao moi nguoi" << endl;
//		a++;
//	}
	
	//nhap a > 0
//	do {
//		cout << "Nhap a = ";
//		cin >> a;
//	}while(a <= 0);
//	
//	cout << " a = " << a;
	
	//in ma tran
	int cnt = 0;
	for(int i=0; i<4; i++){
		int j=0; 
		while(j < 4){
			if(cnt == 5){
				cnt++;
				break;
			}
			cout << cnt << " ";
			j++;
			cnt++;
		}
		cout << endl;
	}
	
//	int i=0;
//	for(;i<5;){
//		cout << "xin chao moi nguoi" << endl;
//		i++;
//	}

	/*Viet truong trinh nhap vao so nguyen n > 0 && n < 10. in ra tong tu 1 den n*/

	//Dung
//	int n;
//    do {
//    	cout<<"nhap n = "; cin>>n;
//	} while(n<0 || n>10);
//	int tong=0;
//	for(int i=0;i<=n;i++) {
//		tong+=i;
//	}
//	cout<<"tong = "<<tong;
//	
//	//Quynh
//	int n, s=0;
//	
//	do{
//		cout << "nhap n = ";  cin >> n;
//		if(n < 0 || n > 10)
//			cout << "nhap lai  n: ";
//	} while(n < 0 || n > 10);
//	for(int i=1; i<=n; i++)
//		s += i;
//	cout << "tong = " << s;
//	
//	//Tuan Hung
//	int n;
//	cout << "Nhap n = ";
//	do
//	{
//		cin >> n;
//		if(n <= 0 || n >= 10)
//			cout << "Nhap lai n = ";
//	} while (n <= 0 || n >= 10);
//	
//	int sum = 0;
//	for (int i = 1; i <= n; i++){
//		sum += i;
//	}
//	
//	cout << "Tong so nguyen: " << sum;
//
//	//An
//	int n;
//	int sum;
//	while (n>0 && n<10){
//		cout << "Nhap n";
//		cin >> n;
//	}
//	for(int i=1; i<=n; i++){
//		sum+=i;
//	}
//	cout << "tong = " << sum;
	
	return 0;
}
