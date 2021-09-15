def splitarr(arr, n, k): 
    for i in range(0, k): 
        x = arr[0]
        for j in range(0, n-1):
            arr[j] = arr[j + 1]
          
        arr[n-1] = x
#main
arr=[]
n = int(input("Enter n value:"))

for i in range(0, n):
    ele = int(input())
    arr.append(ele)
    
n=len(arr)

position=int(input("Enter position value:"))

splitarr(arr,n,position)
for i in range(0,n):
    print(arr[i],end = " ")
