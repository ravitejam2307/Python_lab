def splitarr(a,n,k):
    b = a[:k]
    return(a[k::]+b[::])
arr=[15,26,84,32,96]
n=len(arr)
position=3
arr=splitarr(arr,n,position)
for i in range(0,n):
    print(arr[i],end=' ')
