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
    while (size--) {
        int arr_size;
        cin >> arr_size;
        double arr[arr_size];
        double sum = 0;
        for (int i = 0; i < arr_size; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        arr_size++;
        double temp = sum / arr_size;
        for (int i = 0; i < arr_size - 1; i++) {
            cout << arr[i] - temp << " ";
        }
        cout << endl;
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