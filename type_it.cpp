/*
Geek is extremely punctual but today even he is not feeling like doing his homework assignment. He must start doing it immediately in order to meet the deadline. For the assignment, Geek needs to type a string s.
To reduce his workload, he has decided to perform one of the following two operations till he gets the string.

Append a character at the end of the string.
Append the string formed thus far to the end of the string. (This can not be done more than once.)
Help Geek find the minimum operations required to type the given string.


Example 1:

Input:
s = abcabca
Output: 5
Explanation: a -> ab -> abc -> abcabc 
-> abcabca

*/



class Solution {
  public:
    bool isPalindrome(int n, string &s) {
        for (int i = 0; i <= n / 2; i++) {
            if (s[i] != s[n / 2 + i + 1]) return false;
        }
        
        return true;
    }
    
    int minOperation(string s) {
        // code here
        int n = s.length();
        
        int maxLength = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 != 0 and isPalindrome(i, s)) maxLength = i + 1; 
        }
        
        if (maxLength == 0) return n;
        
        return n + 1 - maxLength / 2;
    }
};
