#include<bits/stdc++.h>
using namespace std;

	void Print_sum(int ind,int s,int arr[],vector<int> &vec,int sum,int n){

			
		if(ind==n)
		{
			if(sum==s){
				for(auto it:vec) cout<<it<<" ";
					cout<<endl;	
			}

			return ;
		}
			vec.push_back(arr[ind]);
			s += arr[ind];
		Print_sum(ind+1,s,arr,vec,sum,n);

		s -= arr[ind];

		vec.pop_back();
		
		Print_sum(ind+1,s,arr,vec,sum,n);
	}


int main(){

	int arr[]={1,2,1};

	vector<int> vec;

	int n=3;
		int sum=2;
	Print_sum(0,0,arr,vec,sum,n);
}