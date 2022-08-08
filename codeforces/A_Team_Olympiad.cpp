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

using namespace std;

main() {
    int size, num_teams = 0, math = 0, sport = 0, pro = 0;
    cin >> size;
    int inp[size];
    for (int i = 0; i < size; i++) cin >> inp[i];
    math = count(inp, inp + size, 1);
    pro = count(inp, inp + size, 2);
    sport = count(inp, inp + size, 3);
    num_teams = min(min(math, pro), sport);
    cout << num_teams << endl;
    int n = 0, j = 0, k = 0;
    int arr1[num_teams];
    int arr2[num_teams];
    int arr3[num_teams];
    for (int i = 0; i < size; i++) {
        if (inp[i] == 1 && n < num_teams) {
            arr1[n] = i+1;
            n++;
        }
        if (inp[i] == 2 && j < num_teams) {
            arr2[j] = i+1;
            j++;
        }
        if (inp[i] == 3 && k < num_teams) {
            arr3[k] = i+1;
            k++;
        }
    }
    for (int i = 0; i < num_teams; i++) {
        cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
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