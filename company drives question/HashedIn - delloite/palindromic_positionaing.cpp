#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int countPalindromePartitions(string &s, int start) {
    if (start == s.size()) return 1; // reached end -> one valid partition
    
    int count = 0;
    for (int end = start; end < s.size(); end++) {
        if (isPalindrome(s, start, end)) {
            count += countPalindromePartitions(s, end + 1);
        }
    }
    return count;
}

int main() {
    string s = "aaaa";
    int totalWays = countPalindromePartitions(s, 0);
    cout << "Total palindrome partitions: " << totalWays << endl;
    return 0;
}