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
        long double n,m,a;
        cin >> n>>m>>a;
        long long ratio_width = ceil(n/a);
        long long ratio_length = ceil(m/a);
        cout << ratio_width * ratio_length;
    }

    //! COUNT SUBMIT:
    //! READING TIME:
    //! THINKING TIME:
    //! CODING TIME:
    //! DEBUG TIME:
    //! TOTAL TIME:

    /* NOTES
    
    */