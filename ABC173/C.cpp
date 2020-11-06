#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool counter(vector<vector<int> > table, int H, int W, int K) {
    int cnt = 0;
    for(int row=0;row<H;row++) {
        for(int col=0;col<W;col++) {
            if(table[row][col] == 1){
                cnt++;
            }
        }
    }
    return cnt == K;
}

void copy(vector<vector<int> >& to, vector<vector<int> > from, int H, int W) {
    for(int i=0;i<H;i++) {
        for(int j=0;j<W;j++) {
            to[i][j] = from[i][j];
        }
    }
}
void updateRow(vector<vector<int> >& table, int row, int W) {
    for(int col=0;col<W;col++) {
        table[row][col] = 2;
    }
}
void updateCol(vector<vector<int> >& table, int col, int H) {
    for(int row=0;row<H;row++) {
        table[row][col] = 2;
    }
}

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<int> > c(H, vector<int>(W));
    for(int i=0;i<H;i++) {
        for(int j=0;j<W;j++) {
            char tmp;
            cin >> tmp;
            if(tmp == '.') c[i][j] = 0;
            else c[i][j] = 1;
        }
    } 

    vector<vector<int> > copied(H, vector<int>(W));
    int ans = 0;
    for(int bit_r=0;bit_r < (1 << H);bit_r++) {
        for(int bit_c=0;bit_c < (1 << W);bit_c++){
            copy(copied, c, H, W);
            for(int i=0;i<H;i++) {
                if(bit_r & (1 << i)) {
                    updateRow(copied, i, W);
                }
            }    
            for(int j=0;j<W;j++) {
                if(bit_c & (1 << j)) {
                    updateCol(copied, j, H);
                }
            }    
            if(counter(copied, H, W, K)) ans++;    
        }
    }

    cout << ans << endl;
}
