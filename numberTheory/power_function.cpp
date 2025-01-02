// Author: Nitin
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
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<ull> vull;

// optimal solution using divide and conquer (O(logn))
ll pow(int a, int b) {
    if (b==0) return 1;
    ll ans = pow(a, b/2);
    ans *= ans;
    if (b%2==1) ans*=a;
    return ans;
}

void random_potato() {
    int a, b;
    cin >> a >> b;
    cout << pow(a, b) << endl;
}

int main () {
    nitinFastIO;
    int t = 1;
    cin >> t;
    while (t-- > 0) {
        random_potato();
    }
    return 0;
}