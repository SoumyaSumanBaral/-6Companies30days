// { Driver Code Stvts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    int n=str.length();
            vector<int>v(n+1,0);
            int mod = 1e9 + 7;
            v[0]=1;
            v[1]=1;
            if (str[0]=='0')
                    return 0;
            for(int i=2;i<=n;i++){
                if(str[i-1]>'0')
                    v[i] = v[i-1];
                int a=(str[i-2]-'0')*10 + (str[i-1]-'0');
                if(a<27 and a>9)
                    v[i] = (v[i]+v[i-2])%mod;
            }
            return v[n];
		}
};
// { Driver Code Stvts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
