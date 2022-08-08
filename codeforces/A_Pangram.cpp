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
    string inp;
    cin >> inp;

    set<char> word;

    for (int i = 0; i < size; i++) {
        word.insert((char)tolower((int)inp[i]));
    }
    if (word.size() == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME: 12
//! CODING TIME: 12 
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/