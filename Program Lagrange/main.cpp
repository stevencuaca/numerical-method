#include<bits/stdc++.h>
using namespace std;

struct Data
{
    int x, y;
};
 
double interpolate(Data f[], int xi, int n)
{
    double result = 0;
 
    for (int i=0; i<n; i++)
    {
        double term = f[i].y;
        for (int j=0;j<n;j++)
        {
            if (j!=i)
                term = term*(xi - f[j].x)/double(f[i].x - f[j].x);
        }
        result += term;
    }
 
    return result;
}

int main()
{
	system ("color f0");
    Data f[] = {{0,2}, {1,3}, {3,3}, {4,5}};
 	int fx;
 	
 	cout << "Lagrange Method Program\n\n";
 	cout << "Given the data points:\n";
 	cout << "(0,2),(1,3),(3,3),(4,5)\n\n";
    cout << "Please insert value of f(x): ";
    cin >> fx;
    cout << "Value of f("<< fx <<") is : " << interpolate(f, fx, 4);
 
    return 0;
}
