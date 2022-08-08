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
    string arr[size];
    for (int i = 0; i < size; i++) cin >> arr[i];
    string temp = arr[0];
    int count = 0;
    string temp2;

    for (int i = 0; i < size; i++) {
        if (arr[i] == temp)
            count++;
        else {
            temp2 = arr[i];
        }
    }
    if (count >= size / 2 + 1)
        cout << temp;
    else {
        cout << temp2;
    }
    return 0;
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/