#include <iostream>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void akarSatu (){
	float x0, x;
	x0 = -1.5;
	for(int i=0;i<100;i++){
		x = (pow(x0,3) - 1) / 3;
		cout << "x" << i+1 << " = " << x << endl;
		x0 = x;
	}
}

void akarDua (){
	float x0, x;
	x0 = -1.5;
	for(int i=0;i<100;i++){
		x = (3*x0 + 1) / pow(x0,2);
		cout << "x" << i+1 << " = " << x << endl;
		x0 = x;
	}
}

void akarTiga (){
	float x0, x;
	x0 = -1.5;
	for(int i=0;i<100;i++){
		x = 1 / (pow(x0,2) - 3);
		cout << "x" << i+1 << " = " << x << endl;
		x0 = x;
	}
}


int main(int argc, char** argv) {
	cout << "ITERATION PROGRAM";
	char ssTwo = 253;
	char ssThree = 94;
	
	cout << "\n\nQuadratic Equation: x" << ssThree << "3 - 3x - 2 =  0";
	
	cout << "\n\nRoot Equation: ";
	cout << "\n1. x = (x" << ssThree << "3- 1) / 3";
	cout << "\n2. x = (3x + 1) / x" << ssTwo;	
	cout << "\n3. x = 1 / (x" << ssTwo << " - 3)";
	
	cout << "\n\nRoot Equation 1:";
	cout << "\nx0 = -1.5" << endl;
	akarSatu();
	cout << "Divergen" << endl;
	
	cout << "\nRoot Equation 2:";
	cout << "\nx0 = -1.5" << endl;
	akarDua();
	cout << "Konvergen" << endl;
	
	cout << "\nRoot Equation 3:";
	cout << "\nx0 = -1.5" << endl;
	akarTiga();
	cout << "Divergen" << endl;
		
	
	return 0;
}


