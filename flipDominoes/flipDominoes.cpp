// you can use includes, for example:
// #include <algorithm>
#include <vector>
#include <string>
#include <stdlib.h>
#include <stdio.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

// time: O(N)
// space: O(1)
int my_solution(std::vector<int> &A, std::vector<int> &B) {
    int first = A[0];
    int sec = B[0];
    bool lookForFirst = false;
    bool lookForSec = false;
    
    int rotations = 0;
    
    for (unsigned int i = 1; i < A.size(); i++) {
        // abort conditions
        if ((A[i] != first && A[i] != sec && B[i] != first && B[i] != sec) || (lookForFirst && A[i] != first && B[i] != first) || (lookForSec && A[i] != sec && B[i] != sec)){
            return -1;
        }
        
        // if we know we are only looking for either first or sec in particular
        if (lookForFirst) {
            // 3 scenarios left:
            // 1. top tile matches first
                // do nothing
            // 2. bottom tile matches first
            if (B[i] == first && A[i] != first) {
                rotations++;
            }
            // 3. both tiles match first
                // do nothing
            continue;
        } else if (lookForSec) {
            // 3 scenarios left:
            // 1. top tile matches sec
            if (A[i] == sec && B[i] != sec) {
                rotations++;
            }
            // 2. bottom tile matches sec
            // 3. both tiles match sec
                // do nothing
            continue;
        }
        
        // otherwise, six possible cases:
        // 1. only top tile matches first
        if (A[i] == first && B[i] != first && B[i] != sec) {
            lookForFirst = true;
        }
        // 2. only bottom tile matches first
        else if (B[i] == first && A[i] != first && A[i] != sec) {
            rotations++;
            lookForFirst = true;
        }
        // 3. only top tile matches sec
        else if (A[i] == sec && B[i] != first && B[i] != sec) {
            rotations++;
            lookForSec = true;
        }
        // 4. only bottom tile matches sec
        else if (B[i] == sec && A[i] != first && A[i] != sec) {
            lookForSec = true;
        }
        // 5. bottom matches first, top matches sec
        else if (B[i] == first && A[i] == sec) {
            rotations++;
        }
        // 6. top matches first, bottom matches sec
            // do nothing
    }
    return std::min(rotations, (int)A.size()-rotations);
}

int main(int argc, char** argv) {
    std::vector<int> a = {5,7,3,52,8,4,6,9,10,3};
    std::vector<int> b = {5,7,3,52,8,4,6,9,10,3};
    
    for (auto e : a)
        printf("%d ", e);
    printf("\n");
    for (auto e: b)
        printf("%d ", e);
    printf("\n");

    printf("flips: %d\n", my_solution(a, b));
}
