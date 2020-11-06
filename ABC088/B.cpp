#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    ll alice = 0;
    ll bob = 0;
    for(int i=0;i<N;i++) {
        if(i%2 == 0) alice += a[i];
        else bob += a[i];
    }

    cout << alice - bob << endl;
}
