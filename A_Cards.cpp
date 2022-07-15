#include <bits/stdc++.h>
using namespace std;

main() {
    int size;
    cin >> size;
    string inp;
    cin >> inp;
    char one = 'n';
    int one_count = 0;
    char zero = 'z';
    int zero_count = 0;
    for (int i = 0; i < size; i++) {
        if (inp[i] == 'n') {
            one_count++;
        } else if (inp[i] == 'z') {
            zero_count++;
        }
    }
    for (int i = 0; i < one_count; i++) {
        cout << 1 << " ";
    }
    for (int i = 0; i < zero_count; i++) {
        cout << 0 << " ";
    }
}

//! COUNT SUBMIT:
//! READING TIME:
//! THINKING TIME:
//! CODING TIME:
//! DEBUG TIME:
//! TOTAL TIME:

// * NOTES

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
        IOS     
    }

    //! COUNT SUBMIT:
    //! READING TIME:
    //! THINKING TIME:
    //! CODING TIME:
    //! DEBUG TIME:
    //! TOTAL TIME:

    /* NOTES

    */