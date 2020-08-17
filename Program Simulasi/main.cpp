#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	cout << ".:THE VELOCITY V OF A FALLING PARACHUTIST:.";
	
	float g, c, m, dt, v, x, vt;
	g = 9.8;
	c = 12.5;
	cout << "\n\nAssume g = 9.8 m/s2 and c = 12.5 kg/s";
	cout << "\n\nInput Mass (kg): ";
	cin >> m;
	cout << "Delta t: ";
	cin >> dt;
	
	v = g*m/c;
	x = -12.5/68.1;
	
	cout << "\nt,s			v,m/s";
	cout << endl;
	for (float i=0;i<20;i=i+dt){
		vt = v*(1-exp(x*i));
		cout << i << "			" << vt << endl;	
	}
	
	vt = v*(1-exp(x*99999999999));
	cout << "Infinite		" << vt << endl;
	return 0;
}
