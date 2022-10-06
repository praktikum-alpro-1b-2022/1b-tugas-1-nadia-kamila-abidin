#include <iostream>
using namespace std;

int main() {
    int x = 6, y = 12, z, a, b;

    //Menukarkan Variabel dengan Variabel Sementara

    z = x;
    x = y;
    y = z;

    cout << "Menukarkan Variabel dengan Variabel Sementara\n";
    cout << "X : " << x << endl << "Y : " << y << endl;


    //Menukarkan Variabel tanpa Variabel Sementara

    a = 7;
    b = 14;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << "Menukarkan Variabel tanpa Variabel Sementara\n";
    cout << "\nA : " << a << endl << "B : " << b << endl;

    return 0;

}
