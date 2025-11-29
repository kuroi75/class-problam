print ("\n=====Unit Converter=====")
print ("What do you need to convert? \n")

print ("---- Mass convart ----")
print ("1. kg to g")
print ("2. g to kg")

print ("\n---- Length Conversion ----")
print ("3. cm to m")
print ("4. m to cm")
print ("5 . km to m")
print ("6. m to km")

print ("\n---- Temperature Conversion ----")
print ("7. Celsius to Fahrenheit")
print ("8. Fahrenheit to Celsius")

print ("\n ---- Distance Conversion ----")
print ("9. feet to meters")
print ("10. meters to feet\n")

print ("\n ---- Time Conversion ----")
print ("11. second to minutes")
print ("12. minutes to hours") 
print ("13. hours to minutes\n")
print ("------------------------------")

choice = int(input("Enter your choice (1-13): "))

if choice == 1:
    kg = float(input("Enter KG:"))
    ans = kg*1000
    print(f"{kg} kg = {ans} g")

elif choice == 2:
    g = float(input("Enter g:"))
    ans = g/1000
    print(f"{g} g = {ans} kg")

elif choice == 3:
    cm = float(input("Enter cm:"))
    ans = cm/100
    print(f"{cm} cm = {ans} m")

elif choice == 4:
    m = float(input("Enter m:"))
    ans = m*100
    print(f"{m} m = {ans} cm")

elif choice == 5:
    km = float(input("Enter km:"))
    ans = km*1000
    print(f"{km} km = {ans} m")

elif choice == 6:
    m = float(input("Enter m:"))
    ans = m/1000
    print(f"{m} m = {ans} km")

elif choice == 7:
    c = float(input("Enter Celsius:"))
    ans = (c * 9/5) + 32
    print(f"{c} Celsius = {ans} Fahrenheit")

elif choice == 8:
    f = float(input("Enter Fahrenheit:"))
    ans = (f - 32) * 5/9
    print(f"{f} Fahrenheit = {ans} Celsius")

elif choice == 9:
    feet = float(input("Enter feet:"))
    ans = feet * 0.3048
    print(f"{feet} feet = {ans} meters")

elif choice == 10:
    meters = float(input("Enter meters:"))
    ans = meters / 0.3048
    print(f"{meters} meters = {ans} feet")

elif choice == 11:
    seconds = float(input("Enter seconds:"))
    ans = seconds / 60
    print(f"{seconds} seconds = {ans} minutes")

elif choice == 12:
    minutes = float(input("Enter minutes:"))
    ans = minutes / 60
    print(f"{minutes} minutes = {ans} hours")

elif choice == 13:
    hours = float(input("Enter hours:"))
    ans = hours * 60
    print(f"{hours} hours = {ans} minutes")

else:
    print("Invalid choice!")