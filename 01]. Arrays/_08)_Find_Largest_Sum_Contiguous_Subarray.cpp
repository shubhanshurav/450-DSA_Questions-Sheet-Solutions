class Solution{
    public:

 // this Question - also known as Kadane's Algorithm ---->  Very Important

    long long maxSubarraySum(int arr[], int n){ 
        
        int currentSum = 0;
        int maxSum = INT_MIN;
        
        for(int i=0; i<n; i++){
            
            currentSum = currentSum+arr[i];

            maxSum = max(currentSum,maxSum);
            
            if(currentSum < 0){
                currentSum = 0;
            }
       }
        
        return maxSum;
        
    }
};
