#include <bits/stdc++.h>
using namespace std;

main() {
    string l1, l2;
    cin >> l1;
    cin >> l2;
    for_each(l1.begin(), l1.end(), [](char& c) { c = ::tolower(c); });
    for_each(l2.begin(), l2.end(), [](char& c) { c = ::tolower(c); });
    int comp = l1.compare(l2);
    cout << comp;
}

//! COUNT SUBMIT:
//! READING TIME: 4
//! THINKING TIME: 1
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES 
    Study list
    string 
    passing funnction 
    passing fucntion array


*/