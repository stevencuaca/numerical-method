#include <iostream>
#include <conio.h>
using namespace std;

class newton
{
public:
    void jumlahN();
    void nilaiX();
    void nilaiY();
    void nilaiXX();
    void tabel();
    void hitung();
private:
    double XX, x[10] , f[10][10] , p[10],diff[5][5],P1;
    int n;

};

void newton::jumlahN()
{
    cout << "Silahkan Masukkan Jumlah Data n: ";
    cin >> n;
}

void newton::nilaiX()
{
    cout << endl;
    for(int i = 0; i<n; i++ )
    {
        cout << "Masukkan Nilai X[" << i  << "] : ";
        cin >> x[i];
    }
    cout << endl;
}

void newton::nilaiY()
{

    for(int j = 0; j<n; j++ )
    {
        cout << "Masukkan Nilai Y[" << j  << "] : ";
        cin >> f[0][j];
    }
    cout << endl;
}
void newton::nilaiXX()
{

    cout << "Masukkan Nilai X: ";
    cin >> XX;
}

void newton::tabel()
{
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j< n-i;j++)
        {
            f[i][j] = (f[i-1][j+1]-f[i-1][j])/(x[i+j]-x[j]);
        }
    }
    cout << endl;
    cout << "Sn\tXi\tf(Xi)\t";
    for(int i = 0; i <n-1;i++)
    {
        cout << i+1 << " diff\t";
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
         cout <<i+1 <<"\t" << x[i]<< "\t";
        for(int j = 0; j< n-i;j++)	
        {
            cout  << f[j][i] << "\t";
        }
        cout << endl;
    }
}

void newton::hitung()
{
    P1 = 0;
    for(int i = 0;i<n;i++)
    {
        double k = 1;
        for(int j = 0; j<i;j++)
        {
            k*=  (XX - x[j]);
        }
        P1 += k * f[i][0];

    }
    cout <<endl << "Nilai dari P" << "(" << XX << ") adalah "<<P1 << endl << endl;
}
int main()
{
	cout << "PROGRAM MEMPREDIKSI KURS MENGGUNAKAN METODE NEWTON DIVIDED DIFFERENCE\n\n";
	
    newton a1;
    a1.jumlahN();
    a1.nilaiX();
    a1.nilaiY();
    a1.nilaiXX();
    a1.tabel();
    a1.hitung();

}
