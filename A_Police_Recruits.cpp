#include <bits/stdc++.h>
using namespace std;

main() {
    int available_polices = 0;
    int unrated_crimes = 0;
    int size;
    cin >> size;
    int events[size];
    for (int i = 0; i < size; i++) {
        cin >> events[i];
    }
    for (int i = 0; i < size; i++) {
        if (events[i] < 0 && available_polices == 0) {
            unrated_crimes++;
        } else if (events[i] >= 0) {
            available_polices += events[i];
        }
        if (available_polices > 0 && events[i] < 0) {
            available_polices--;
        }
    }
    cout<< unrated_crimes;
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

// * NOTES