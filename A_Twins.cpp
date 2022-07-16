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
    int inp[size];
    int sum = 0;
    for (int i = 0; i < size; i++) {
        int temp;
        cin >> temp;
        sum += temp;
        inp[i] = temp;
    }
    sort(inp, inp + size, greater<>());
    int divide = (int)floor(((double)sum / 2));
    int count = 0;
    int person_sum = 0;
    for (int i = 0; i < size; i++) {
        person_sum += inp[i];
        count++;
        if (divide < person_sum) {
            break;
        }
    }
    cout << count;
}

//! COUNT SUBMIT:
//! READING TIME: 10
//! THINKING TIME:
//! CODING TIME: 10
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/