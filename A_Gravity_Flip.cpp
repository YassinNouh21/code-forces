#include <bits/stdc++.h>
using namespace std;

main() {
    int size;
    bool areEqual = true;

    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

//! COUNT SUBMIT: 1
//! READING TIME:2
//! THINKING TIME: 6
//! CODING TIME: 11 + 3
//! DEBUG TIME:
//! TOTAL TIME:

/*  NOTES
  think of the topics of the division before answer
*/