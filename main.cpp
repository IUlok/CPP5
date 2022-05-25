#include "CTriangle.h"
#include "CPolygon.h"
#include "CQuad.h"
#include <iostream>
using namespace std;
int main() {
    CQuad u1(0, 0, 3, 0, 3, 3, 0, 3);
    CTriangle u2(0, 0, 0, 3, 4, 0);
    CPolygon *u;
    int exit = 0;
    while (exit != 4) {
        cout << "----------------------\n";
        cout << "Menu:\n";
        cout << "1-Display the coordinates of the points of the shapes on the screen\n";
        cout << "2-Calculate the perimeter of the shapes\n";
        cout << "3-Change coordinates\n";
        cout << "4-Exit\n";
        cout << "----------------------\n";
        cin >> exit;
        switch (exit) {
            case 1:
                cout << "Select the shape you want to work with:\n1-Quad\n2-Triangle\n";
                cin >> exit;
                switch (exit) {
                    case 1:
                        u = &u1;
                        u->showCharacteristics();
                        break;
                    case 2:
                        u = &u2;
                        u->showCharacteristics();
                        break;
                }
                break;
            case 2:
                cout << "Select the shape you want to work with:\n1-Quad\n2-Triangle\n";
                cin >> exit;
                switch (exit) {
                    case 1:
                        u = &u1;
                        cout << u->findPerimetr() << endl;
                        break;
                    case 2:
                        u = &u2;
                        cout << u->findPerimetr() << endl;
                        break;
                }
                break;
            case 3:
                cout << "Select the shape you want to work with:\n1-Quad\n2-Triangle\n";
                cin >> exit;
                switch (exit) {
                    case 1:
                        u = &u1;
                        u->NewCoordinates();
                        break;
                    case 2:
                        u = &u2;
                        u->NewCoordinates();
                        break;
                }
                break;
            case 4:
               return -1;
        }
    }
}