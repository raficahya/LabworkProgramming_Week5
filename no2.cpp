//
// Created by ASUS on 10/17/2022.
//

#include "no2.h"

#include <iostream>
using namespace std;

int main() {
    int n, x, i;
    int nums[11];

    cout << "Input an integer!";
    cin >> n;
    x = n;

    for (i=0; n>0; i++) {
        nums[i] = n%2;
        n /= 2;
    }

    cout << "The binary value of " << x << " = " ;

    for (int j=i-1; j>=0; j--) {
        cout << nums[j] << " ";
    }

    return 0;
}
