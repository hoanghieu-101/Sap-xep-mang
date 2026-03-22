#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> b(n, true);
    vector<int> s;
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        int max_val = INT_MIN;
        int max_idx = -1;

        for (int j = 0; j < n; j++) {
            if (b[j] == true && a[j] > max_val) {
                max_val = a[j];
                max_idx = j;
            }
        }

        if (max_idx != -1) {
            s.push_back(max_val);
            b[max_idx] = false; 
        }
    }
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    return 0;
}

