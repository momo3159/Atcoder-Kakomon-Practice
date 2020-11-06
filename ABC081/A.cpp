#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = (s[0]-'0') + (s[1]-'0') + (s[2]-'0');
    cout << ans << endl;
}
