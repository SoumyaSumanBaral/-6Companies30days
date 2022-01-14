class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int max_length=0;
        int i=0;
        int n=arr.size();
        while(i<n){
            int x=i,y=i+1;
            while((x<n and y<n)and(arr[x]<arr[y])){
                x++;
                y++;
            }
            if(x!=i){
                int top=x;
                while((x<n and y<n)and(arr[x]>arr[y])){
                    x++;
                    y++;
                }
                if(x!=top)
                    max_length=max(max_length,y-i);
            }
            i++;
        }
        return max_length;
    }
};
