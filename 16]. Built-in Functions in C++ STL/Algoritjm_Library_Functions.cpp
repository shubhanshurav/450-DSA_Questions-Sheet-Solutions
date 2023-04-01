#include <iostream>
#include <algorithm> //for using built-in functions in c++ STL
#include <numeric> //for using accumulate function
#include <vector>   // for vectors
using namespace std;

int main() {
  
  int arr[] = {6,7,8,3,2,8,15,8};  //array
  //for Calculating array size
  int n = sizeof(arr)/sizeof(int);
  
  vector<int> v = {3,1,5,9,8,2,9}; //vector
  //for calculating vector size
  int s = v.size();

  //use for sort the vector in ascending order
  sort(v.begin(),v.end());
  //for printing vector in ascending order
  cout << "Sorted Vector in ascending order : ";
  for(int i=0;i<s;i++){
    cout << v[i] <<" ";
  }

  cout<<endl;
  //use for sort the vector in descending order
  sort(v.begin(),v.end(),greater<int>());
  //for printing vector in descending order
  cout << "Sorted Vector in descending order : ";
  for(int i=0;i<s;i++){
    cout << v[i] <<" ";
  }

  cout<<endl<<endl;
  //use for sort the array in ascending order
  sort(arr,arr+n);
  //for printing array in ascending order
  cout << "Sorted array in ascending order : ";
  for(int i=0;i<n;i++){
    cout << arr[i] <<" ";
  }

  cout<<endl;
  //use for sort the array in descending order
  sort(arr,arr+n,greater<int>());
  //for printing array in descending order
  cout << "Sorted Array in descending order : ";
  for(int i=0;i<n;i++){
    cout<< arr[i] <<" ";
  }  

  cout<<endl<<endl;
   //use for reverse the vector in ascending order
  reverse(v.begin(),v.end());
  //for printing vector in ascending order
  cout << "Reverse Vector in ascending order : ";
  for(int i=0; i<s; i++){
    cout << v[i] <<" ";
  }

  cout<<endl;
  //use for reverse the array in ascending order
  reverse(arr,arr+n);
  //for printing array in ascending order
  cout << "Reverse array in ascending order : ";
  for(int i=0;i<n;i++){
    cout << arr[i] <<" ";
  }

  cout << endl<<endl;
  //gives the maximum element from the vector
  cout<<"Maximum Element in vector : " << *max_element(v.begin(), v.end())<<endl;
  //gives the minimum element from the vector
  cout<<"Minimum Element in vector : " << *min_element(v.begin(), v.end())<<endl;
  
  cout << endl;
  //gives the maximum element from the array
  cout<<"Maximum Element in array : " << *max_element(arr, arr+n)<<endl;
  //gives the minimum element from the array
  cout<<"Minimum Element in array : " << *min_element(arr, arr+n)<<endl;

  cout << endl;
  //Calculate the sum of vector
  cout<<"Sum of array : " << accumulate(v.begin(), v.end(), 0)<<endl;
  //Calculate the sum of array
  cout<<"Sum of vector : " << accumulate(arr, arr+n, 0)<<endl;

  cout<<endl;
  //For calculating the occurrence of a no. in Vector
  cout<<"Occurrence of 9 in vector : " << count(v.begin(), v.end(), 9) << endl; 
  //For calculating the occurrence of a no. in Array
  cout<<"Occurrence of 8 in array : " << count(arr, arr+n, 8) << endl;

  cout<<endl;
  find(v.begin(), v.end(), 9) != v.end() ? cout<<"Element found" <<endl : cout << "Element not found" <<endl; 
  find(arr, arr+n, 8) != arr+n ? cout<<"Element found" << endl : cout << "Element not found" << endl;   

  cout<<endl;
  auto lw = lower_bound(v.begin(), v.end(), 9); 
  cout <<"Lower bound is at position in vector : " <<  lw - v.begin();
  auto uw = upper_bound(v.begin(), v.end(), 9); 
  cout <<"Upper bound is at position int vector : " <<  uw - v.begin() << endl;

  auto lwArr = lower_bound(arr, arr+n, 8);
  cout <<"Lower bound is at position in array : " << lwArr - arr << endl;
  auto uwArr = upper_bound(arr, arr+n, 8);
  cout <<"Upper bound is at position in array : " << uwArr - arr << endl;
  
  return 0;
  
}