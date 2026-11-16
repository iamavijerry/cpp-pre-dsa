class Solution {
public:
    bool isPalindrome(int x) {
        long res = 0;
        int num = x;
        if (num < 0 ||(num % 10 == 0 && num != 0))
            return 0;

        while (num) {
            int ld = num % 10;
            num /= 10;
            // if (res > INT_MAX / 10)
            //     return 0;

            res = res * 10 + ld;
        }
        if (res == x)
            return 1;
        else
            return 0;
    }
};