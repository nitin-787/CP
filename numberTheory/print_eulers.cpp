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


const int N = 1e6;
vi p(N+1);

// sieve like algo. time - O(n log log n)
void phi_sieve(int n) {
    FOR(i,0,n+1) p[i] = i;

    FOR(i,2,n) {
        if (p[i] == i) { // i a is prime number
            FORk(j,i,n,i) {
                p[j] -= p[j]/i;
            }
        }
    }
}


// phi all numbers b/w 1 and n, time O(n.sqrt(n))
int phi(int n) {
    int ans = n;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            ans = ans - ans/i;
        }
    }
    if (n > 1) ans = ans - ans/n;
    return ans;
}

void solve() {
    int n;
    cin >> n;
    phi_sieve(N);
    cout << p[n] << endl; 
    // cout << phi(n) << endl; 
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}