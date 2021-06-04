#include<iostream>
using namespace std;

int main(){
	int n = 5;
	int a[] = {1, 2, 3, 4, 5};
	int *ptr;
	
	ptr = &a[0];
//	
//	for(int i=0; i<n; i++){
//		ptr = &a[i];
//		cout << ptr << " ";
//	}
	
//	cout << &a << " - " << ptr << endl;
	
	cout << *(ptr + 1);
	
	return 0;
}
