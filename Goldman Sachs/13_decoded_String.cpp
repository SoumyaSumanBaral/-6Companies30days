// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        stack <char> ch;
        int i = 0;
        while(i<s.size()){
            if(s[i] == ']'){
                string res = "";
                while(ch.top()!='['){
                    res = ch.top() + res;
                    ch.pop();   }
                ch.pop();
                int n = 0;
                int x = 1;
                while(!ch.empty() && isdigit(ch.top())){
                    n = n + (ch.top()-'0')*x;
                    x*=10;
                    ch.pop();   }
                for(int j = 1; j <= n; j++)
                    for(int x = 0; x < res.size();x++)
                        ch.push(res[x]);
            }
            else
                ch.push(s[i]);
            i++;
        }
        string ans ="";
        while(!ch.empty()){
            ans = ch.top() + ans;
            ch.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
