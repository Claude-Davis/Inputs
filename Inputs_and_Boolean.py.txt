# Requirements to level up in a video game.

points = input()

# Certain number of points required.
level_2 = points > 250
level_3 = points > 750
level_4 = points > 1500

key = input()

# Certain number of points AND keys required.
level_5 = (points > 1500) and (key > 5)
level_6 = (points > 1800) and (key > 10)
level_8 = (points > 5000) or (key > 32)
