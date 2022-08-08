#include <math.h>
#include <string.h>

#include <algorithm>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
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
    IOS int size1, size2;
    cin >> size1 >> size2;
    set<char> colors;

    for (int i = 0; i < size1 * size2; i++) {
        char temp;
        cin >> temp;
        colors.insert(temp);
    }
    int counter = 0;
    for (auto it = colors.begin(); it != colors.end(); it++) {
        if (*it == 'W' || *it == 'G' || *it == 'B') {
            counter++;
        }
    }
    if (counter <= 3 && counter >= 1 && counter == colors.size()) {
        cout << "#Black&White";
    } else {
        cout << "#Color";
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