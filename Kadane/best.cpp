// Using Kadane’s Algorithm : 



// 1.    Kadane's Algorithm has two choices at every element :

// Add the current element to continue the current subarray.
// Start the new subarray, If the current element gives a higher value than the previous subarray sum.


// 2. It tracks the sum of the current subarray (currSum) and the highest sum found so far (maxSum).

// 3. Initialize currSum and maxSum to nums[0].

// 4. Iterate through the array, updating currSum to the maximum of:

// Starting a new subarray with nums[i], or
// Adding nums[i] to the current subarray.
// 5. Update maxSum with the larger of maxSum and currSum.

// 6. Return maxSum as the result.




#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;
class Solution {
public:
   // Function to find the maximum subarray sum
   int maxSubArray(vector<int>& nums) {
       int currSum = nums[0];   // Initialize the current subarray sum with the first element
       int maxSum = nums[0];    // Initialize the maximum subarray sum with the first element
      
       // Iterate through the array starting from the second element
       for (int i = 1; i < nums.size(); i++) {
           currSum = max(currSum + nums[i], nums[i]);  // Update current subarray sum: either extend or start fresh
           maxSum = max(maxSum, currSum);  // Update maxSum with the larger value between the current maxSum and currSum
       }
      
       return maxSum;  // Return the maximum subarray sum found
   }
};


int main() {
   // Test case: Define an array of integers
   vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  
   Solution solution;  // Create an instance of the Solution class
   int result = solution.maxSubArray(nums);  // Call the maxSubArray function to find the max sum
  
   // Output the result
   cout << "The maximum subarray sum is: " << result << endl;
  
   return 0;  // Return 0 to indicate successful execution
}


