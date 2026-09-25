takeList = ['apples', 'bananas', 'tofu', 'cats']

def func(takenList):
   times = len(takenList)
   i = 0
   while i < times:
       if i == times - 1:
           print(takenList[i]+'.')
           break
       print(takenList[i] +", ", end="")
       i+=1
       if i == times -1 :
          print("and ", end="")
func(takeList)












# Write a function that takes a list value as an argument and returns
# a string with all the items separated by a comma and a space, with and
# inserted before the last item. For example, passing the previous spam list to
# the function would return 'apples, bananas, tofu, and cats'. But your func-
# tion should be able to work with any list value passed to it.
