#include <math.h>
#include <string.h>

#include <algorithm>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
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
    IOS int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' &&
                s[i + 3] == 't' && s[i + 4] == 'y') {
                cout << "pawri";
                i += 4;
            } else {
                cout << s[i];
            }
        }
        cout << endl;
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