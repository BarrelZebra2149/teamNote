#include <bits/stdc++.h>
#define MAX 1010
using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;
ll n;
void fastIO() {
    cin.tie(0); ios::sync_with_stdio(false);
}

ll getAdd(ll a, ll b) {
    return (a + b) % mod;
}

ll getMul(ll a, ll b) {
    return ((a % mod) * (b % mod)) % mod;
}

ll getSub(ll a, ll b) {
    ll ret = a-b;
    while(ret < 0) { ret += mod; }
    return ret;
}

ll getPow(ll num, ll idx) {
    ll res = 1;
    while(idx) {
        if(idx & 1) res = getMul(res, num);
        num = getMul(num, num);
        idx >>= 1;
    }
    return res;
}

ll getInv(ll num) {
    return getPow(num, mod - 2);
}

ll getComb(ll a, ll b) {
    if(b == 0) {return 1;}
    
    ll u, d;
    u=d=1;
    for(int j=0; j<b; j++) {
        u = getMul(u, a - j);
        d = getMul(d, j+1);
    }
    d = getInv(d);
    return getMul(u, d);
}

void input() {
    cin>>n;
}

void solve() {
    
}

int main() {
    fastIO();
    input();
    solve();
    return 0;
}
