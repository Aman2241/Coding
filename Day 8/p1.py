# Guessing a number game

# A random number generated and user have to guee that number


import random

n=random.randint(1,20)

user_chance=1   

while user_chance<5:
    guess=int(input())

    if guess==n:
        print("You Guessed it right")
    elif guess>n:
        print("Guess Lower Value")
        
    else:
        print("Guess Higher Value")
        
    user_chance=user_chance+1


