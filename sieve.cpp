#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)

const int N = 1000000;
bool pr[N+1];

void sieve() {
    FOR(i,2,N+1) pr[i] = true;
    int sq = sqrt(N);
    FOR(i,2,sq+1)
        if (pr[i])
            FORk(j,i*i,N+1,i) {
                pr[j] = false;
            }
}

void solve() {
    sieve();
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}