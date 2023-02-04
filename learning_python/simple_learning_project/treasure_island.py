print("Welcome to the Treasure Island.")
dire = input("You're at a cross road. Where do you want to go? Type \"left\" or \"right\"\n")
if dire=="right" :
    print("Game Over!")
lake = input("You come to lake. There is an island in the middle of the lake. Type \"wait\" to wait for the boat. Type \"swim\" to swim across.\n")
if lake=="swim" :
    print("Game Over!")
door = input("You arrive at island unharmed. There is a house with 3 doors. One red, one yellow and one blue. Which color do you choose?\n")
if door=="yellow" :
    print("You Win!")
else:
    print("Game Over!")


