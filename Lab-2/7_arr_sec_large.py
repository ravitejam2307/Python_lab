def second_largest(list):
    maximum= max(list[0],list[1])
    second_max= min(list[0],list[1])
    n=len(list)
    for i in range(2, n):
        if list[i]>maximum:
            second_max=maximum
            maximum=list[i]
        else:
            if list[i]>second_max:
                second_max=list[i]
            
    return second_max


#input of list
li=[]
n=int(input("Enter size of list "))
for i in range(0,n):
    e=int(input("Enter elements of list "))
    li.append(e)

#smallest
print("second largest in ",li,"is",end=" ")
print(second_largest(li))        
