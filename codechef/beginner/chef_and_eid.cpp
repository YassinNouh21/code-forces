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
    int n;
    int j = 0;
    cin >> n;
    int ans[n];
    while (n--) {
        cin >> j;
        int arr[j];
        int min[j - 1];
        for (int i = 0; i < j; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + j);
        for (int i = 0; i < j - 1; i++) {
            min[i] = arr[i + 1] - arr[i];
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