#include <math.h>
#include <string.h>

#include <algorithm>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

main() {
    IOS int size;
    cin >> size;
    set<string> scores;
    int first;
    cin >> first;

    for (int i = 0; i < first; i++) {
        string temp;
        cin >> temp;

        scores.insert(temp);
    }
    int second;
    cin >> second;
    for (int i = 0; i < second; i++) {
        string temp;
        cin >> temp;

        scores.insert(temp);
    }
    // for (auto it = scores.begin(); it != scores.end(); it++) {
    //     cout << *it << " ";
    // }

    if (size == scores.size()) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/