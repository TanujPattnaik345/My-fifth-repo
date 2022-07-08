#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[]="1244253636";
	int rs=0;
	 for(int i=0;str[i]!=0;++i){

	 	rs= rs*10+str[i]-'0';
        }

	cout<<rs;
}