#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        bool ans  = false;
        for(int i = n-2; i >= 0; i--){
            int x = s[i];
            int mi = 1000;
            int ind;
            for(int j = i+1; j < n; j++){
                if(s[j] > x){
                    if(mi > s[j]){
                        mi = s[j];
                        ind = j;
                    }
                }
            }
            if(mi == 1000)continue;
            else {
                char c = s[i];
                s[i] = mi;
                s[ind] = c;
                sort(s.begin()+i+1,s.end());
                ans = true;
                break;
            }
        }
        if(ans)cout << s << endl;
        else cout << "no answer" << endl;
    }
    return 0;
}