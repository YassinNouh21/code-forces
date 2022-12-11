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
#define all(n) (n).begin(), (n).end()


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

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
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

/* Main()  function */
int main() {
    // u_file("");
    IOS;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll arr[n];
        f(i, 0, n) {
            cin >> arr[i];
        }
        if (n > 3) {
            bool flag = 0;
            ll div1 = __gcd(arr[0], arr[2]);
            ll div2 = __gcd(arr[1], arr[3]);
            for (ll i = 0; i < n; i += 2) {
                div1 = __gcd(div1, arr[i]);
            }
            for (ll i = 1; i < n; i += 2) {
                div2 = __gcd(div2, arr[i]);
            }
            bool flag1 = true;
            for (ll i = 0; i < n; i += 2) {
                if (__gcd(arr[i], div2) == 1) {
                    flag1 = true;
                }
                else {
                    flag1 = false;
                    break;

                }
            }
            bool flag2 = true;
            for (ll i = 1; i < n; i += 2) {
                if (__gcd(arr[i], div1) == 1) {
                    flag2 = true;
                }
                else {
                    flag2 = false;
                    break;
                }

            }
            if (!(flag1 ^ flag2)) {
                cout << (div1 > div2 ? div1 : div2) e;
            }
            else {
                cout << 0 e;
            }
        }
        else if (n == 3) {
            ll div1 = __gcd(arr[0], arr[1]);
            ll div2 = __gcd(arr[1], arr[2]);
            ll div3 = __gcd(arr[0], arr[2]);
            if (div3 == 1) {
                cout << arr[1] e;
            }
            else if (arr[1] % div3 != 0) {
                cout << div3 e;
            }
            else {
                cout << 0 e;
            }
        }
        else {
            if (count(arr, arr + n, 1) == 2) {
                cout << 0 e;
            }
            else {
                if (arr[0] > arr[1]) {
                    cout << arr[0] e;
                }
                else if (arr[0] < arr[1]) {
                    cout << arr[1] e;
                }
                else { cout << 0 e; }
            }
        }
    }
    return 0;
}