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
    IOS int length, distinct;
    cin >> length >> distinct;
    char dis[distinct];
    for (int i = 0; i < distinct; i++) {
        dis[i] = (char)(97 + i);
    }
    for (int i = 0; i < length; i++) {
        int j = i % distinct;
        cout << dis[j];
    }
}

//! COUNT SUBMIT: 1
//! READING TIME: 2
//! THINKING TIME: 5
//! CODING TIME:7
//! DEBUG TIME: 0 
//! TOTAL TIME:

/* NOTES
*/