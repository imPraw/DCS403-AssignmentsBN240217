#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;
    bool inWord = false;

    cout << "Enter a sentence: ";
    getline(cin, str);

    for (char ch : str) {
        if (isspace(ch))
            inWord = false;
        else if (!inWord) {
            inWord = true;
            count++;
        }
    }

    cout << "Number of words: " << count << endl;
    return 0;
}
