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
    IOS int k;
    cin >> k;
    while (k--) {
        int n, kk;
        cin >> n >> kk;
        int arr[n]{};
        double temp = 0;
        for (int i = 0; i < kk; i++) {
            cin >> arr[i];
            int ii = i;
            ii++;
            if (arr[i] != ii++ && arr[i] > kk) {
                temp += 1;
            } else if (arr[i] != ii++) {
                temp = 1 / 2;
            }
        }
        ceil(temp);
        cout << temp << endl;
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