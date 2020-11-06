#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

int main() {
    string S;
    cin >> S;

    int n = S.size();
    int ans = 1000000;
    for(int s=0;s<n-2;s++) {
        int sub = (S[s] - '0')*100 + (S[s+1] - '0')*10 + (S[s+2] - '0');
        if(abs(sub - 753) < ans) ans = abs(sub - 753);
    }

    cout << ans << endl;
}
