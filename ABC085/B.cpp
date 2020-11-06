#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for(int i=0;i<N;i++) cin >> d[i];
    
    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());

    vector<int> m(d[0]+1, 0);
    for(int i=0;i<N;i++) m[d[i]]++;

    int ans = 0;
    for(int i=0;i<m.size();i++) {
        if(m[i] > 0) ans++;
    }

    cout << ans << endl;
}
