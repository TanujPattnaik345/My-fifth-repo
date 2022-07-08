#include<bits/stdc++.h>
using namespace std;
int main(){
	int c;

	cin>>c;

	if((c | -2147483648) == c){
		cout<<"yes";
	}

	else{
		cout<<"No";
	}
	return 0;
}