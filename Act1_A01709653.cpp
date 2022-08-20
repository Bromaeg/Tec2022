
//=========================================================
// File: activity.h
// Author: Edward Elric - A00123456//Miguel Angel Tena Garcia @ ITESM QRO 2022
// Date: 01/01/2021
// =========================================================
//Act. 1.1 funciones iterativas recursivas
//=========================================================
//
#include "activity.h"
#include <iostream>
using namespace std;

int n;
 
int main() {
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Iterative: " << sumaIterativa(n) << endl;
    cout << "Recursive: " << sumaRecursiva(n) << endl;
    cout << "Direct: " << sumaDirecta(n) << endl;
    return 0;
}
