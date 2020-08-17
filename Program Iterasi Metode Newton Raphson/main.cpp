#include <iostream>
#include <math.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	system ("color f0");
	cout << "ITERATION WITH NEWTON RAPHSON METHOD PROGRAM\n\n";

	char pangkat = 94;
	float i,j,k,l;
	
	cout << "f(x) =  3X" << pangkat << "2 - 3X + 1 = 0\n";
	cout << "f'(x) = 6X - 3\n\n";
	cout << "Solution: \n";
	cout << "X0 = 0\n\n";
	
	cout << "i	Xi			f(Xi)			f'(Xi)\n";
	j = 0;
	k = ((pow(j,3))) - 5*j - 1.5;
	l = 3*(pow(j,2)) - 5;
	cout << i << "	"  << j << "			" << k << "			" << l << endl;
	j = j - (k/l); 
	
	for (i=1; i<=10; i++){
		k = ((pow(j,3))) - 5*j - 1.5;
		l = 3*(pow(j,2)) - 5;
		cout << i << "	"  << j << "		" << k << "		" << l << endl;
		j = j - (k/l); 
	}
	return 0;
}
