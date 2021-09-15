#Array Rotation

arr = []

n = int(input("Enter number of elements : "))
 
for i in range(0, n):
    ele = int(input())
 
    arr.append(ele) 

print("Given Array Elements are")
for i in range(0, len(arr)):    
    print(arr[i],end=" ") 
         
#Array Left Rotation
n = int(input("Enter n value for Left Rotation:"))
for i in range(0, n):       
    first = arr[0];    
        
    for j in range(0, len(arr)-1):
            
        arr[j] = arr[j+1];    
            
        
    arr[len(arr)-1] = first;
print("Array after left rotation: ");    
for i in range(0, len(arr)):    
    print(arr[i],end=" ")
    
#Array Right Rotation
n = int(input("\nEnter n value for Right Rotation:"))
for i in range(0, n):       
    last = arr[len(arr)-1];    
        
    for j in range(len(arr)-1,-1,-1):
            
        arr[j] = arr[j-1];    
            
    arr[0] = last;         
print("Array after Right rotation: ");    
for i in range(0,len(arr)):    
    print(arr[i],end=" ")
