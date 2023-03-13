#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int  uint64;
#define int long long
#define nl endl

/*
procedure of insertion sort(a list)
n = size of list
for i = 1; i<n; do
  j = i
  while j>0 && arr[j-1]>arr[j]
    swap(arr[j-1], arr[j])
    j--
*/

void insertionSort(vector<int> &arr){
  int size = arr.size();
  for(int i = 1; i<size; i++){
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
      swap(arr[j-1], arr[j]);
      j--;
    }
  }
}


int32_t main(){
    vector<int> arr = {5, 6, 7, 1, 3, 4, 2};
    for(int i : arr){
      cout << i << " ";
    }
    cout << nl;
    
    insertionSort(arr);

    cout << "After sorted" << nl;
    for(int i : arr){
      cout << i << " ";
    }
    cout << nl;

    return 0;
}