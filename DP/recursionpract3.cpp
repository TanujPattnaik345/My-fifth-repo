#include<bits/stdc++.h>
using namespace std;

int facto(int i,int fact){
	if(i<1)
	{
		//cout<<fact;
		return 1;
	}
      
      cout<<fact<<endl;
	return facto(i-1,fact*i);
}



int main(){
	int n;
	cin>>n;

   facto(n,1);
}