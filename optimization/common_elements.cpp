/**
 * Sep 17, 2019
 * Practice optimizing an algorithm for a simple problem
 * Problem: given two sorted arrays, find the number of elements in common. The arrays are the same length and each has all distinct elements
*/
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <unordered_set>
#include <iomanip>
using namespace std;

chrono::high_resolution_clock::time_point timer_start;

// input: ascended sorted vector and integer to find
// returns -1 on failure
// returns index of k on success
int binary_search(vector<int> vec, int k) {
   int low = 0;
   int high = vec.size() - 1;
   int mid = (high - low) / 2 + low;
   while (low <= high) {
      if (k == vec.at(mid)) {
         return mid;
      } else if (k > vec.at(mid)) {
         low = mid + 1;
      } else {
         high = mid - 1;
      }
      mid = (high - low) / 2 + low;
   }
   return -1;
}

// time: O(N^2)
// space: O(1)
void brute_force(vector<int> a, vector<int> b) {
   cout << setw(40) << "Brute Force Solution: ";
   timer_start = chrono::high_resolution_clock::now();
   for (int aVal : a) {
      for (int bVal : b) {
         if (aVal == bVal)
            cout << aVal << " ";
      }
   }
   chrono::duration<double> elapsed = chrono::high_resolution_clock::now() - timer_start;
   cout << ", Time: " << elapsed.count() << " sec" << endl;
}

// time: O(N log N)
// space: O(1)
void using_bsearch(vector<int> a, vector<int> b) {
   cout << setw(40) << "Improved Solution: ";
   timer_start = chrono::high_resolution_clock::now();
   for (int aVal : a) {
      if (binary_search(b, aVal) != -1)
         cout << aVal << " ";
   }
   chrono::duration<double> elapsed = chrono::high_resolution_clock::now() - timer_start;
   cout << ", Time: " << elapsed.count() << " sec" << endl;
}

// time: O(N)
// space: O(N)
void using_hashtable(vector<int> a, vector<int> b) {
   cout << setw(40) << "Optimal Runtime Not Space Solution: ";
   timer_start = chrono::high_resolution_clock::now();
   unordered_set<int> hash_table;
   for (int aVal : a) {
      hash_table.insert(aVal);
   }
   for (int bVal : b) {
      if (hash_table.find(bVal) != hash_table.end())
         cout << bVal << " ";
   }
   chrono::duration<double> elapsed = chrono::high_resolution_clock::now() - timer_start;
   cout << ", Time: " << elapsed.count() << " sec" << endl;
}

// time: O(N)
// space: O(1)
void optimal(vector<int> a, vector<int> b) {
   cout << setw(40) << "Optimal Solution:";
   timer_start = chrono::high_resolution_clock::now();
   int curr = 0;
   for (int i = 0; i < a.size() && curr < b.size(); i++) {
      while (a.at(i) >= b.at(curr)) {
         if (a.at(i) == b.at(curr)) {
            cout << a.at(i) << " ";
            curr++;
            continue;
         } else {
            curr++;
         }
      }
   }
   chrono::duration<double> elapsed = chrono::high_resolution_clock::now() - timer_start;
   cout << ", Time: " << elapsed.count() << " sec" << endl;
}

// Cracking the Coding Interview, "An Example of How to Use BCR" (Mercanti 73)
int main() {
   int arr_a[] = {13, 27, 35, 40, 49, 55, 59};
   int arr_b[] = {17, 35, 39, 40, 55, 58, 60};
   vector<int> a (arr_a, arr_a + sizeof(arr_a) / sizeof(int) );
   vector<int> b (arr_b, arr_b + sizeof(arr_b) / sizeof(int) );

   brute_force(a, b);
   using_bsearch(a, b);
   using_hashtable(a, b);
   optimal(a, b);
}