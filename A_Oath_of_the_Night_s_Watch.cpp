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
    IOS int size;
    cin >> size;
    int setwards[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        int temp;
        cin >> temp;
        setwards[i] = temp;
    }
    sort(setwards, setwards + size);
    for (int i = 1; i < size - 1; i++) {
        if (setwards[0] < setwards[i]) {
            if (setwards[i] < setwards[size - 1]) {
                count++;
            }
        }
    }
    cout << count;
}
//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/