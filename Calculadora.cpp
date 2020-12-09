#include <iostream>
#include <math.h>
using namespace std;
class Calculator {

	double A, B,resultado;
	
public:
Calculator()
{
A = 0;
B = 0;
}
	double getA(){return A;}
	double getB(){return B;}
	void setA(double a){A = a;}
	void setB(double b){B = b;}
	void get() {
		cout << "Enter First Number: ";
		cin >> A;
		cout << "Enter Second Number: ";
		cin >> B;
	}

	double add() {
		resultado = A + B;
		return resultado;
	}

	double sub() {
		return A - B;
	}

	double mul() {
		return A * B;
	}

	double div() {
		if (B == 0) {
			cout << "Divison By Zero" << endl;
			return INFINITY;
		}
		else {
			return A / B;
		}
	}

};