#include <iostream>
#include <vector>  
#include <stdio.h>

using namespace std;

void plusMinus(vector<int> arr) {
    float plus = 0, min = 0, zero = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            min++;
        }
        else if (arr[i] > 0) {
            plus++;
        }
        else {
            zero++;
        }
    }
    cout << (float)(plus / arr.size()) << endl;
    cout << (float)(min / arr.size()) << endl;
    cout << (float)(zero / arr.size()) << endl;
}

int main() {
    vector<int> arr = { 1, 1, 0, -1, -1 };

    plusMinus(arr);

    return 0;
}