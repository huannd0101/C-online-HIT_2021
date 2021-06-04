#include<iostream>
#include<math.h>
using namespace std;

void InputInt(int &n, char c){
    cout << "Nhap " << c << " = ";
    do {
        cin >> n;
        if(n <= 3)
            cout << "Nhap lai " << c << " = ";
    }while(n <= 3);
}

void InputFloat(float &n, char c){
    cout << "Nhap " << c << " = ";
    do {
        cin >> n;
        if(n == 0)
            cout << "Nhap lai " << c << " = ";
    }while(n == 0);
}

//cách 1
//float S(float x, int n){
//	float s = 1-x;
//	int dau = 1;
//	int gt = 1;
//	for(int i=3; i<=2*n+1; i+=2){
//		gt *= (i-1)*i;//3! *4*5
//		s += dau*pow(x, i)/gt;
//		dau *= -1;
//	}
//	return s;
//}

//cách 2
float S(float x, int n){
	float s = 1-x;
	int dau = 1;
	int gt = 1;
	float temp = x;
	for(int i=3; i<=2*n+1; i+=2){
		gt *= (i-1)*i;
		temp *= x * x;
		s += dau*temp/gt;
		dau *= -1;
	}
	return s;
}

int main(){
    int n;
    float x;

    InputInt(n, 'n');
    InputFloat(x, 'x');

    cout << S(x, n);

    return 0;
}

