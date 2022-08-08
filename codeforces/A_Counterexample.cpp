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
int gcd(long long large, long long small) {
    if (small == 0) {
        return large;
    }
    return gcd(small, large % small);
}

main() {
    IOS long long r, l;
    cin >> l >> r;

    if (l == 1 && r - l == 2) {
        cout << "-1";

    }

    else if (r - l < 2 || l % 2 != 0 && r - (l + 1) < 2) {
        cout << "-1";

    } else {
        if (l % 2 != 0) {
            if (r - l == 3) {
                if ((l) % 2 != 0) {
                    cout << l + 1 << " ";
                    cout << l + 2 << " ";
                    cout << l + 3 << " ";
                } else {
                    cout << l << " ";
                    cout << l + 1 << " ";
                    cout << l + 2 << " ";
                }
            } else {
                if ((l + 1) % 2 == 0) {
                    cout << l + 1 << " ";
                }
                cout << l + 2 << " ";
                cout << l + 3 << " ";
            }
        } else {
            cout << l << " ";
            cout << l + 1 << " ";
            cout << l + 2 << " ";
        }
    }
}