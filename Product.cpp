#include <math.h>

#include <algorithm>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int reminder(int a, int b) { return (a * b) / 10; }
main() {
    IOS string num1;
    string num2;
    getline(cin, num1);
    getline(cin, num2);
    int result[num1.length() + num2.length()]
              [num1.length() > num2.length() ? num2.length() : num1.length()];
    int level = 0;
    for (int i = min(num1.length(), num2.length()) - 1; i >= 0; i--) {
        for (int j = max(num1.length(), num2.length()) - 1; j >= 0; j--) {
            char *p_temp = &num1[i];
            char *p_temp2 = &num2[j];
            cout << *p_temp << " " << *p_temp2;

            result[level][j] = atoi(p_temp) * atoi(p_temp2);
            cout << result[level][j] << endl;
        }
        level++;
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