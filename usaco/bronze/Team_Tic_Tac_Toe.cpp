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
#define mi map<char, int>
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
set<set<char>> freq;

void check_winner(sc i, int& team, int& ind) {
    if (i.size() == 1 && (count(freq.begin(), freq.end(), i) == 0)) {
        ind++;
    }
    else if (i.size() == 2 && (count(freq.begin(), freq.end(), i) == 0)) {
        team++;
    }
}


/* Main()  function */
int main() {
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    sc test;
    char arr[3][3];
    int ind = 0;
    int team = 0;
    f(i, 0, 3) {
        f(j, 0, 3) {
            cin >> arr[i][j];
        }
    }
    //check horizontal 
    f(i, 0, 3) {
        f(j, 0, 3) {
            test.insert(arr[i][j]);
            // print_s(test);
        }
        check_winner(test, team, ind);
        freq.insert(test);
        test.clear();
    }

    // vertical 
    f(i, 0, 3) {
        f(j, 0, 3) {
            test.insert(arr[j][i]);
            // print_s(test);
        }
        check_winner(test, team, ind);
        freq.insert(test);
        test.clear();
        // cout << team << " " << ind << endl;
    }
    // // diagonal 1 
    test.insert(arr[0][0]);
    test.insert(arr[1][1]);
    test.insert(arr[2][2]);
    check_winner(test, team, ind);
    freq.insert(test);
    test.clear();

    // // diagonal 2
    test.insert(arr[0][2]);
    test.insert(arr[1][1]);
    test.insert(arr[2][0]);
    check_winner(test, team, ind);
    freq.insert(test);
    // // print_s(test);
    // // cout << endl << test.size() << endl;
    test.clear();

    cout << ind << endl << team;
    return 0;
}