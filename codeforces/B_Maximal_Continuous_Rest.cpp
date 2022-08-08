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
    int arr[size];
    int index_start = 0;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        if (arr[i] == 0) index_start = i;
    }
    int i = 0;
    int max = 0;
    vector<int> maxes;
    while (i <= size) {
        int temp = (index_start + i) % size;
        if (arr[temp % size] == 1) {
            max++;
        } else {
            maxes.push_back(max);
            max = 0;
        }
        i++;
    }
    
    cout << *max_element(maxes.begin(), maxes.end());
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/