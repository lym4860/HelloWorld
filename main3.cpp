#include<iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
}

int main()
{
    unsigned int x = 299999999;
	cout << "x=" << x << endl;

	int someInteger = 256;
	short someshort;
	long somelng;
	float somefloat;
	double soemdouble;

	someInteger++; //257
	someInteger *= 2; //514
	someshort = static_cast<short>(someInteger);//514
	somelng = someshort * 10000;//5140000
	somefloat = somelng + 0.785f;//5140000.785
	soemdouble = static_cast<double>( somefloat ) / 100000;//51.40000785
	cout << soemdouble<< endl;


	int firstNum = 0;
	cout << "firstNum : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "secondNum : ";
	cin >> secondNum;
	cout << "sum :";
	cout << firstNum + secondNum << endl;

	const int a = 0;
	


}