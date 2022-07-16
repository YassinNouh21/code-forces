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
    IOS int a, b;
    cin >> a >> b;
    map<int, string> fractions;
    fractions[1] = "1/1";
    fractions[2] = "5/6";
    fractions[3] = "2/3";
    fractions[4] = "1/2";
    fractions[5] = "1/3";
    fractions[6] = "1/6";
    cout << fractions[max(a, b) ];
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES
    HINT
*/