#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];
    sort(A.begin(), A.end());
    for (int i = 0; i < N; ++i) {
        cout << A[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; ++i) {
        int index_lower = lower_bound(A.begin(), A.end(), A[i] - X) - A.begin();
        int index_upper = upper_bound(A.begin(), A.end(), A[i] - X) - A.begin();
        cout << index_lower << ' ' << index_upper << endl;
        if (index_lower == index_upper) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}