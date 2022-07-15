#include <bits/stdc++.h>
using namespace std;

main() {
    string word;
    cin >> word;
    int lower = 0, upper = 0;
    for (int i = 0; i < word.length(); i++) {
        if (islower((int)word[i])) {
            lower++;
        } else {
            upper++;
        }
    }
    if (upper > lower) {
        for (int i = 0; i < word.length(); i++) {
            if (islower(word[i])) word[i] = word[i] - 32;
        }
    } else {
        for (int i = 0; i < word.length(); i++) {
            if (isupper(word[i])) word[i] = word[i] + 32;
        }
    }
    cout << word;
}

//! COUNT SUBMIT:
//! READING TIME: 2
//! THINKING TIME: 2
//! CODING TIME: 5
//! DEBUG TIME:
//! TOTAL TIME:

// * NOTES