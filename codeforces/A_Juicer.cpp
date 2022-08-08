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
    IOS int num_o, escaped_weight, waste;
    cin >> num_o >> escaped_weight >> waste;
    int sum = 0, empty_waste_count = 0;
    int org[num_o];
    for (int i = 0; i < num_o; i++) {
        cin >> org[i];
    }
    for (int i : org) {
        if (escaped_weight >= i) {
            sum += i;
        }
        if (sum > waste) {
            empty_waste_count++;
            sum = 0;
        }
    }
    cout << empty_waste_count;
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/