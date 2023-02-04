print("Welcome to the tip calculator.")
bill = float(input("What was the total bill? $"))
per = int(input("What percentage tip you would like to give? 10, 12, or 15? "))
split = int(input("How many people to split the bill? "))
total = bill + bill*per/100
print(f"Each person should pay: ${round(total/split,2)}")