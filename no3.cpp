//
// Created by ASUS on 10/17/2022.
//

#include "no3.h"

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input the length of arrays!";
    cin >> n;


    int first[n];
    int second[n];

    cout << endl;

    cout << "Input elements of the first array!" << endl;
    for (int i=0; i<n; i++) {
        cout << "Input element a" << i+1 << "!";
        cin >> first[i];
    }

    cout << endl;

    cout << "Input elements of the second array!" << endl;
    for (int j=0; j<n; j++) {
        cout << "Input element a" << j+1 << "!";
        cin >> second[j];
    }

    cout << endl;


    for (int x=0; x<n; x++){
        for (int y=0; y<n; y++){
            if (first[x] == second[y]){
                cout << first[x] << " ";
            }
        }
    }


    return 0;
}
