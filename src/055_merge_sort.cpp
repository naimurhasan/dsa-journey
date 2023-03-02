#include <iostream>
#include <iso646.h>
#include <vector>

using namespace std;

void merge_arr(vector<int> &v, int start, int end){
  int mid = (start+end)/2;
  vector<int> temp;

  int i = start;
  int j = mid+1;

  while(i<=mid and j<=end){
    if(v[i]<v[j]){
      temp.push_back(v[i]);
      i++;
    }else{
      temp.push_back(v[j]);
      j++;
    }
  }

  while(i<=mid){
    temp.push_back(v[i]);
    i++;
  }

  while(j<=end){
    temp.push_back(v[j]);
    j++;
  }

  for(i = start; i<=end; i++){
    v[i]=temp[i-start];
  }

}

void merge_sort(vector<int> &v, int start, int end){
  if(start>=end) return;

  int mid = (start+end)/2;

  merge_sort(v, start, mid);
  merge_sort(v, mid+1, end);

  merge_arr(v, start, end);
}

int main(){
  vector<int> v = {10, 8, 6, 4, 2, 1, 3, 5, 7, 9};
  int n = v.size();
  merge_sort(v, 0, n-1);

  cout << "Sorted arrays: " << endl;
  for(auto x : v){
    cout << x << " ";
  }
  cout << endl;
  return 0;
}