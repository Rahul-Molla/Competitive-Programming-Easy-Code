/* You are given a 3-digit number n, Find whether it is an Armstrong number or not.
An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself.
371 is an Armstrong number since 33 + 73 + 13 = 371. 

Note: Return true if it is an Armstrong number else return false.

Examples
Input: n = 153
Output: true
Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. 

Input: n = 372
Output: false
Explanation: 372 is not an Armstrong number since 33 + 73 + 23 = 378. 

Input: n = 100
Output: false
Explanation: 100 is not an Armstrong number since 13 + 03 + 03 = 1. 

Constraints:
100 ≤ n <1000 */

//Programming Start
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0;  
        int temp = n;

        while (temp) {
            int last_dig = temp % 10; 
            sum = sum + (last_dig * last_dig * last_dig); 
            temp /= 10;
        }

        if (sum == n) {
            return true;
        } else {
            return false;
        }
    }
};
