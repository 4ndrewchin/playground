#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
   string line = "0100101,1011";

   // get binary numbers
   string a = "";
   string b = "";
   bool commaFound = false;
   for (int i = 0; i < line.size(); i++) {
      if (line.at(i) == ',') {
         commaFound = true;
         continue;
      }
      
      if (!commaFound) {
         a += line.at(i);
      } else {
         b += line.at(i);
      }
   }

   // pad to same length
   if (a.size() > b.size()) {
      int diff = a.size()-b.size();
      for (int i = 0; i < diff; i++) {
         b = '0' + b;
      }
   } else {
      int diff = b.size()-a.size();
      for (int i = 0; i < diff; i++) {
         a = '0' + a;
      }
   }

   cout << "a: " << a << endl;
   cout << "b: " << b << endl;
   
   // calculate sum
   int carry = 0;
   string result = "";
   for (int i = a.size()-1; i >= 0; i--) {
      int aInt = 0, bInt = 0;
      if (a.at(i) == '1')
         aInt = 1;
      if (b.at(i) == '1')
         bInt = 1;
      int sum = aInt + bInt + carry;
      switch (sum) {
         case 0:
            result = '0' + result;
            carry = 0;
            break;
         case 1:
            result = '1' + result;
            carry = 0;
            break;
         case 2:
            result = '0' + result;
            carry = 1;
            break;
         case 3:
            result = '1' + result;
            carry = 1;
            break;
      }
   }

   // trim leading zeros
   string trimmed = "";
   bool found1 = false;
   for (int i = 0; i < result.size(); i++) {
      if (result.at(i) == '1')
         found1 = true;
      if (found1)
         trimmed += result.at(i);
   }
   cout << trimmed << endl;
}