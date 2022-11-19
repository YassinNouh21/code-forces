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
int compare(int x, int y, int ind_x, int ind_y) {
    if (y < ind_x) {
        return 0;
    }
    else if (x > ind_y) {
        return 0;
    }
    else {
        if (y < ind_y) {
            return ind_y - ind_x;
        }
        else if (x > ind_x) {
            return ind_y - ind_x + 1;
        }
        else if (x > ind_x && y < ind_y)
        {
            return ind_y - ind_x + 1;
        }
        else {
            return ind_y - ind_x + 1;

        }

    }


}
/* Main()  function */
int main() {
    // u_file("");
    int t, k;
    cin >> t >> k;
    map<int, vi> ind;
    f(i, 0, t) {
        int inp;
        cin >> inp;
        vi temp = ind[inp];
        temp.push_back(i);
        ind[inp] = temp;
    }
    // for (auto& i : ind) {
    //     print_v(i.second);
    //     cout << endl;
    // }
    f(i, 0, k) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        vi v1 = ind.at(1);
        vi v2 = ind.at(2);
        vi v3 = ind.at(3);
        vector<int>::iterator  lower1y = lower_bound(v1.begin(), v1.end(), y);
        vector<int>::iterator  lower2y = lower_bound(v2.begin(), v2.end(), y);
        vector<int>::iterator  lower3y = lower_bound(v3.begin(), v3.end(), y);

        int ind1y = (lower1y - v1.begin());
        int ind2y = (lower2y - v2.begin());
        int ind3y = (lower3y - v3.begin());

        vector<int>::iterator  lower1x = lower_bound(ind[1].begin(), ind[1].end(), x);
        vector<int>::iterator  lower2x = lower_bound(ind[2].begin(), ind[2].end(), x);
        vector<int>::iterator  lower3x = lower_bound(ind[3].begin(), ind[3].end(), x);

        int ind1x = lower1x - ind[1].begin();
        int ind2x = lower2x - ind[2].begin();
        int ind3x = lower3x - ind[3].begin();
        // exclude cases 
        cout << compare(x, y, ind1x, ind1y) << " ";
        cout << compare(x, y, ind2x, ind2y) << " ";
        cout << compare(x, y, ind3x, ind3y) e;
    }

    return 0;
}