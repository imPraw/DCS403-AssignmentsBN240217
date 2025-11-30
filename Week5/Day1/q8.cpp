#include <iostream>
using namespace std;

void reverseString(string &s, int i, int j) {
    if(i >= j) return;
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
    reverseString(s, i + 1, j - 1);
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    reverseString(s, 0, s.size() - 1);
    cout << "Output: " << s;
}
