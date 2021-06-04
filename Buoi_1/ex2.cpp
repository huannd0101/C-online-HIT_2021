#include<iostream>
using namespace std;

int main(){
	//if-else
	
	/*
		toan tu logic: >, <, >=, <=, !=, ==: true/false
		toán tu so hoc: -, +, *, /, %, --, ++, 
		toan tu gan: = 
	*/
	
	/*
		--toan tu 3 ngoi
		(dk) ? cv1 : cv2
		bien = (dk) ? cv1 : cv2;
	*/
	
	/*
		if(dk) {
			cong viec trong nay duoc thuc hien neu dk dung
		}
		
		if(dk) {
			cong viec trong nay duoc thuc hien neu dk dung
		}else {
			cong viec duoc thuc hien khi dk sai
		}
		
		if(dk1){
			if(dk2) {
				thuc hien cong viec khi dk1 VÀ dk2 dúng
			}else {
				thuc hien cong viec khi dk1 dung va dk2 bi sai
			}
		}else {
		
		}
		
		if(dk1){
			dk1 dung thi chay trong này
		}else if() {
			
		}else {
			
		}
	*/
	
	int namSinh;
//	cout << "Nhap nam sinh: "; 
//	cin >> namSinh;
	
//	cout << "Nam sinh: " << namSinh << endl;
//	if(false){
//		cout << "Day la k14";
//	}else if(namSinh == 2002){
//		cout << "Day la k15";
//	}else {
//		cout << "Nam sinh khong hop le";
//	}
	
	//neu so nhap vao la so le: thi in ra 2001
	//nguoc lai in ra 2002
	int a = 2;
//	a%2==1 ? cout<<2001<<endl : cout<<2002<<endl;
//	
//	int test = (a % 2 == 1) ? 2001 : 2002;
//	cout << test;

	a = 2;
	bool ok;
	ok = (a % 2 == 1) ? true : false;
//	if(ok) true
//	if(ok == true) true
//	if(ok == false) false
//	if(!ok) false
//	if(ok != true) false
//	if(ok != false) true
	
	if(ok){
		cout << 2001 << endl;
	}else {
		cout << 2002 << endl;
	}
	
	/*
		nhap vao 3 so nguyen a, b, c tu ban phim: 
			tim gia tri max và in ra man hinh
		//cach 1: if else
		//cach 2: toan tu 3 ngoi
	*/
	
//	int a,b,c;
//	cin >>a>>b>>c;
//	int m=a>b?a:b;
//	int max=m>c?m:c;
//	cout <<max;
	
	int a,b,c;
	cin>>a>>b>>c;
	int MAX=a;
	if (b>MAX) MAX=b;
	if (c>MAX) MAX=c;
	cout<<MAX<<endl;
	
	
//	int a,b,c;
//	cout<<"nhap a = "; cin>>a;
//	cout<<"nhap b = "; cin>>b;
//	cout<<"nhap c = "; cin>>c;
//	int max=a;
//	if(max<b) {
//		max=b;
//	}
//	if(max<c) {
//		max=c;
//	}
//	cout<<"gia tri lon nhat = "<<max;

	/*c2
	int x=a>b?a:b;
	int max=x>c?x:c;
	cout<<"gia tri lon nhat = "<<max;
	*/
	
	int a,b,c;
			//a > b        b > a
	(a>b) ? ((a>c)?a:c):((b>c)?b:c);
	return 0;
}
