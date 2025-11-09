#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string word;
    stringstream ss(sentence);
    int count = 0;
    while (ss >> word)
        count++;

    cout << "Number of words: " << count;
    return 0;
}
