#include <bits/stdc++.h>
using namespace std;

main() {
    string inp;
    cin >> inp;
    int countDistinct = 0;
    set<char> single_characher;

    for (int i = 0; i < inp.length(); i++) {
        single_characher.insert(inp[i]);
    }

    int size = single_characher.size();
    if (size % 2) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }
}

//! COUNT SUBMIT:2
//! READING TIME: 2
//! THINKING TIME: 5
//! CODING TIME:25
//! DEBUG TIME:10
//! TOTAL TIME:

// * NOTES
// studied set