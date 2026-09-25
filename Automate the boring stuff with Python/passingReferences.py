def eggs(someParameter):
    someParameter.append('hello')
    return None # this line doesn't really matter, I've added it myself 

spam= [0, 1,2]
eggs(spam)
print(spam)
