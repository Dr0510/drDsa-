// Missing number in array
// Brute Force sol : -
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        //fist sort array

        sort(array.begin(), array.end());
        int count = 1;
        for(int i = 0;i<n;i++){
            if(array[i] == count){
                count++;
            }
            else {
                return count;
            }
        }
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(1)
// ------------------------------------------------------

// little optimize sol :-
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {


        int sum = 0;
        for(int i = 0;i < n-1;i++){
            sum = array[i] + sum;
        }
        int valf = (n * (n+1))/2;
        int ans = valf - sum;

      return ans;  
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
