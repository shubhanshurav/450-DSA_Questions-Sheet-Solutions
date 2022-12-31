//<----------------> GFG Question Solution <--------------->

//User function Template for C++
string reverseWord(string str){

  int n = str.size();
  
  for(int i=n; i>=0; i--){
      cout<<str[i];
  }
}




//<----------------> Leetcode Question Solution <--------------->

class Solution {
public:
    void reverseString(vector<char>& s) {
       reverse(s.begin(), s.end());  
    }
};
