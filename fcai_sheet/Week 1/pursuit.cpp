#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

//! TYPES  
#define ll long long
// pair
#define pii pair<int, int>
#define pll pair<long long, long long>
//vector
typedef vector<int>::iterator vit;
#define vi vector<int>
#define vll vector<long long>
typedef vector<char> vc;
typedef vector<string> vs;
// map
#define mii map<int, int>
//set
typedef set<int>::iterator sit;
#define si set<int>
#define sc set<char>


/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define ff first
#define s second

//! PRINTS 
#define sp <<" "<<
#define ss <<
#define e << endl
#define endl '\n'
//print vector
template <typename T>
void print_v(vector<T>& v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; };
//print set
template <typename T>
void print_s(set<T>& v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; };
//print array
template <typename T>
void print(const T array[], size_t SIZE) { for (size_t i = 0; i < SIZE; i++)   std::cout << array[i] << " "; }

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a, int b) { if (a < b) return a; return b; }
ll min(int a, ll b) { if (a < b) return a; return b; }
ll max(ll a, int b) { if (a > b) return a; return b; }
ll max(int a, ll b) { if (a > b) return a; return b; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a) { for (int i = 0;i < (int)a.size();++i) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A'; return a; }
string to_lower(string a) { for (int i = 0;i < (int)a.size();++i) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A'; return a; }
bool prime(ll a) { if (a == 1) return 0; for (int i = 2;i <= round(sqrt(a));++i) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

// ! USACO FILE 
void u_file(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

/* clang-format on */
ll sum_1;
ll sum_2;
void is_bigger_than(vll& first, deque<ll>& second, ll n) {
    ll i = n - (n - n / 4);
    sum_1 = 0;
    sum_2 = 0;

    for (; i < first.size(); i++) {
        sum_1 += first[i];
        sum_2 += second[i];
    }
}
bool add_stage(vll& first, deque<ll>& second, ll n, ll new_stage, ll sum_11, ll sum_22) {
    ll old = n - (n - n / 4);
    ll new_n = ((n + new_stage) - (n + new_stage) / 4);
    ll sum1 = 0;
    ll diff = abs(new_n - (n - n / 4));
    sum1 += diff * 100;
    ll sum2 = 0;
    f(i, new_stage - (n + old), old) {
        if (i < 0) {
            sum2 += 0;
        }
        else {
            sum2 += second[i];
        }
    }
    return sum1 + sum_11 >= sum2 + sum_22;
}
/* Main()  function */
int main() {
    // u_file("");
    int test;
    cin >> test;
    while (test--)
    {
        int t;
        cin >> t;
        vll arr(t);
        deque<ll> arr2(t);

        ll sum = 0;
        f(i, 0, t) {
            cin >> arr[i];
        }
        f(i, 0, t) {
            cin >> arr2[i];
        }
        is_bigger_than(arr, arr2, t);

        ll l = 0, r = 10;
        while (l < r) {
            ll mid = l + (r - l) / 2;
            if (!add_stage(arr, arr2, t, mid, sum_1, sum_2)) {
                l = mid + 1;
            }
            else {
                r = mid;
            }
            cout << t sp mid sp sum_1 sp sum_2 e;
        }
        // cout << l e;

    }



    // ll i = t - (t - t / 4);
    // for (;i < t;i++) {
    //     sum += arr[i];
    // }
    // cout << sum e;

    return 0;
}
/*
1
4
10 20 30 40
100 100 100 100

*/