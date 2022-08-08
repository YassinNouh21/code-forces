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
    IOS string exp;
    cin >> exp;
    int num[(exp.length() / 2) + 1];
    int j = 0;
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '+') {
            continue;
        } else {
            num[j] = exp[i] - 48;
            j++;
        }
    }
    int n = sizeof(num) / sizeof(num[0]);
    sort(num, num + n);
    for (int i = 0; i < (exp.length() / 2) + 1; i++) {
        if (i == (exp.length() / 2)) {
            cout << num[i];
        } else {
            cout << num[i] << "+";
        }
    }
}

//! COUNT SUBMIT:
//! READING TIME:1
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/