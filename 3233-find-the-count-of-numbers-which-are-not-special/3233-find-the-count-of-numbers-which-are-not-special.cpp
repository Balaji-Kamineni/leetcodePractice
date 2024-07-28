class Solution {
public:
    vector<int> sieve(int n) {
        vector<bool> p(n + 1, true);
        p[0] = p[1] = false;
        for (int i = 2; i * i <= n; ++i) {
            if (p[i]) {
                for (int j = i * i; j <= n; j += i) {
                    p[j] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = 2; i <= n; ++i) {
            if (p[i]) {
                primes.push_back(i);
            }
        }
        return primes;
    }

    int nonSpecialCount(int l, int r) {
        if (l > r) return 0;
        int max_p = sqrt(r);
        vector<int> primes = sieve(max_p);
        vector<int> sp_nums;
        for (int p : primes) {
            long long sp_num = (long long)p * p;
            if (sp_num > r) break;
            if (sp_num >= l) {
                sp_nums.push_back(sp_num);
            }
        }
        int sp_count = sp_nums.size();
        int total = r - l + 1;
        return total - sp_count;
    }
};
