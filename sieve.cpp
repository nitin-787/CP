#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)

const int MAXN = 1e6;
vector<bool> pr(MAXN+1, true); 

void sieve() {
    pr[0] = pr[1] = false;
    FOR(i,2,i*i) if (pr[i]) FORk(j,i*i,MAXN+1,i) pr[j] = false; 
}

void solve() {
    sieve();
    FOR(i,1,100) if (pr[i]) cout << i << endl;
}
 
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}