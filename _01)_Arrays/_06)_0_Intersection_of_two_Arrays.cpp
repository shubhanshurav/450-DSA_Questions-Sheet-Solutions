//<----> Leetcode Solution <------------->

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> a,b;
        
        for(int i : nums1) a.insert(i);
        for(int i : nums2) b.insert(i);
        
        auto i = a.begin(), j = b.begin();
        
        vector<int> ans;
        
        while(i != a.end() && j != b.end()){              
            
            if(*i < *j) ++i;                
            else if(*i > *j) ++j;
            else{
                ans.push_back(*i);
                ++i;
                ++j;
            }  
        }
        
      return ans;
        
    }
     
};


//<-----------> GFG Question Solutions <-------------->
 
class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        int count = 0,i=0,j=0;
        
        sort(a,a+n);  //sort the array a[]
        sort(b,b+m);  //sort the array b[]
        
        // i will go upto size n & j will go upto size m
        while(i<n && j<m){
            // this condition will handle the duplicate from the array
            if(i>0 && a[i] == a[i-1]){
              i++;
              continue;
            } 
            
            //if array a[] element is smaller than array b[] than we will increment the i++
            if(a[i]<b[j]){
                i++;
            }else if(a[i]>b[j]){   //if array b[] element is smaller than array a[] than we will increment the j++
                j++;
            }else{                 //if array a[] element is equal to the array b[] than count ++ & we will increment the i++,j++
                count++;
                i++;
                j++;
            }
        }
        
        return count;
    }
};


/*

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        int count = 0;
        for(int i=0; i<n;i++){
           if(i>0 && a[i] == a[i-1]) continue;
            
           for(int j=0; j<m; j++){
              if(a[i] == b[j]){
                  count++;
                  break;
              } 
           }
        }    
        return count;
    }
};

*/
