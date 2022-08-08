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
    IOS int size;
    cin >> size;
    int points[size * 2];
    int sorted[size * 2];
    bool is_rated = false;
    bool is_unrated = false;
    bool is_maybe = true;
    for (int i = 0; i < size * 2; i += 2) {
        int a, b;
        cin >> a >> b;
        if (a != b) is_rated = true;
        points[i] = a;
        points[i + 1] = b;
        sorted[i] = a;
        sorted[i + 1] = b;
    }
    sort(sorted, sorted + (2 * size), greater<>());

    for (int i = 0; i < size * 2; i++) {
        if (points[i] != sorted[i]) is_maybe = false;
    }
    if (is_rated) {
        cout << "rated";
    } else if (is_maybe) {
        cout << "maybe";
    } else {
        cout << "unrated";
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