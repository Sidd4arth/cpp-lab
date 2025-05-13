
/*

    check if a given string is palindrome or not

    giving string to func
    return true or false
    palindrome string- on reversal reads the same
    example
    MADAM
    11211..
    left half and right half - have tobe reversed
    then if after==before
    true

    skeleton:
    f(i)
    {
    if(i>n/2)
    {
    return true}
    if(s[i]!=s[n-i-1])
    {
    return false
    }
    else{
    f(i+1)}
    }
*/

#include<iostream>
using namespace std;

bool isPalindrome(string s, int i) {
    int n = s.length();
    if (i >= n / 2) {
        return true;
    }
    if (s[i] != s[n - i - 1]) {
        return false;
    }
    return isPalindrome(s, i + 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
