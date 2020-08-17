#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void initialValues (){
	int i,j=1;
	float x[8],fx[8];
	for (i=0; i<8; i++){
		x[i] = i-5;
	}
	cout << "x	f(x)\n";
	for (i=0; i<8; i++){
		fx[i] = pow(x[i],3) - 4*x[i] - 1;
		cout << x[i] << "	" << fx[i] << endl;
	}
	
	cout << "\nChoose the true initial values:\n";
	
	for (i=0; i<8; i++){
		if(fx[i]<0 && fx[j]>=0 || fx[i]>=0 && fx[j]<0){
			cout << "x0 = " << x[i] << " and x1 = " << x[j] << endl;
		}
		j++;
	}
}

void secantMethod(){
	int i;
	float fx[10], x[10];
	
	for (i=0; i<30; i++){
		x[i] = i-2;
	}
	i = 0;
	cout << "\n\ni	xi			f(xi)" << endl;
	fx[0] = pow(x[0],3) - 4*x[0] - 1;
		cout << i << "	" << x[i] << "			" << fx[i] << endl;
		i++;
	fx[1] = pow(x[1],3) - 4*x[1] - 1;
		cout << i << "	" << x[i] << "			" << fx[i] << endl;
	x[2] = x[1] - fx[1] * ((x[1]-x[0])/(fx[1]-fx[0]));
	

	for(i=2;i<100;i++){
		x[i] = x[i-1] - fx[i-1] * ((x[i-1]-x[i-2])/(fx[i-1]-fx[i-2]));
		fx[i] = pow(x[i],3) - 4*x[i] - 1;
		cout << i << "	" << x[i] << "		"  << fx[i] << endl;
	}
}


int main(int argc, char** argv) {
	system ("color f0");
	cout << "ITERATION PROGRAM WITH SECANT METHOD\n\n";
	
	char pangkat = 94;
	
	cout << "Solve: f(x) = x" << pangkat << "3 - 4x - 1 = 0\n\n";
	
	cout << "Choose Initial Values:\n";
	initialValues();
	secantMethod();
	return 0;
}


