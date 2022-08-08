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
    IOS string inp;
    cin >> inp;
    string wub = "WUB";
    string temp = "";
    int count = 0;
    for (int i = 0; i < inp.length(); i++) {
        if (inp[i] == wub[0] && inp[i + 1] == wub[1] && inp[i + 2] == wub[2]) {
            i += 2;
            count++;
            continue;
        }
        if (count >= 1) cout << " ";
        count = 0;

        cout << inp[i];
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