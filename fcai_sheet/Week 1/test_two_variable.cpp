#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <bits/stdc++.h>
using namespace std;
#define SHEHAB ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ul unsigned long long
#define ld long double
ll formula(ll a, ll b)
{
    return ((a + b)) * ((a * a) + (b * b));
}


void solve() {
    ll n;
    cin >> n;
    ll ans = INT64_MAX;
    for (int a = 0; a <= 1e6; ++a) {
        ll bl = 0, br = 1e6;
        while (bl <= br)
        {
            ll b = (bl + br) / 2;
            if (formula(a, b) >= n)
                br = b - 1, ans = min(ans, formula(a, b));
            else
                bl = b + 1;
        }
    }
    cout << ans << endl;
}

int main() {
    SHEHAB;
    //    int t;
    //    cin >> t;
    //    while(t--)
    solve();

    return 0;
}
