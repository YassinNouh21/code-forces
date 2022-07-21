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

bool is_prime(int num) {
    bool is_prime;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            is_prime = false;
            break;
        } else {
            is_prime = true;
        }
    }
    return is_prime;
}

main() {
    IOS int start_prime, checked;
    cin >> start_prime >> checked;
    bool is_not_near = true;
    for (int i = start_prime + 1; i < checked; i++) {
        if (is_prime(i)) {
            is_not_near = false;
            break;
        }
    }
    if (is_not_near && is_prime(checked)) {
        cout << "YES";
    } else {
        cout << "NO";
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