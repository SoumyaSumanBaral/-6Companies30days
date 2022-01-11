#User function Template for python3

class Solution:
    def findTwoElement( self,arr, n): 
        ans=[0,0]
        asum=0
        nsum=0
        for i in range(n):
            a=abs(arr[i])-1
            if(arr[a]<0):
                ans[0]=a+1
            arr[a]=-arr[a]
            asum+=(a+1)
            nsum+=(i+1)
        ans[1]=nsum-asum+ans[0]
        return ans
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc=tc-1
# } Driver Code Ends
