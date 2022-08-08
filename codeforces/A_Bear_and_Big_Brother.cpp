#include <bits/stdc++.h>
using namespace std;

main() {
    int l, b;
    cin >> l >> b;
    int i = 1;
    while (l * pow(3, i) <= b * pow(2, i)) {
        i++;
    }
    cout << i;
}

//! COUNT SUBMIT:
//! READING TIME: 5
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

// * NOTES