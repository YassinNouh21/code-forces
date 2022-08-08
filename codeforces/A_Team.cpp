#include <bits/stdc++.h>
using namespace std;

main() {
    int s, solve = 0, num_solved = 0;
    cin >> s;
    int arr[3];

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[j];
        }
        for (int k = 0; k < 3; k++) {
            if (arr[k] == 1) {
                solve++;
            }
            if (solve >= 2) {
                num_solved++;
                break;
            }
        }
        solve = 0;
    }
    cout << num_solved;
}

//! COUNT SUBMIT:
//! READING TIME: 1.5
//! THINKING TIME:0.5
//! CODING TIME: 10
//! DEBUG TIME: 20
//! TOTAL TIME:37

// * NOTES