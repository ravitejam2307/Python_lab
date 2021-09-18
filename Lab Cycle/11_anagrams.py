strings =["Audi", "Shift", "BMW", "Honda"]
anagrams = {}
for string in strings:
    key = "".join(sorted(string))
    if string in anagrams.keys():
        anagrams[key].append(string)
    else:
            anagrams[key]=[]
            anagrams[key].append(string)
            result = ""
            for key, value in anagrams.items():
                result += "".join(value)+ " "
                print(result)
