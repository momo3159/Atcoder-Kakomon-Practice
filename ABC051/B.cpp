#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    int ans = 0;
    for(int X=0;X<=K;X++) {
        for(int Y=0;Y<=K;Y++) {
            int Z = N - (X + Y);
            if(0 <= Z && Z <= K) ans++;
        }
    }

    cout << ans << endl;
}
