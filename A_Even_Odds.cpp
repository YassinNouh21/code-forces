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
    IOS long long term;
    long long size;
    long long term_first = 1, second_term = 2;
    cin >> size >> term;
    if (size % 2 == 0) {
        long long mid = ceil((1 + (double)size) / 2);
        if (term > mid) {
            cout << second_term + (((mid + 1) - term) - 1) * 2;
        } else {
            cout << term_first + ((term)-1) * 2;
        }
    } else {
        long long  mid = floor((1 + (double)size) / 2);
        if (term > mid) {
            long long exp = (((mid + 1) - term)) * 2;
            long long final = second_term + exp;
            cout << final;
        } else {
            cout << term_first + ((term)-1) * 2;
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