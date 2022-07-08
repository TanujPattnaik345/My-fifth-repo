#include<bits/stdc++.h>
using namespace std;

	void Print(int ind,vector<int> &vec,int arr[], int n){

		if(ind==n){
			for(auto it: vec){
				cout<<it<<" ";
			}
			cout<<endl;

			return;
		}
		vec.push_back(arr[ind]);
		Print(ind+1,vec,arr,n);

		vec.pop_back();
		Print(ind+1,vec,arr,n);

	}

int main(){
	int arr[]={3,1,2};

	int n=3;
	vector<int> vec;

     Print(0,vec,arr,n); 
}