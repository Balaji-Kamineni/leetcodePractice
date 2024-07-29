// class Solution {
// public:
//     int numTeams(vector<int>& rating) {
//         int n = rating.size();
//         int count = 0;
        
//         for (int j = 1; j < n - 1; ++j) {
//             int left_less = 0, left_more = 0, right_less = 0, right_more = 0;
            
//             for (int i = 0; i < j; ++i) {
//                 if (rating[i] < rating[j]) {
//                     left_less++;
//                 } else if (rating[i] > rating[j]) {
//                     left_more++;
//                 }
//             }
            
//             for (int k = j + 1; k < n; ++k) {
//                 if (rating[k] < rating[j]) {
//                     right_less++;
//                 } else if (rating[k] > rating[j]) {
//                     right_more++;
//                 }
//             }
            
//             count += left_less * right_more + left_more * right_less;
//         }
        
//         return count;
//     }
// };
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int cnt = 0;

        for (int i = 1; i < n - 1; ++i) {
            int ll = 0, lm = 0, rl = 0, rm = 0;

            for (int j = 0; j < i; ++j) {
                if (rating[j] < rating[i]) {
                    ll++;
                } else if (rating[j] > rating[i]) {
                    lm++;
                }
            }

            for (int k = i + 1; k < n; ++k) {
                if (rating[k] < rating[i]) {
                    rl++;
                } else if (rating[k] > rating[i]) {
                    rm++;
                }
            }

            cnt += ll * rm + lm * rl;
        }

        return cnt;
    }
};

