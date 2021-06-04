#include<iostream>
using namespace std;

int main(){
	int a;
//	cout << "Nhap a = ";
//	cin >> a;
	
	/*
		switch(bien){
			case giaTri1:
				thuc hien cong viec
				break;
			case giaTri2:
				thuc hien cong viec
				break;
			case giaTri3:
				thuc hien cong viec
				break;
			default:
				cong viec mac dinh khi khong co gia tri 
					nao phu hop voi cac case ben tren
		}
	*/
	
//	switch(a){
//		case 1:
//			cout << "a = 1" << endl;
//			cout << "Day la case 1";
//			break; //dung truong trinh trong switch case
//		case 2:
//			cout << "a = 2" << endl;
//			break;
//		default:
//			cout << "a != 1 && a != 2" << endl;
//	}
	
//	char c = 'g';
//	switch(c){
//		case 'a':
//			cout << "a";
//			break;
//		case 'g':
//			cout << "g";
//			break;
//		default:
//			cout << "...........";
//	}
	int month;
	cin >> month;
	switch(month){
		case 1:
			
		case 1:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "31 ngay";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "30 ngay";
			break;
		case 2:
			cout << "28 || 29 ngay";
	}
	
	return 0;
}
