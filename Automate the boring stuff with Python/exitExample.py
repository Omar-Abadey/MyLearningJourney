from sys import *

while True:
    print("type exit to exit")
    response = input()
    if response == "exit":
        print("You typed " + response + ".")
        exit()
print("You typed " + response + ".")
