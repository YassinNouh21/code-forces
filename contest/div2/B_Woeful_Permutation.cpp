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
int LCM(int a, int b) { return (a / __gcd(a, b)) * b; }

main() {
    IOS int t = 1;
    // cin >> t;
    while (t--) {
        int arry[5] = {1, 2, 3, 4, 5};
        do {
            int v = LCM(1, arry[0]) + LCM(2, arry[1]) + LCM(3, arry[2]) +
                    LCM(4, arry[3]) + LCM(5, arry[4]);

            cout << v << endl;
            for (int i = 0; i < 5; i++) {
                cout << arry[i] << " ";
            }

        } while (next_permutation(arry, arry + 5));
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