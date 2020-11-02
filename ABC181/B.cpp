#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);

    for(int i=0;i<N;i++) {
        cin >> A[i] >> B[i];
    }    

    long long ans = 0;
    for(int i=0;i<N;i++) {
        ans += (B[i] - A[i] + 1) * (A[i] + B[i]) / 2;
    }

    cout << ans << endl;
}
