my_str = 'python is high level language. python is object oriented. python is easy and simple'
print("The string is : ")
print(my_str)
replace_dict = {'python' : 'It' }
my_list = my_str.split(' ')
my_result = ' '.join([replace_dict.get(val) if val in replace_dict.keys() and my_list.index(val) != idx else val for idx, val in enumerate(my_list)])
print("The string after replacing with values is : ")
print(my_result)
