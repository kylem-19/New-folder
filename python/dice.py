import random

num_dice = int(input("Enter the number of dice to roll: "))
num_sides = int(input("Enter the number of sides on each die: "))

for i in range(num_dice):
    result = random.randint(1, num_sides)
    print("The dice roll result is:", result)