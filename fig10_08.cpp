#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date d1{12, 27, 2010};
    Date d2;

    cout << "d1 es " << d1 << "\nd2 es " << d2;
    cout << "\n\nd1 += 7 is " << (d1 += 7);

    d2.setDate(2, 28, 2008);
    cout << "\n\n d2 is " << d2;
    cout << "\n++d2 is " << ++d2 << " (año bisiesto permite 29th)";

    Date d3{7, 13, 2010};
    cout << "\n\nProbando el operador de incremento de prefijo:\n"
        << " d3 is " << d3 << endl;
    cout << "++d3 is " << ++d3 << endl;
    cout << " d3 is " << d3;

    cout << "\n\nProbando el operador de incremento de sufijo:\n"
        << " d3 is " << d3 << endl;
    cout << "d3++ is " << d3++ << endl;
    cout << " d3 is " << d3 << endl;  
}