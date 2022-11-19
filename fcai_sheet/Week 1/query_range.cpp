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
    freopen((s + ".txt").c_str(), "r", stdin);
    freopen((s + "ah.txt").c_str(), "w", stdout);
}

/* clang-format on */

/* Main()  function */
int main() {
    // u_file("01_random_01");
    ll t;
    cin >> t;
    ll arr[t];
    map<ll, vll> index;
    vll temp2;
    f(i, 0, t) {
        cin >> arr[i];
        temp2.push_back(arr[i]);
        vll temp = index[arr[i]];
        temp.pb(i + 1);
        index[arr[i]] = temp;
    }
    // for (auto i : index) {

    //     cout << i.first << " ";
    //     print_v(i.second);
    //     cout e;
    // }
    sort(temp2.begin(), temp2.end());
    ll q;
    cin >> q;
    while (q--) {
        ll st, ed, tar;
        cin >> st >> ed >> tar;
        if (!binary_search(temp2.begin(), temp2.end(), tar)) {
            cout << 0 e;
        }
        else {
            vll temp = index[tar];
            auto st_ind = lower_bound(temp.begin(), temp.end(), st);
            auto ed_ind = lower_bound(temp.begin(), temp.end(), ed);
            // if (temp[ed_ind] > ed || ed_ind >= temp.size()) {
            //     ed_ind--;
            // }
            cout << ed_ind - st_ind  e;
        }

    }
    return 0;
}
/*

5
7 7 7 1 6
3
1 5 7
1 2 7
1 3 7
*/