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
    bool not_symmetic = true;

    set<char> diagonal;
    set<char> not_diagonal;
    for (int i = 0; i < size; i++) {
        string element;
        cin >> element;
        int temp = 0;
        for (int k = 0; k < size; k++) {
            if (i == k) {
                diagonal.insert((char)element[k]);
                temp = i;

            } else if (i + k == size - 1) {
                diagonal.insert((char)element[k]);

            } else {
                not_diagonal.insert((char)element[k]);
            }
            // if (diagonal.size() > 1 || not_diagonal.size() > 1) {
            //     not_symmetic = false;
            //     break;
            // }
        }
        // for (auto it = not_diagonal.begin(); it != not_diagonal.end(); it++)
        //     cout << *it;
    }
    // if(not_symmetic){
    //     cout<< "NO";
    // }else{
    //     cout<<"YES";
    // }
    // for (auto it = diagonal.begin(); it != diagonal.end(); it++) cout << *it;
    // for (auto it = not_diagonal.begin(); it != not_diagonal.end(); it++)
    //     cout << *it;
    if (diagonal.size() > 1 || not_diagonal.size() > 1 ||*diagonal.begin() == *not_diagonal.begin() ) {
        cout << "NO";
    } else {
        cout << "YES";
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