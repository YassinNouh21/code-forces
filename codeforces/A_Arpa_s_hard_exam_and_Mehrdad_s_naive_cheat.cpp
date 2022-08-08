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
    IOS long long inp;
    cin >> inp;
    int last_digit;
    last_digit = inp % 4;
    if (inp == 0) {
        cout << 1;
    } else {
        if (last_digit == 1) {
            cout << 8;
        } else if (last_digit == 2) {
            cout << 4;
        } else if (last_digit == 3) {
            cout << 2;
        } else if (last_digit == 0) {
            cout << 6;
        }
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