#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
//print vector
template <typename T>
void print_v(vector<T>& v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; };
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


/* Main()  function */
int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int t;
    cin >> t;
    int ts;
    cin >> ts;
    ll s1[t + 1][2];
    int s2[ts + 1][2];
    s1[0][0] = 0;
    s2[0][0] = 0;
    f(i, 1, t + 1) {
        int a = 0, b;
        cin >> a >> b;
        s1[i][0] = s1[i - 1][0] + a;
        s1[i][1] = b;
    }
    f(i, 1, ts + 1) {
        int a = 0, b;
        cin >> a >> b;
        s2[i][0] = s2[i - 1][0] + a;
        s2[i][1] = b;
    }
    ll sp1[100];
    ll sp2[100];

    f(i, 0, t) {
        int end = abs((s1[i][0] - s1[i + 1][0]));
        int j = s1[i][0];
        while (end--) {
            sp1[j] = s1[i + 1][1];
            j++;
        }
    }
    f(i, 0, ts) {
        int end = abs((s2[i][0] - s2[i + 1][0]));
        int j = s2[i][0];
        while (end--) {
            sp2[j] = s2[i + 1][1];
            j++;
        }
    }
    // print(sp1, 100);
    // cout << endl;
    // print(sp2, 100);
    si dis;
    f(i, 0, 100) {
        if (sp2[i] > sp1[i]) {
            dis.insert(sp2[i] - sp1[i]);
        }
    }
    // print_s(dis);
    cout << *max_element(dis.begin(), dis.end());

    return 0;
}