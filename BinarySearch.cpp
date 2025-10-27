#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter an Array size: ";
    int n;
    cin >> n;

    int data[n];
    cout << "Enter Sorted Data: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int target;
    cout << "Enter Your Target: ";
    cin >> target;

    int st = 0;
    int la = n - 1;
    bool found = false;

    while (st <= la) {
        int mid = st + (la - st) / 2;

        if (data[mid] > target) {
            la = mid - 1;  
        } else if (data[mid] < target) {
            st = mid + 1; 
        } else {
            cout << "Target found at index " << mid+1 << "." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
