#include <bits/stdc++.h>
using namespace std;

main() {
    int size;
    cin >> size;
    vector<int> temp_vector;
    vector<int> player_one;
    vector<int> player_two;

    for (int i = 0; i < size; i++) {
        int temp_inp;
        cin >> temp_inp;
        temp_vector.push_back(temp_inp);
    }
    while (temp_vector.size() != 0) {
        if (temp_vector.back() >= temp_vector.front()) {
            player_one.push_back(temp_vector.back());
            temp_vector.pop_back();
        } else {
            player_one.push_back(temp_vector.front());
            temp_vector.erase(begin(temp_vector));
        }
        if (temp_vector.back() >= temp_vector.front()) {
            player_two.push_back(temp_vector.back());
            temp_vector.pop_back();
        } else {
            player_two.push_back(temp_vector.front());
            temp_vector.erase(begin(temp_vector));
        }
    }
    cout << accumulate(player_one.begin(), player_one.end(), 0) << " "
         << accumulate(player_two.begin(), player_two.end(), 0);
}

//! COUNT SUBMIT:
//! READING TIME:5
//! THINKING TIME:
//! CODING TIME: 11
//! DEBUG TIME:
//! TOTAL TIME:

// * NOTES