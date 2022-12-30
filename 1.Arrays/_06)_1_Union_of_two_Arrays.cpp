class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
     //-------------------- Naive Approach - 01 -------------------------->
        int s = n+m;
        int count = 0;
        int c[s];
        //insert the all elements of array a[]
        for(int i=0; i<n; i++){
            c[i] = a[i];
        }
        
        //insert the all element of array b[]
        for(int i=0; i<m; i++){
            c[n+i] = b[i];
        }
        
        //sort the array c[]
        sort(c, c+s);
        
        //remove the duplicate element from array and after that count them
        for(int i=0; i<s; i++){
            if(c[i] != c[i-1]){
                count++;
            }
        }
        return count;
    }
};


/*-------------------Approach -02 --------------------->


class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {

            set<int>s;

            for(int i=0; i<n;i++)

            s.insert(a[i]);

            for(int i=0; i<m;i++)

            s.insert(b[i]);

            return s.size();
    }
};

*/
