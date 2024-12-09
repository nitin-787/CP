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

// extended eucledien algo. to find gcd and Linear diophantine eq

//  call by referance
int ex_gcd(int a, int b, int &x, int &y) {
    if (b==0) {
        x = 1;
        y = 0; // y can be any integer
        return a;
    }
    int x0, y0;
    int g = ex_gcd(b, a%b, x0, y0);
    x = y0;
    y = x0 - (a/b) * y0;
    return g;
}

void solve() {
    int a, b, c, g, x, y;
    cin >> a >> b >> c;

    if (a > b) g = ex_gcd(a, b, x, y);
    else g = ex_gcd(b, a, y, x);

    if (c % g != 0) {
        cout << 0 << endl; // no solution
        return;
    }

    x = x * c / g; 
    y = y * c / g; 

    // General solution: x = x1 + k*(b/g), y = y1 - k*(a/g)
    int k_min = ceil(-1.0 * x * g / b);
    int k_max = floor(1.0 * y * g / a);

    
    if (k_min > k_max) {
        cout << 0 << endl; // No valid k exists
    } else {
        cout << (k_max - k_min + 1) << endl; // Number of solutions
        for (int k = k_min; k <= k_max; k++) {
            int xk = x + k * (b / g);
            int yk = y - k * (a / g);
            cout << "(" << xk << ", " << yk << ") ";
        }
        cout << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    FOR(i,1,t+1) {
        solve();
    }
    return 0;
}