def Anagram(d1): 
      
     
    dict = {} 
  
     
    for val in d1: 
          
        
        key = ''.join(sorted(val)) 
          
        if key in dict.keys(): 
            dict[key].append(val) 
        else: 
            dict[key] = [] 
            dict[key].append(val) 
  
     
    result = "" 
    for key,value in dict.items(): 
        result = result + ' '.join(value) + ' '
  
    return result 
  
d1=['act', 'cat', 'silent','listen']
print("Words: ",d1)
print("Anagram: ",Anagram(d1))
