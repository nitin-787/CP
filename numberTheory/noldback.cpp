#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
#define null nullptr
#define all(v) v.begin(), v.end()
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<ull> vull;


// https://codeforces.com/problemset/problem/17/A
int MaxNum = 1000;
vector<bool> pr(MaxNum + 1, true);
 
int solve() {
    pr[0] = pr[1] = false;
 
    // Step 1
    FOR(i, 2, sqrt(MaxNum) + 1) {
        if (pr[i]) {
             FORk(j, i * i, MaxNum+1, i) pr[j] = false;
        }
    }
    // Step 2
    vi prs;
    FOR (i,2,MaxNum+1) {
        if (pr[i]) prs.pb(i);
    }
 
    // Step 3
    vector<bool> cb(MaxNum + 1, false);
    FOR (i,0,prs.size()-1) {
        int ele = prs[i] + prs[i + 1] + 1;
        if (ele > MaxNum) break;
        if (pr[ele]) cb[ele] = true;
    }
 
    // Step 4
    int n, k;
    cin >> n >> k;
    int c = 0;
    FOR(i,2,n+1) if (cb[i]) c++;
    if (c >= k) cout << "YES" << endl; 
    else cout << "NO" << endl;
 
    return 0;
}
 

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}