#include <bits/stdc++.h>
using namespace std;

int i, j;
using ll = long long;

class modN {
    ll x, static int mod;
    
public : 
    static void setMod(int m) { mod = m; }
    modN(ll x = 0) : x((x + mod + mod) % mod) {}
    
    int getVal() const{ return x; } 
    modN &operator+=(const modN &a) {
        if((x += a.getVal()) >= mod) { x -= mod; }
        return *this;
    }
    
    modN &operator-=(const modN &a) {
        if((x += mod - a.getVal()) >= mod) { x -= mod; }
        return *this;
    }
    
    modN &operator*=(const modN &a) {
        (x *= a.getVal()) %= mod;
        return *this;
    }
    
    modN operator+(const modN &a) const {
        modN ret(*this); return ret += a;
    }
    
    modN operator-(const modN &a) const {
        modN ret(*this); return ret -= a;
    }
    
    modN operator*(const mint &a) const {
        modN ret(*this); return ret *= a;
    }
    
    modN getPow(ll idx) const {
        modN ret = 1, val(*this);
        while(idx) {
            if(idx & 1) { ret *= val; }
            idx >>= 1;
            val *= val;
        }
        return ret;
    }
    
    modN inv() const { return getPow(mod-2); }
}

int modN::mod = 0;

void fastIO() {
    ios::sync_with_stdio(false); cin.tie(0);
}

void input() {
    
}

void solve() {
    
}

int main() {
    fastIO();
    input();
    solve();    
    return 0;
}
