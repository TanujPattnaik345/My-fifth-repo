#include<bits/stdc++.h>
using namespace std;

int n=1;

void func_name(int num){
	if(n==num+1)
		return;

	cout<<"Tanuj"<<endl;

	n++;

	func_name(num);
}



int main(){
    
    int user;
    cin>>user;
	func_name(user);
	return 0;
}