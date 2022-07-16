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
        IOS int total_cakes, time, bake, bake_time;
        cin >> total_cakes >> time >> bake >> bake_time;
        double total = (double)total_cakes / (double)bake;
        total = ceil(total);
        int total_time_bake = total * time;
        if (total_time_bake > (bake_time + time)) {
            cout << "YES";
        } else {
            cout << "NO";
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