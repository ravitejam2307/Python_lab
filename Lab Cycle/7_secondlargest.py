
list1 = []
num = int(input("Enter number of elements in list: "))
 
for i in range(1, num + 1):
    ele = int(input("Enter elements: "))
    list1.append(ele)
 
# print second maximum element using sorted() method
print("Second largest element is:", sorted(list1)[-2])
