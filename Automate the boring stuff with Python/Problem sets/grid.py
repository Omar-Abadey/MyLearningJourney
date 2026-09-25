grid = [['.', '.', '.', '.', '.', '.', '.', ',', ','],
        ['.', 'O', 'O', '.', '.', '.', '.', ',', ','],
        ['O', 'O', 'O', 'O', '.', '.', '.', ',', ','],
        ['O', 'O', 'O', 'O', 'O', '.', '.', ',', ','],
        ['.', 'O', 'O', 'O', 'O', 'O', '.', ',', ','],
        ['O', 'O', 'O', 'O', 'O', '.', '.', ',', ',']]

# first make a while loop
lists = len(grid)
listLong = len(grid[0])
i = 0

while i < lists:
   if i == 0:
       for item in range(listLong):
          if item == 3 or item == 2 or item == 5 or item == 6:
             print(0, end='')
          else:
             print(".", end='')  # a second loop that prints a row
             
   elif i == 1:
       for item in range(listLong):
          if item == 1 or item == 2 or item == 3 or item == 4 or item == 5 or item == 6 or item == 7:
             print(0, end='')
          else:
             print(".", end='')  # a second loop that prints a row
             
   elif i == 2:
       for item in range(listLong):
          if item == 1 or item == 2 or item == 3 or item == 4 or item == 5 or item == 6 or item == 7:
             print(0, end='')
          else:
             print(".", end='')  # a second loop that prints a row

   elif i == 3:
       for item in range(listLong):
          if item == 3 or item == 4 or item == 5 or item == 6 or item == 2:
             print(0, end='')
          else:
             print(".", end='')  # a second loop that prints a row

   elif i == 4:
       for item in range(listLong):
          if item == 3 or item == 4 or item == 5:
             print(0, end='')
          else:
             print(".", end='')  # a second loop that prints a row

   else:
       for item in range(listLong):
          if item == 4:
             print(0, end='')
          else:
             print(".", end='')  # a second loop that prints a row
        
   print()
   i+= 1
   

    

# At the end of the first while loop put a break statement 

# You can think of grid[y][x] as being the character at the x- and
# y-­coordinates of a “picture” drawn with text characters. The (0, 0) origin
# will be in the upper-left corner, the x-coordinates increase going right,
# and w the y-coordinates increase going down.
# Copy the previous grid value, and write code that uses it to print the image.

# . . O O . O O . .
# . O O O O O O O .
# . O O O O O O O .
# . . O O O O O . .
# . . . O O O . . .
# . . . . O . . . .

# Hint: You will need to use a loop in a loop in order to print grid[0][0],
# then grid[0][1], then grid[0][2], and so on, up to grid[0][8]. This will fin-
# ish the first row, so then print a newline. Then your program should print
# grid[1][0], then grid[1][1], then grid[1][2], and so on. The last thing your
# program will print is grid[5][8].
# Also, remember to pass the end keyword argument to print() if you
# don’t want a newline printed automatically after each print() call.
