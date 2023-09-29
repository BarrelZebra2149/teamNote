#include <bits/stdc++.h>
#define MAX 1010
#define INF 987654321
using namespace std;
using ll = long long;

int i, j, k;
int n, m;
char board[MAX][MAX];
char ret[MAX][MAX];
int di[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dj[] = {-1, -1, -1, 0, 1, 1, 1, 0};

void fastIO() {
    ios::sync_with_stdio(false); cin.tie(0);
}

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

void input() {
    cin>>n;
    string s;
    for(i=0; i<n; i++) {
        cin>>s;
        for(j=0; j<n; j++) {
            board[i][j] = s[j];
        }
    }
}

void solve() {
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(board[i][j] == '.') {
                int bombCnt = 0;
                for(k=0; k<8; k++) {
                    int mI = i + di[k];
                    int mJ = j + dj[k];
                    if(in_range(mI, mJ) && board[mI][mJ] != '.') {
                        bombCnt += board[mI][mJ] - '0';
                    }
                }
                ret[i][j] = (bombCnt >= 10 ? 'M' : bombCnt + '0');
            }
            else { ret[i][j] = '*'; }
        }
    }
    
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cout<<ret[i][j];
        }
        cout<<'\n';
    }
}

int main() {
    fastIO();
    input();
    solve();    
    return 0;
}
