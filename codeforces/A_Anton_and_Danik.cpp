#include <bits/stdc++.h>
using namespace std;

main() {
    int s, a =0, d=0;
    string input2;
    cin >> s;
    cin >> input2;

    for (int i = 0; i < input2.length(); i++) {
        if (input2[i] == 'A') {
            a++;
        } else {
            d++;
        }
    }
    if (a > d) {
        cout << "Anton";
    } else if (d > a) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:1
//! CODING TIME:6
//! DEBUG TIME:1
//! TOTAL TIME:

// * NOTES