#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)

// 982,451,653
const long long int N = 982451653;
vector<bool> pr(N+1, true);
vector<int> prs;

// https://www.spoj.com/problems/KPRIMES2/

// solved but giving me TLE on SPOJ
void sieve() {
    int sq = sqrt(N);
    FOR(i,2,sq+1) if (pr[i]) FORk(j,i*i,N+1,i) pr[j] = false;
    prs.push_back(0);
    FOR(i,2,N+1) if (pr[i]) prs.push_back(i);
    cout << prs.size() << endl;
}

void solve() {
    long long int k;
    cin >> k;
    cout << prs[k] << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    sieve();
    while (t--) solve();
    return 0;
}