#include<bits/stdc++.h>
using namespace std;

int Print(int ind,int s,int sum,int arr[],int n){
	if(s>sum) return 0;

	if(ind==n){
		if(sum==s) return 1;

		else 
			return 0;
		
	}

	s+= arr[ind];
	int l= Print(ind+1,s,sum,arr,n);

	s -= arr[ind];
	int r= Print(ind+1,s,sum,arr,n);

	return l+r;
}

int main(){
	int arr[]={1,2,1,2,3};
	int n=5;
	int sum=2;
	cout<<Print(0,0,sum,arr,n);
	return 0;
}