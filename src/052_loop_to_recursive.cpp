#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;

void radixSort(VI &nums){
  int largest = *(max_element(nums.begin(), nums.end())); // 623
  int length = to_string(largest).size(); // 3
  int radixStorage[nums.size()][10] = {0};
  for(int l = 0; l<length; l++){
    int divNum = pow(10, l);
    
    /// phase1
    for(int i = 0; i<nums.size(); i++){
      int lastDigit = (nums[i]/divNum)%10;
      int x = nums[i];
      radixStorage[i][lastDigit] = x;      
    }

    
  }
  cout << " --- " << endl;
  
  cout << " --- " << endl;
}
int main(){
    VI nums = {253, 363, 223, 524, 623, 102};
    radixSort(nums);
    for(auto i : nums)
      cout << i << " ";
    return 0;
}