// Using Dynamic Programming :



// We want to know the maximum subarray sum ending at each index.

// At each step, we decide:

// Do we start a new subarray at this index?

// Or do we extend the previous subarray?

// We store the result in a dp array where dp[i] = maximum sum ending at i.



// 1. Define DP state:

// dp[i] = max subarray sum ending at index i
// 2. Base Case:

// dp[0] = nums[0]
// maxSum = dp[0]
// 3. Transition/Recurrence:

//      For each i from 1 to n - 1:

// dp[i] = max(nums[i], dp[i - 1] + nums[i])
// This decides whether to start fresh or extend
// 4. Track maximum:

// Keep updating maxSum = max(maxSum, dp[i])
// 5. Return Result:

// Final answer is maxSum



#include<bits/stdc++.h>  // Includes all standard C++ headers
using namespace std;
class Solution {
public:
   // Function to find the maximum subarray sum using DP
   int maxSubArray(vector<int>& nums) {
       int n = nums.size();
       vector<int> dp(n);  // dp[i] stores the maximum subarray sum ending at index i
       dp[0] = nums[0];  // Base case: max subarray ending at index 0 is nums[0]
       int maxSum = nums[0];  // Initialize maxSum with the first element


       // Loop through the array starting from index 1
       for (int i = 1; i < n; i++) {
           // Either start a new subarray at index i or extend the previous one
           dp[i] = max(nums[i], nums[i] + dp[i - 1]);
           // Update maxSum if the current subarray sum is greater
           maxSum = max(maxSum, dp[i]);
       }
       return maxSum;  // Return the maximum subarray sum found
   }
};


// Main function to test the solution
int main() {
   vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Example input


   Solution sol;
   int result = sol.maxSubArray(nums);  // Call the function


   cout << "The maximum subarray sum is: " << result << endl;  // Expected output: 6
   return 0;
}


