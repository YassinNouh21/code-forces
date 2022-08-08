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
    IOS;

    int size;
    cin >> size;
    int arr[3];

    for (int k = 0; k < size; k++) {
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        if (arr[0] == arr[1]) {
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