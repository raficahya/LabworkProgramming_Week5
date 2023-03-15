#include <iostream>
using namespace std;
int main()
{
    int n;
    int smpi = 0;
    bool found;

    cout << "How many integers?";
    cin >> n;

    int nums[n];

    cout << "Input integers separated by a space!";
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    for (int i=0; i<n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    for (int i=1; i<=n; i++){
        bool found = true;

        for (int j=0; j<n; j++){
            if (nums[j] == i){
                found = false;
            }
        }

        if (found){
            smpi = i;
            break;
        }
    }

    cout << "The smallest positive integer = " << smpi;


    return 0;
}
