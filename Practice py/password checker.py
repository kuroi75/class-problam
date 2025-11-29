while True:
    password = input("Enter your password: ")

    if password.lower() == "exit":
        break
    if password.lower() == "stop":
        break

    length = len(password)
    lower = any(char.islower() for char in password)
    upper = any(char.isupper() for char in password)
    digit = any(char.isdigit() for char in password)
    special = any(char in "!@#$%^&*()_+-={}[]|:;<>,.?/" for char in password)

    if length < 6 or (password.isalpha() or password.isdigit()):
        print("Weak password")

    elif length >= 8 and lower and upper and digit and special:
        print("Strong password")

    else:
        print("Medium password")