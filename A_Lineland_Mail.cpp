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
int distance(int a, int b) { return sqrt(pow((a - b), 2)); }
main() {
    IOS int size;
    cin >> size;
    int inp[size];
    for (int i = 0; i < size; i++) {
        cin >> inp[i];
    }
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            cout << distance(inp[i], inp[i + 1]) << " "
                 << distance(inp[i], inp[size - 1]) << endl;

        } else if (i == size - 1) {
            cout << distance(inp[i], inp[i - 1]) << " "
                 << distance(inp[i], inp[0]) << endl;
        } else {
            if (distance(inp[i], inp[i + 1]) < distance(inp[i], inp[i - 1])) {
                cout << distance(inp[i], inp[i + 1]);
            } else {
                cout << distance(inp[i], inp[i - 1]);
            }
            // second at the far
            if (distance(inp[i], inp[0]) > distance(inp[i], inp[size - 1])) {
                cout << " " << distance(inp[i], inp[0]) << endl;
            } else {
                cout << " " << distance(inp[i], inp[size - 1]) << endl;
            }
        }
    }
}

//! COUNT SUBMIT:
//! READING TIME: 2
//! THINKING TIME: 5
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/