#include <bits/stdc++.h>
using namespace std;

main() {
    int size;
    cin >> size;
    int battery_num = 0;
    string inp[size];
    for (int i = 0; i < size; i++) {
        cin >> inp[i];
    }
    if (size == 1) {
        cout << 1;

    } else {
        for (int i = 0; i < size; i++) {
            if (inp[i] != inp[i + 1]) {
                battery_num++;
            }
        }
        cout << battery_num;
    }
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:3
//! DEBUG TIME:1
//! TOTAL TIME:

// * NOTES