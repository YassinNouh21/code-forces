#include <math.h>

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdin);

    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    int sum = b1 + b2 + b3;
    int x, y, z;

    if (a1 >= sum)
        a2 >= sum ? x = 0, y = sum : x = sum - a2, y = a2;

    else {
        if (a2 >= sum)
            x = 0, y = a1, z = sum - a1;
        else if (a2 >= a1)
            x = 0, y = a1, z = sum - a1;
        else
            x = a1 - a2, y = a2, z = sum - a1;
    }

    cout << x << endl << y << endl << z << endl;
}