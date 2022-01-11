#User function Template for python3
class Solution:
    def printMinNumberForPattern(ob,s):
        l=[]
        l=s
        curr=1
        run=0
        res=""
        for i in l:
            if(i=="D"):
                curr+=1
            else:
                temp=curr
                while(curr>run):
                    res+=str(curr)
                    curr-=1
                curr=temp+1
                run=temp
        while(curr>run):
            res+=str(curr)
            curr-=1
        return res 
#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        S=str(input())

        ob = Solution()
        print(ob.printMinNumberForPattern(S))
# } Driver Code Ends
