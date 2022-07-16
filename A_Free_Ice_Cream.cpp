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
    IOS long long size, inital_packs;
    cin >> size >> inital_packs;
    long long kid = 0, rem_packs = inital_packs;
    for (int i = 0; i < size; i++) {
        char add_or_delete;
        cin >> add_or_delete;
        long long num;
        cin >> num;
        if (add_or_delete == '+') {
            rem_packs += num;
        } else {
            if (num > rem_packs) {
                kid++;
            } else {
                rem_packs -= num;
            }
        }
    }
    cout << rem_packs << " " << kid;
}

//! COUNT SUBMIT: 2
//! READING TIME: 5
//! THINKING TIME: 10
//! CODING TIME: 10
//! DEBUG TIME: 5
//! TOTAL TIME:

/* NOTES
 read the quote of int and long
*/