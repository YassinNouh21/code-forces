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
    IOS int n;
    cin >> n;
    while (n--) {
        string inp;
        cin >> inp;
        bool first = false, second = false;
        // int first = inp.find("010", 0, inp.length() - 1);
        // int second = inp.find("101", 0, inp.length() - 1);
        // cout << first << " " << second;
        for (int i = 0; i < inp.length(); i++) {
            if (inp[i] == '0' && inp[i + 1] == '1' && inp[i + 2] == '0') {
                first = true;
            }
            if (inp[i] == '1' && inp[i + 1] == '0' && inp[i + 2] == '1') {
                second = true;
            }
        }

        if (first || second) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
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