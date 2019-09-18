/**
 * CTCI 1-2: Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.
 * Constraints: case-sensitive, whitespace is significant
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// solution for ASCII
// time: O(N) + O(character set)
// space: O(character set)
bool isPermutation(string a, string b) {
    if (a.size() != b.size())
        return false;
    
    int char_set[128] = {0};
    for (char c : a) {
        char_set[c]++;
    }

    for (char c : b) {
        char_set[c]--;
    }

    for (int i = 0; i < 128; i++) {
        if (char_set[i] != 0)
            return false;
    }
    return true;
}

// time/space complexity same as previous, but actually slightly faster
bool isPermutationVariant(string a, string b) {
    if (a.size() != b.size())
        return false;
    
    int char_set[128] = {0};
    for (char c : a) {
        char_set[c]++;
    }

    for (char c : b) {
        char_set[c]--;
        if (char_set[c] < 0)
            return false;
    }
    return true;
}

// time: O(N log N)
// space: O(1)
bool altIsPermutation(string a, string b) {
    if (a.size() != b.size())
        return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    string a = "digdity!";
    string b = "gidityg!";
    if (altIsPermutation(a, b))
        cout << "is permutation!" << endl;
    else
        cout << "not permutations..." << endl;
}
