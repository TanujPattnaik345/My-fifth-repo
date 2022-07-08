#include<bits/stdc++.h>
using namespace std;

	bool func_pal(int i, string &s){
		if(i>=s.size()/2) 
			return true;

		if(s[i]!=s[s.size()-i-1])
			return false;

		func_pal(i+1,s);
	}

int main(){
	string s= "madamma";

	if( func_pal(0,s))

		cout<<"True";

		else
			cout<<"False";

		return 0;

}