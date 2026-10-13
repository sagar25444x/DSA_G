// https://dsa.apnacollege.in/kadanes-algorithm

// Using 2 Loops :



// 1. Initialize a variable max_sum to negative infinity.

// 2. Use an outer loop to pick the start index of the subarray.

// 3. Use an inner loop to pick the end index of current subarray and compute the sum of the current subarray.

// 4. Compare each subarray sum with max_sum and update if it’s larger.

// 5. Return max_sum after all iterations.




#include<bits/stdc++.h>  // Includes all standard libraries
using namespace std;
class Solution {
public:
   // Function to find the maximum subarray sum using brute force approach
   int maxSubArray(vector<int>& nums) {
       int n = nums.size();  // Get the size of the input array
       int max_sum = INT_MIN;    // Initialize the maximum sum to the smallest possible integer


       // Outer loop to set the starting index of subarrays
       for (int i = 0; i < n; i++) {
           int currSum = 0;  // Initialize current subarray sum


           // Inner loop to set the ending index and calculate sum of subarrays
           for (int j = i; j < n; j++) {
                // Add current element to the current subarray sum
               currSum += nums[j];    
               // Update the maximum sum if current sum is greater  
               max_sum= max(max_sum, currSum);        
           }
       }
       return max_sum;  // Return the maximum subarray sum found
   }
};


// Main function to test the maxSubArray function
int main() {
   vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Example input array
  
   Solution solution;  // Create an instance of the Solution class
   int result = solution.maxSubArray(nums);  // Call the maxSubArray method
  
   cout << "The maximum subarray sum is: " << result << endl;  // Output the result
   return 0;
}

