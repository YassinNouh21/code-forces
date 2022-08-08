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
    for (int i = 0; i < size; i++) {
        int sub_size;
        cin >> sub_size;
        int arr[sub_size];
        for (int j = 0; j < sub_size; j++) {
            cin >> arr[j];
        }
        bool is = false;
        for (int k = 0; k < sub_size; k++) {
            for (int n = sub_size - 1; n > k; n--) {
                if (arr[k] == arr[n] && (n - k) > 1) {
                    is = true;
                    break;
                }
            }
        }
        if (is) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
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