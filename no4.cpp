//
// Created by ASUS on 10/17/2022.
//

#include "no4.h"

#include <iostream>
using namespace std;

int main() {
    int first[2][2];
    int second[2][2];
    int product[2][2];

    cout << "Input elements of the first matrix!" << endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << "Input element a" << i+1 << j+1 << "!";
            cin >> first[i][j];
        }
    }

    cout << endl;

    cout << "Input elements of the second matrix!" << endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << "Input element a" << i+1 << j+1 << "!";
            cin >> second[i][j];
        }
    }

    cout << endl;

    cout << "The First Matrix" << endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << first[i][j]  << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "The Second Matrix" << endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << second[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    product[0][0] = (first[0][0] * second[0][0])
                    + (first[0][1] * second[1][0]);

    product[0][1] = (first[0][0] * second[0][1])
                    + (first[0][1] * second[1][1]);

    product[1][0] = (first[1][0] * second[0][0])
                    + (first[1][1] * second[1][0]);

    product[1][1] = (first[1][0] * second[0][1])
                    + (first[1][1] * second[1][1]);


    cout << "The Product Matrix" << endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << product[i][j]  << " ";
        }
        cout << endl;
    }




}