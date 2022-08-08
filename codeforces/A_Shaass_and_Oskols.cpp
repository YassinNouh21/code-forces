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
int* left_and_right(int a, int size) {
    static int arr[2];
    arr[0] = a - 1;
    arr[1] = abs(size - a);
    return arr;
}
main() {
    IOS int size;
    cin >> size;
    int sizes[size];
    int output[size];
    for (int i = 0; i < size; i++) {
        cin >> sizes[i];
        output[i] = sizes[i];
    };
    int num_shoots;
    cin >> num_shoots;
    int shoot[num_shoots][2];
    int place, target;
    for (int i = 0; i < num_shoots; i++) {
        cin >> shoot[i][0];
        cin >> shoot[i][1];
    }
    for (int i = 0; i < num_shoots; i++) {
        if (shoot[i][0] == 1) {
            int* lar;
            lar = left_and_right(shoot[i][1], output[shoot[i][0] - 1]);
            output[shoot[i][0]] += lar[1];
            output[shoot[i][0] - 1] = 0;
        } else if (shoot[i][0] == size) {
            int* lar;
            lar = left_and_right(shoot[i][1], output[shoot[i][0] - 1]);
            output[shoot[i][0] - 2] += lar[0];
            output[shoot[i][0] - 1] = 0;
        } else {
            int* lar;
            lar = left_and_right(shoot[i][1], output[shoot[i][0] - 1]);
            output[shoot[i][0] - 2] += lar[0];
            output[shoot[i][0]] += lar[1];
            output[shoot[i][0] - 1] = 0;
        }
    }

    for (int i : output) cout << i << endl;
}

//! COUNT SUBMIT:
//! READING TIME: 15
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES
 didn't undertand it hard to explain

*/