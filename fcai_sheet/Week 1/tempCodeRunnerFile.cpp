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


vll merge_2(vll& arr1, vll& arr2, ll n1, ll n2, vll& arr3) {
    ll i = 0, j = 0, k = 0;
    vll temp;
    // Traverse both array
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            temp.pb(k);
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n1)
        arr3[k++] = arr1[i++];

    while (j < n2) {
        temp.pb(k);
        arr3[k++] = arr2[j++];
    }
    return temp;
}

// bool check_location(vll arr1, vll ind, ll r) {
//     ll j = 0;
//     f(i, 0, arr1.size()) {
//         if (arr1[i] == arr1[ind[j]]) {
//             continue;
//         }
//         if (i + 1 == ind[j + 1]) {
//             j++;
//         }
//         cout << abs(arr1[ind[j]] - arr1[i]) e;
//         if (abs(arr1[ind[j]] - arr1[i]) > r) {
//             return false;
//         }
//     }
//     return true;
// }
vll range(vll nn, ll tar) {
    vll temp;
    ll p2 = (lower_bound(nn.begin(), nn.end(), tar) - nn.begin());
    ll p1 = p2 - 1;
    if (p2 >= nn.size()) {
        p2 = -1;
    }
    //
    if (p1 < 0) {
        temp.pb(-1);
    }
    else {
        temp.pb(p1);

    }
    temp.pb(p2);
    return temp;
}
bool is_mid_range(vll nn, vll tt, ll mid) {
    f(i, 0, tt.size()) {
        vll tem = range(nn, tt[i]);
        if (tem[0] == -1) {
            if (abs(tt[i] - nn[tem[1]]) > mid) {
                return false;
            }
        }
        if (tem[1] == -1) {
            if (abs(tt[i] - nn[tem[0]]) > mid) {
                return false;
            }
        }
        if (tem[1] != -1 && tem[0] != -1) {
            // cout << abs(tt[i] - nn[tem[0]]) sp abs(tt[i] - nn[tem[1]]) e;
            if (abs(tt[i] - nn[tem[0]]) > mid && abs(tt[i] - nn[tem[1]]) > mid) {
                return false;
            }
        }
    }
    return true;
}
/* Main()  function */
int main() {
    // u_file("");
    ll t, n;
    cin >> t >> n;

    vll tt(t);
    vll nn(n);
    vll arr(t + n);
    f(i, 0, t) {
        cin >> tt[i];
    }
    f(i, 0, n) {
        cin >> nn[i];
    }

    // vll temp = merge_2(tt, nn, t, n, arr);
    // print_v(temp);
    // print_v(nn);
    // print_v(temp);
    // print_v(arr);


    // cout << is_mid_range(nn, tt, 7);
    ll st = 0, ed = abs(tt[0] - tt[tt.size() - 1]);
    cout << ed e;
    while (st < ed) {
        ll mid = st + (ed - st) / 2;
        if (is_mid_range(nn, tt, mid)) {
            ed = mid;
        }
        else {
            st = mid + 1;
        }
    }
    cout << ed;
    return 0;
}