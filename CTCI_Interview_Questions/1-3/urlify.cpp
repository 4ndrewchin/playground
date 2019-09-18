/**
 * CTCI 1-3: URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient space at the end to hold the additional characters, and that you are given the "true" length of the string. (Note: if implementing in Java, please use a character array so that you can perform this operation in place.)
 */
#include <iostream>
#include <string>
using namespace std;

// time: O(N)
// space: O(N)
string urlify(char s[], int len) {
    int spaces = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ')
            spaces++;
    }
    const int new_len = len - spaces + (spaces * 3) + 1;
    char modified[new_len];
    int curr = 0;
    int i;
    for (i = 0; i < new_len - 1; i++) {
        if (s[curr] == ' ') {
            modified[i] = '%';
            modified[i+1] = '2';
            modified[i+2] = '0';
            i += 2;
        } else {
            modified[i] = s[curr];
        }
        curr++;
    }
    modified[i] = '\0';
    return modified;
}

// time: O(N)
// space: O(1)
string inPlaceUrlify(char s[], int len) {
    int spaces = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ')
            spaces++;
    }

    if (spaces == 0)
        return s;
    
    int new_len = len + (spaces * 2);
    int index = new_len;
    s[index] = '\0';
    index--;
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            s[index] = '0';
            s[index-1] = '2';
            s[index-2] = '%';
            index -= 3;

        } else {
            s[index] = s[i];
            index--;
        }
    }
    return s;
}

int main() {
    char s[] = "a Mr John Smith   ";
    int true_length = 15;
    cout << "original: " << s << endl;
    cout << "URLify:   " << inPlaceUrlify(s, true_length) << endl;
}
