#include<bits/stdc++.h>
#define ll long long
using namespace std;

void u_file(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {

    int n = 52;
    string s;
    cin >> s;

    map<char, pair<int, int>> cows;

    for (int i = 0; i < n; i++) {

        if ((cows.find(s[i]) != cows.end())) {
            int temp_location = cows[s[i]].first;
            cows[s[i]] = make_pair(temp_location, i);
        }
        else {
            cows[s[i]] = make_pair(i, 0);
        }

    }

    for (auto it : cows) {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = cows[s[i]].second + 1; j < n; j++) { // j is the second appearance of the cow
            if (s[i + 1] == s[j]) {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}