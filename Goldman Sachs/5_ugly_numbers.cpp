// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	ull getNthUglyNo(int n) {
	    ull ugly[n];
	    ull count[3]={0,0,0};
	    ull num[3]={2,3,5};
	    ull next;
	    
	    ugly[0]=1;
	    for(int i=1;i<n;i++){
	        next=min(num[0],min(num[1],num[2]));
	        ugly[i]=next;
	        
	        if(next==num[0]){
	            count[0]++;
	            num[0]=ugly[count[0]]*2;
	        }
	        if(next==num[1]){
	            count[1]++;
	            num[1]=ugly[count[1]]*3;
	        }
	        if(next==num[2]){
	            count[2]++;
	            num[2]=ugly[count[2]]*5;
	        }
	    }
	    return next;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
