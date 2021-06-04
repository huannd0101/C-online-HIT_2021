#include<iostream>
using namespace std;

//<kieu_du_lieu> *<ten_bien>;

int main(){
	int *ptr, *ptr2;
	int a = 5;
	
	float *ptrF;
	
	ptr = &a;
	ptr2 = ptr;
	
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;
	
	*ptr2 = 10;
	cout << "\na = " << a << endl;
	
	a = 9;
	cout << "*ptr = " << *ptr << endl;
	
	cout << "sizeof a = " << sizeof(a) << endl;
	cout << "sizeof ptr = " << sizeof(ptr) << endl;
	
//	0x6ffdfc
//	ptr = 0x6ffdfc; wrong
	ptrF = &a;
	cout << "ptrF = " << ptrF << endl;
	
	return 0;
}
