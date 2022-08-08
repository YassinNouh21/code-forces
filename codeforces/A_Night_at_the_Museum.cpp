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
    IOS string name;
    cin >> name;
    int distance = 0;
    int pointer = 0;
    for (int i = 0; i < name.length(); i++) {
        // clockwise
        int clock = abs((int)name[i] - 97 - pointer);
        // anticlockwise
        int diff = (25 - abs(pointer - ((int)name[i] - 97))) + 1;
        if (clock >= diff) {
            distance += diff;
        } else {
            distance += clock;
        }
        pointer = (int)name[i] - 97;
    }
    cout << distance;
}

//! COUNT SUBMIT:
//! READING TIME: 4
//! THINKING TIME: 3 +8
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/