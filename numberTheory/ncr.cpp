// Author: Nitin || CF : Pechkas69
#include <bits/stdc++.h>
using namespace std;
#define nitinFastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
#define null nullptr
#define all(v) v.begin(), v.end()
#define rem(str,c) str.erase(remove(all(str), c), str.end());
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<ull> vull;
typedef unordered_set<int> usi;
const int MOD =  1e9+7;

ll pow(int a, int b) {
    if (b==0) return 1;
    ll ans = pow(a, b/2);
    ans = (ans*ans)%MOD;
    if (b%2 == 1) ans = (ans*a)%MOD;
    return ans;
}

ll mod_inv(int a) {
    return pow(a, MOD-2);
}

ll fact(int n) {
    ll ans = 1;
    FOR(i,2,n+1) ans = (ans*i)%MOD;
    return ans;
}

ll ncr(int n, int r) {
    ll nf = fact(n);
    ll nrf = mod_inv(fact(n-r));
    ll rf = mod_inv(fact(r));
    return (rf*((nf*nrf)%MOD))%MOD;
}

void Pechkas69() {
    int n, r;
    cin >> n >> r;
    cout << ncr(n, r) << endl;
}

int main () {
    nitinFastIO;
    int t = 1;
    cin >> t;
    while (t-- > 0) {
        Pechkas69();
    }
    return 0;
}