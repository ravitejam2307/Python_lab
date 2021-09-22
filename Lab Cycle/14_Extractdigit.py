from itertools import chain
List = [(25, 13), (13, 19), (11, 10), (99, 12)]
# list
print("Orignal list : ", List)
temp = map(lambda a: str(a), chain.from_iterable(List))
#  set and add
result = set()
for i in temp:
   for digit in i:
      result.add(digit)
# Result
print("set of digits: ",result)
