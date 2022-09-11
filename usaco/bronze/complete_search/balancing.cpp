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
void print(const T array[], size_t SIZE) { for (size_t i = 0; i < SIZE; i++)   std::cout << array[i] << " ";  cout << "\n"; }

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
    // freopen((s + ".out").c_str(), "w", stdout);
}

/* clang-format on */
int region_detect(pii f, pii p1) {
    if (p1.first > f.first && p1.second > f.second) return 1;
    else if (p1.first > f.first && p1.second < f.second) return 2;
    else if (p1.first < f.first && p1.second < f.second) return 3;
    return 0;
}
/* Main()  function */
int main() {
    u_file("balancing");
    int t;
    cin >> t;
    int temp; cin >> temp;
    int x[t];
    int y[t];
    pii p[t];
    f(i, 0, t) {
        int xx;
        int yy;
        cin >> xx >> yy;
        x[i] = xx;
        y[i] = yy;
        p[i] = make_pair(xx, yy);
    }
    vector<pii> points;
    sort(x, x + t);
    sort(y, y + t);
    int mid = 0;
    t % 2 == 0 ? mid = (t / 2) - 1 : mid = t / 2;

    int x1 = x[lower_bound(x, x + t, x[mid]) - x] - 1;
    int x2 = x[upper_bound(x, x + t, x[mid]) - x] - 1;
    int y1 = y[lower_bound(y, y + t, y[mid]) - y] - 1;
    int y2 = y[upper_bound(y, y + t, y[mid]) - y] - 1;
    points.pb(make_pair(x1, y1));
    points.pb(make_pair(x1, y2));
    points.pb(make_pair(x2, y1));
    points.pb(make_pair(x2, y2));

    int minn = INT_MAX;
    f(i, 0, 4) {
        int rg[4] = {};
        cout << points[i].first sp points[i].second e;
        f(j, 0, t) {
            rg[region_detect(points[i], p[j])]++;
        }
        print(rg, 4);
        sort(rg, rg + 4);
        int maxx = rg[3];
        minn = min(minn, maxx);
    }
    cout << minn  e;

    return 0;
}