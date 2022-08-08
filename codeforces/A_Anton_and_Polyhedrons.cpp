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
    int sum = 0;
    for (int i = 0; i < size; i++) {
        string temp;
        cin >> temp;
        if (temp == "Tetrahedron") {
            sum += 4;
        } else if (temp == "Cube") {
            sum += 6;
        } else if (temp == "Icosahedron") {
            sum += 20;
        } else if (temp == "Dodecahedron") {
            sum += 12;
        } else {
            sum += 8;
        }
    }
    cout << sum;
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/