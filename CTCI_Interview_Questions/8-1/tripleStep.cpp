/**
 * CTCI 8-1: Triple Step: A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3 steps at a time. Implement a method to count how many possible ways the child can run up the stairs.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

// time: O(3^n)
// space: O(3^n)
int tripleStep(int steps) {
   if (steps < 0) return 0;
   if (steps == 0) return 1;
   return tripleStep(steps-1) + tripleStep(steps-2) + tripleStep(steps-3);
}

// make slightly less calls, still have lots of overlap
/*int altTripleStep(int steps) {
   if (steps == 0) return 1;
   int total = 0;
   if (steps-3 >= 0)
      total += altTripleStep(steps-3);
   if (steps-2 >= 0)
      total += altTripleStep(steps-2);
   if (steps-1 >= 0)
      total += altTripleStep(steps-1);
   return total;
}*/

// introduce memoization
// time: O(?)
// space: O(n)
int memoTripleStepHelper(int steps, int memo[]) {
   if (steps < 0) return 0;
   if (steps == 0) return 1;

   if (memo[steps] == 0) {
      memo[steps] = memoTripleStepHelper(steps-3, memo) + memoTripleStepHelper(steps-2, memo) + memoTripleStepHelper(steps-1, memo);
   }
   return memo[steps];
}
int memoTripleStep(int steps) {
   const int size = steps + 1;
   int memo[size];
   memset(&memo, 0, size*sizeof(int));
   return memoTripleStepHelper(steps, memo); 
}

// iterative solution with memoization


int main() {
   int steps = 37; // Note that at 37, integer will overflow! we can delay this, but not solve by using a larger data type
   cout << steps << " stairs can be walked in " << memoTripleStep(steps) << " different ways" << endl;
}