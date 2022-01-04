#Function should return complete string
def encode(arr):
    res=""
    count=1
    temp=arr[0]
    for i in range(1,len(arr)):
        if arr[i]==temp:
            count+=1
        else:
            res = res + temp + str(count)
            temp=arr[i]
            count=1
    return (res+temp+str(count))

#{ 
#  Driver Code Starts
#Your code will prepended here
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        arr=input().strip()
        print (encode(arr))
# } Driver Code Ends
