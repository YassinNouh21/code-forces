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
    IOS string inp;
    getline(cin, inp);
    set<char> dist_set;
    for (int i = 0; i < inp.length(); i++) {
        if (inp[i] == '{') {
            continue;
        } else if (inp[i] == '}') {
            continue;
        } else if (inp[i] == ',') {
            continue;
        } else if (inp[i] == ' ') {
            continue;
        } else {
            dist_set.insert(inp[i]);
        }
    }
    cout << dist_set.size();
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/