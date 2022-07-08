#include<bits/stdc++.h>
using namespace std;

void func_sort(vector<int> &arr,int l,int r){
	if(l>=r)
		return;

	swap(arr[l],arr[r]);

	func_sort(arr,l+1,r-1);
}

int main(){
 
   vector<int> arr{2,34,6,1,8,9};
  	
  	int n= arr.size();

  func_sort(arr,0,n-1);

  for(auto it:arr){
  	cout<<it<<" ";
  }

	return 0;
}