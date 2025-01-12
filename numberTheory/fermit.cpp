// Author: Nitin || CF : random_potato
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
const int MOD = 7;

// (a^p-1) mod p == 1 if p is prime and a is ! multiple of p
// generally we take a < p
ll pow(int a, int b) {
    if (b==0) return 1;
    ll ans = pow(a,b/2);
    ans = (ans * ans) % MOD;
    if (b % 2 == 1) ans = (ans * a) % MOD;
    return ans;
}

ll mod_inv(int a) {
    return pow(a, MOD-2);
}

void random_potato() {
    for (int i=1; i<7; i++) {
        cout << mod_inv(i) << endl;
    }
}

int main () {
    nitinFastIO;
    int t = 1;
    // cin >> t;
    while (t-- > 0) {
        random_potato();
    }
    return 0;
}