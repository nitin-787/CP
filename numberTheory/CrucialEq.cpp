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

// https://www.spoj.com/problems/CEQU/

// eucledien algo. to find gcd
int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve() {
    int a, b, c, g;
    cin >> a >> b >> c;

    if (a > b) g = gcd(a,b);
    else g = gcd(b,a);

    if (c%g == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    FOR(i,1,t+1) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}