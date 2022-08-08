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
    IOS int a, b, c, d;
    cin >> a >> b >> c >> d;
    set<int> distinct;
    distinct.insert(a);
    distinct.insert(b);
    distinct.insert(c);
    distinct.insert(d);
    cout << 4- distinct.size();
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/