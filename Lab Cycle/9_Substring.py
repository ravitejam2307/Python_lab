def check(str1, sstr): 
   if (str1.find(sstr) == -1): 
      print(sstr,"IS NOT PRESENT IN THE GIVEN STRING") 
   else: 
      print(sstr,"IS PRESENT IN THE GIVEN STRING") 
str1 = input("Enter the string ::>")
sstr=input("Enter Substring ::>")
check(str1, sstr)
