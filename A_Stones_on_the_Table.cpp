#include <bits/stdc++.h>
using namespace std;

main() {
    int size;
    cin >> size;
    stack<char> temp_stack;
    string s1;
    cin >> s1;
    for (int i = 0; i < size; i++) {
        if (temp_stack.size() == 0) {
            temp_stack.push((char)s1[i]);
        } else {
            if (temp_stack.top() == (char)s1[i]) {
                continue;
            } else {
                temp_stack.push((char)s1[i]);
            }
        }
    }
    cout << size - temp_stack.size();
}

//! COUNT SUBMIT:
//! READING TIME: 2.5
//! THINKING TIME: 4
//! CODING TIME: 11 
//! DEBUG TIME:
//! TOTAL TIME:

// * NOTES
// check if the stack is empty or not 