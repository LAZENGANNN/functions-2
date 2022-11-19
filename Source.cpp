#include<iostream>
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int sign(int x) {
	if (x < 0) return -1;
	else if (x == 0) return 0;
	else if (x > 0) return 1;
}
int rootscount(double a, double b, double c) {
double D =(b * b) - (4 * a * c);
	if (D < 0) return 0;
	else if (D ==0) return 1;
	else if (D > 0) return 2;
}
double circler(double r) {
	double p = 3.14;
	double S = r * r * p;
	return S;
}
double rings(double r1, double r2) {
	double p = 3.14;
	return (p * r1 * r1) - (p * r2 * r2);
}
double trianglep(double a, double h) {
	double b = sqrt((a / 2) * (a / 2) + h * h);
	return  a + b + b;
}
bool even(int k) {
	if ((k % 2) == 0) return true;
	else return false;
}



int main() {
	setlocale(LC_ALL, "rus");

	//proc16
	/*int x;
	cin >> x;
	cout << sign(x);*/

	//proc17
	/*double a, b, c;
	cin >> a >> b >> c;

	cout << rootscount(a, b, c);*/

	//proc18
	/*double r;
	for (int i = 1; i <= 3; i++) {
		cin >> r;
		cout << circler(r) << endl;
	}*/

	//proc19
	/*double r1;
	double r2;
	for (int i = 1; i <= 3; i++) {
		cin >> r1 >> r2;
		cout << rings(r1, r2);
	}*/

	//proc20
	/*double a, h;
	for (int i = 1; i <= 3; i++) {
		cin >> a >> h;
		cout << trianglep(a, h) << endl;
	}*/

	//proc24
	


}

