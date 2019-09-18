/**
 * Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
 * Note: you MUST specify what kind of strings. ASCII? Unicode?
 * This code is for ASCII strings
 */
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <unordered_set>
//#include <cmath>
using namespace std;

bool bruteForceIsUnique(string s) {
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (i != j && s[1] == s[j])
                return false;
        }
    }
    return true;
}

bool isUnique(string s) {
    unordered_set<char> hash_table;
    for (char c : s) {
        if (hash_table.find(c) == hash_table.end()) {
            hash_table.insert(c);
        } else {
            return false;
        }
    }
    return true;
}

bool altIsUnique(string s) {
    if (s.size() > 128)
        return false;
        
    bool char_set[128] = {0}; // must zero-init
    for (char c : s) {
        if (char_set[c])
            return false;
        char_set[c] = true;
    }
    return true;
}

// for ASCII (128 chars)
bool checkBit(char c, unsigned char bit_vector[]) {
    int vec_index = c / 8; // could use math.floor(c/8.0), but int truncation does the job
    unsigned char byte = bit_vector[vec_index];
    int byte_index = c % 8;
    //printf("char \'%c/%d\', byte at vec[%d], bit at position %d\n\r", c, c, vec_index, byte_index);
    if (byte & (1 << byte_index))
        return true;
    return false;
}

// for ASCII (128 chars)
void setBit(char c, unsigned char bit_vector[]) {
    int vec_index = c / 8;
    bit_vector[vec_index] |= (1 << (c % 8));
}

bool optimalIsUnique(string s) {
    if (s.size() > 128)
        return false;

    unsigned char bit_vector[128] = {0};
    for (char c : s) {
        if (checkBit(c, bit_vector))
            return false;
        setBit(c, bit_vector);
    }
    return true;
}

int main() {
    if (optimalIsUnique("?@ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"))
        cout << "unique!" << endl;
    else
        cout << "not unique..." << endl;
}
