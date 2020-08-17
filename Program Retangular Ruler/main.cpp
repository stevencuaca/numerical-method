#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>

using namespace std;

void count(float a, float b, float n){
	float h;
	h = (b-a)/n;
	cout << "\n\nSolution: ";
	cout << "\n\nh = (b-a) / n";
	cout << "\nh = " << h;
	
	float xi[21],xi1,fxi,total;
	int i = 0;
	xi[i] = 0;
	cout << "\n\ni	xi	xi*	f(xi*)";
	cout << "\n0	0	-	-" << endl;
	
	for(i=1;i<n+1;i++){
		xi[i] = xi[i-1] + h;
		xi1 = (xi[i]+xi[i-1])/2;
		fxi = exp(-pow(xi1,2));
		total = total + fxi;
		cout << i << "	" << xi[i] << "	" << xi1 << "	" << fxi << endl;	
	}
	cout << "		Total:	" << total;
	
	cout << "\n\nThus, from the table, \n" << (char)244 << "e" << (char)94 << "-x" << (char)253 << "dx" << endl;
	cout << "	" << (char)175 << " " << h << "(" << total << ")" << endl;
	total = h*total;
	cout << "	" << (char)175 << " " << total;
 }

int main(int argc, char** argv) {
	system ("color f0");
	cout << "RECTANGULAR RULE PROGRAM\n";
	
	cout << "Solve: " << (char)244 << "e" << (char)94 << "-x" << (char)253 << "dx" << "\na = 0, b = 1, n = 20";
	
	float a,b,n;
	a = 0;
	b = 1;
	n = 20;
	
	count(0,1,20);
	return 0;
}


