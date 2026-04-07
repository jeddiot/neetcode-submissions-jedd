class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        int left = 0, right = len - 1;

        // if (s[right] == '!' || s[right] == '?' || s[right] == '.') {
        //     right--;
        // }



        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            if ((char)toupper(s[left]) != (char)toupper(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
