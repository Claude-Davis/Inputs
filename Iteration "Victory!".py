#If the player reaches level 15, the screen displays "Victory!" 5 times
#To reach level 15, the player must have 200 points

points = int(input())     #Input converted to integer
level_15 = points >=200   #Points equal to or greater than 200
message = "Victory!"

if level_15:
    for i in range(5):
        print(message)
