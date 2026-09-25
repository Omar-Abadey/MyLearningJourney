name = ""
while True:
    print("Who are you?")
    name = input()
    if name != "Joe":
        continue
    print("Welcome Joe, what is the password? (it's a fish)")
    password =input()
    if password == "swordfish":
        break
print("Access Granted.")
