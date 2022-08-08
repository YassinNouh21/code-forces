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
    IOS int lamp, street;
    int len = 0;
    cin >> lamp >> street;
    set<int> elements;
    vector<int> diffs;
    bool is_first_lamb = false;
    bool is_end_lamb = false;
    for (int i = 0; i < lamp; i++) {
        int temp;
        cin >> temp;
        if (temp == street) is_end_lamb = true;
        if (temp == 0) is_first_lamb = true;
        elements.insert(temp);
    }
    // for(auto it = elements.begin(); it != elements.end() ;it++) cout <<
    // *(++it) << " ";
    int arr[elements.size()];
    int i = 0;
    for (auto it = elements.begin(); it != elements.end(); it++) {
        arr[i] = *it;
        i++;
    }
    for (int i = 0; i < elements.size() - 1; i++) {
        diffs.push_back(arr[i + 1] - arr[i]);
    }
    double maxes[3] = {0, 0, 0};
    int max = *max_element(diffs.begin(), diffs.end());
    if (!is_first_lamb) {
        maxes[0] = arr[0] - 0;
    }
    if (!is_end_lamb) {
        maxes[2] = street - arr[elements.size()];
    }
    maxes[1] = (double)max / 2;

    printf("%.10f", *max_element(maxes, maxes + 3));
    //     cout << endl;
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

/* NOTES

*/