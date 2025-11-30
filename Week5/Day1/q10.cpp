#include <iostream>
using namespace std;

bool check(string s, int i, int j) {
    if(i >= j) return true;
    if(s[i] != s[j]) return false;
    return check(s, i + 1, j - 1);
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    if(check(s, 0, s.size() - 1)) cout << "Output: Palindrome";
    else cout << "Output: Not Palindrome";
}
