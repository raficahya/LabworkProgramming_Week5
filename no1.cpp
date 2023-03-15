//
// Created by ASUS on 10/17/2022.
//

#include "no1.h"

#include <iostream>
using namespace std;

int main() {
    int n;
    float total;
    int nums[n];

    cout << "How many integers?";
    cin >> n;

    cout << "Input integers separated by a space!";
    for (int i=0; i<n; i++) {
        cin >> nums[i];
        total += nums[i];
    }

    cout << "The average value = " << total/n;

    return 0;
}
