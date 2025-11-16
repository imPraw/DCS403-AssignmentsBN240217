#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int freq[26] = {0};

    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            freq[ch - 'a']++;
        }
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << char(i + 'a') << ":" << freq[i] << "  ";
    }
    cout << endl;

    return 0;
}
