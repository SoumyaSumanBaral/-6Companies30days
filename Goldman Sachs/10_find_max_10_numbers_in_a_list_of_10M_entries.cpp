#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int>> q;
    int x,n; cin>>n;
    for(int i=0;i<n;i++){
    	cin>>x;
    	q.push(x);
        if(q.size()>10)
        	q.pop();
	}
	
    vector<int> res;
    while(!q.empty()){
    	res.push_back(q.top());
        q.pop();
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
