// Sush Mullur
// Assignment 1
// Test file
#include <iostream>
#include "Poly.h"

void test1() {
    //Test constructors.
    Poly p;
    Poly p1(5);
    Poly p2(4, 5);
    Poly p3(p2);
    cout << p3 << endl;

    //Test + operator
    cout << Poly((p2) + Poly(2, 5) + Poly(3, 4) + Poly(1, 0)) << endl;
    cout << Poly((p3 + p3)) << endl;

    //Test - operator.
    cout << (p1 - p2) << endl;
    cout << Poly((p2) + Poly(2, 5) - Poly(3, 4) + Poly(1, 0)) << endl;
    cout << (p2 - p2) << endl;

    //Test = operator.
    Poly p4(4, 4);
    cout << "Before assignment: " << p4 << endl;
    p4 = p3;
    cout << "After assignment: " << p4 << endl;

}




int main() {
    test1();
    cout << "All tests pass." << endl;
    return 0;
}
