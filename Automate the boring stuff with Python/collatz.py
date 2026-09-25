def collatz(number):
   if (number % 2 ==0):
      number = number // 2
      return number
   else:
       number = 3 * number + 1
       return number

number = None 
while number == None:
   try:
      number=int(input())
   except ValueError:
      print("invaled choice, intger only")
   
while True:
   number = collatz(number)
   print(number)
   if number ==1:
      break

print("good")
