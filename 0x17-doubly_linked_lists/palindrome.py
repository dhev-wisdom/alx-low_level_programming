#!/usr/bin/python3
def palindrome():
    pal = []
    for i in range(100,1000):
        for j in range(100,1000):
            res = j * i
            if res < 100000:
                continue
            res = str(res)

            if len(res) == 6:
                if res[0] == res[-1]:
                    if res[1] == res[-2]:
                        if res[2] == res[-3]:
                            pal.append(res)
    highest = 0
    for k in range(len(pal)):
        temp = pal[k]
        temp = int(temp)
        if highest < temp:
            highest = temp

    return highest
 
palindrome()
f = open("102-result", "w")
f.write(str(palindrome()))
f.close()
