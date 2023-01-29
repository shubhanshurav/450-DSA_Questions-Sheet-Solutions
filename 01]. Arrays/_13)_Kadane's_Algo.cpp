class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int a[], int n){ 
        
        int currentSum = 0;
        int maxSum = INT_MIN;
        
        for(int i=0; i<n; i++){
            
            currentSum = currentSum+a[i];
            maxSum = max(currentSum,maxSum);
            
            if(currentSum < 0){
                currentSum = 0;
            }
       }
        
        return maxSum;
        
    }
};
