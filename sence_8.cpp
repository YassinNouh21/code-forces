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
vll Seive(ll n)
{
    bool prime[n + 5];
    vll primes;
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (ll i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            primes.push_back(p);
    return primes;
}
// vector<char> segmentedSieve(long long L, long long R) {
//     // generate all primes up to sqrt(R)
//     long long lim = sqrt(R);
//     vector<char> mark(lim + 1, false);
//     vector<long long> primes;
//     for (long long i = 2; i <= lim; ++i) {
//         if (!mark[i]) {
//             primes.emplace_back(i);
//             for (long long j = i * i; j <= lim; j += i)
//                 mark[j] = true;
//         }
//     }

//     vector<ll> isPrime;
//     for (long long i : primes)
//         for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
//             isPrime.pb(j - L);
//     if (L == 1)
//         isPrime[0] =    ;
//     return isPrime;
// }
ll after_prime(ll num) {
    f(i, num + 1, 1e13) {
        if (prime(i))
            return i;
    }
}
/* Main()  function */
int main() {
    // u_file("");
    int t;
    cin >> t;
    // vll arr(t);
    // pre();
    while (t--) {
        ll a;
        ll b;
        cin >> a >> b;
        ll maxxx = max(a, b);
        // vll  prime = Seive(1e12);
        // print_v(prime);

        // long long e_a = prime[upper_bound(prime.begin(), prime.end(), a) - prime.begin()];
        long long e_a = after_prime(a);
        // long long e_b = prime[upper_bound(prime.begin(), prime.end(), b) - prime.begin()];
        long long e_b = after_prime(b);
        int neg = -1;
        ll sum = 0;
        // cout << e_a sp e_b e;
        cf(i, a, e_a) {
            cf(j, b, e_b) {
                if ((((i + j) % 2)) % 2 == 0) {
                    neg = 1;
                }
                else {
                    neg = -1;
                }
                sum += (j ^ i) * (neg);
            }
        }
        cout << sum e;
    }
    return 0;
}