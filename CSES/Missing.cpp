#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
#define null nullptr
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<ull> vull;
#define all(v) v.begin(), v.end()

// approach 1 - using formula
/* int solve(const vi& nums, ull n) {
    ull sum = n * (n + 1) / 2;

    ull aSum = accumulate(all(nums), 0);
    return sum - aSum;
}
*/

// approach 2 - using XOR


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t-- > 0) {
        ull n;
        cin >> n;
        vi numbers(n-1);
        FOR(i,0,n) cin >> numbers[i]; 
        cout << solve(numbers, n);
    }
    return 0;
}