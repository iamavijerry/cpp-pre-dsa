class Solution {
public:
    int reverse(int x) {
        int rs = 0;
        while (x) {
            int Ld = x % 10;
            // cout << INT_MAX << " " << INT_MIN <<endl;

            if (rs > 2147483647 / 10 || (rs == 2147483647 / 10 && Ld > 7))
                return 0;
            if (rs < -2147483648 / 10 || (rs == -2147483648 / 10 && Ld < -8))
                return 0;

            rs = rs * 10 + Ld;
            x /= 10;
        }
        return rs;
    }
};