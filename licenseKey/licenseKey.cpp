// you can use includes, for example:
// #include <algorithm>
#include <ctype.h>
#include <iostream>
#include <string>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

string solution(string S, int K) {
    string result = "";
    int count = 0;
    for (int i = S.length()-1; i >= 0; i--) {
        char curr = S.at(i);
        cout << "c: " << curr << endl;
        if (curr == '-') {
            continue;
        } else if (count == K) {
            result = "-" + result;
            count = 0;
            i++;
            continue;
        } else {
            if (isalpha(curr)) {
                result.insert(result.begin(), toupper(curr));
            } else {
                result.insert(result.begin(), curr);
            }
        }
        count++;
        cout << "result: " << result << endl;
    }
    cout << "str: " << result << endl;
    return result;
}

string solutionInPlace(string S, int K) {
    string::iterator iter;
    int count = 0;
    for (iter = S.end()-1; iter != S.begin(); iter--) {
        char curr = *iter;
        cout << curr;
        /*if (curr == '-') {
            S.erase(S.begin());
            iter--;
        }*/
        count++;
    }
    return S;
}

int main() {
   cout << solutionInPlace("2-4A0r7-4k", 4);
}