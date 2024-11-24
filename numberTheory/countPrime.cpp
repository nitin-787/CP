// https://leetcode.com/problems/count-primes/

class Solution {
public:
    int countPrimes(int n) {
         if (n <= 1) return 0; // border case

        vector<bool> pr(n+1, true);
        pr[0] = pr[1] = false;

        // sieve method - O(n log log n)
        for (int i = 2; i*i < n; i++) {
            if (pr[i]) {
                for (int j = i*i; j < n; j += i) {
                    pr[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (pr[i]) count++;
        }

        return count;
    }
};