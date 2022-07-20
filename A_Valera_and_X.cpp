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
    bool is_diagonal = true;
    bool is_not_diagonal = true;
    char diagonal;
    char not_diagonal;
    for (int i = 0; i < size; i++) {
        string element;
        cin >> element;
        for (int k = 0; k < size; k++) {
            if ((i == k) || (i + k == size -1) && (i == 0)) {
                diagonal = element[k];
            } else {
                if ((i == 0)) {
                    not_diagonal = element[k];
                }
            }
            if ((i == k && diagonal != element[k]) ||
                (i + k == size -1 && diagonal != element[k])) {
                is_diagonal = false;
                break;
            } else {
                if ((i == k) || (i + k == size)) {
                } else {
                    if (not_diagonal != element[k]) {
                        is_not_diagonal = false;
                        break;
                    }
                }
            }
        }
        if (!is_diagonal || !is_not_diagonal) break;
    }
    if (is_not_diagonal && is_diagonal) {
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