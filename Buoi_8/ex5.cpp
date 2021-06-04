#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
// a = min + rand() % (max - min + 1)
int main(){
	int a;
	srand(time(0)); //thay doi gia tri qua moi lan lap
//	[0,99]
	
	cout << rand() % 100;
	
	return 0;
}
char *str = new char;

delete str;
