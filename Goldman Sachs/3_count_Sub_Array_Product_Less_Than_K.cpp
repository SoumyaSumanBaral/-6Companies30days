// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0,ans=0;
        long long res=1;
        for(int j=0;j<n;j++){
            res=res*a[j];
           
            if(res<k)
                ans+=j-i+1;
            else{
                while(i<=j && res>=k){
                    res/=a[i];
                    i++;}
                ans+=j-i+1;
            }
            
        }
        return ans;    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
