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
int countDigit(long long n) {
    if (n == 0) return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}
main() {
    IOS int size_digits, divide;
    cin >> size_digits >> divide;
    int temp = divide;
    for (int i = 0; i < size_digits; i++) {
        if (divide == 10) {
            if (size_digits == 1)
                cout << -1;
            else {
                if (i == 0)
                    cout << 1;
                else {
                    cout << 0;
                }
            }
        } else {
            cout << divide;
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