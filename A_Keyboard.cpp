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
    IOS string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char l_or_right;
    cin >> l_or_right;
    string inp;
    cin >> inp;
    if (l_or_right == 'R') {
        for (int i = 0; i < inp.length(); i++) {
            int index = key.find(inp[i]);
            index--;
            cout << key[index--];
        }

    } else {
        for (int i = 0; i < inp.length(); i++) {
            int index = key.find(inp[i]);
            index++;
            cout << key[index++];
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