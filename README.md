# Battle Simulator

![](./images/2022-01-09-05-01-39.png)

This is the project from my introductory CS course, **CS100 : Computational Problem Solving.**

Our game mechanics are more complex than what meets the eye.

Some essential aspects of the mechanics are described below.

---

### Attack Mechanics:
Assigning skill points, with a Base attribute which is random between 3 and 18, each player will have the Defending and Attacking skill different 
depending on this. Initial HP = Defending skill of player. Attacking skill is calculated based on base attribute - 10 + skill points allocated to attacking
skill.

If attacker fails attack, they miss their attack and damage themselves instead. If they are successful, they simply damage their opponent.
Light attack does half damage relative to strong damage. The more attacking skill a player has, the more damage they'll do to their opponent.

If opponent/player reaches 0 HP, game ends with immediate effect.

### Miss Modifier:
This is the main difficulty of the attack. It is a percentage of 20. Several factors add up to this modifier such as opponent
defending that turn, whether the attacker does a light attack or a strong attack

if opponent is defending, miss modifier increases by 25%
if strong attack is chosen, miss modifier increases by 60%
if light attack is chosen, miss modifier increases by 20%

These are stackable, so miss modifier can vary between 20% to 85% depending on the circumstances of the attack.

### Luck Factor
The die roll of each person is adjusted depending on how lucky/unlucky they have been in the last 3 turns.

If the player has been lucky for the past three turns, the game will adjust their roll to be more unlucky in that turn and vice versa.

Their luckiness/unluckiness is measured by the difference between their roll and the difficulty of that attack. The differences of the last three turns
are stored and added together to determine the luck factor. The positive/negative of the luck factor automatically adjusts the next roll of dice. 

If luck factor is positive means the player has been unlucky and next roll will be increased by an aggregate of how unlucky they have been in the last three
turns and vice versa.

### Bot Sentience
Instead of having the bot attack the same way or with complete randomness, the bots are designed to attack more
intelligently and more appropriately to the situation. 

It may choose to defend if:
1) it has negative luck factor (meaning it has been lucky for the past three turns and will have a more unlucky roll this turn)
2) its HP is too low (too risky to attack if might do damage to self and die)
3) if its attack skill is too low

It may choose to light attack if:
1) its HP is too low
2) it has high attack skill (meaning lesser risk to attack and more damage done)

It may choose to strong attack if:
1) it has high HP (so worth the risk)
2) luck factor is negative (player has been unlucky in the past three turns so will have a more lucky roll this time)

---
**DISCLAIMER:**
The code is from a project, and doesn't contain any license, hence you are not allowed to copy it in your own project/assignment. Do it at your own risk.

---
## Sources:
Sources for images, and fonts are mentioned below: 

[forest background](https://uanmuvorda.blogspot.com/2019/01/pokemon-backgrounds-forest.html)

[t_pose_patrick](https://www.pikpng.com/pngl/m/16-169755_t-pose-t-patrick-t-pose-patrick-clipart.png)

[t_pose_freddy](https://images-wixmp-ed30a86b8c4ca887773594c2.wixmp.com/f/992e96c1-f007-4d49-841f-9eeffdf48428/dcoxgs6-f08e13ce-d0af-4a5d-a326-c2942c59c09a.png/v1/fill/w_894,h_894,strp/t_posing_fredbear_by_flamerl13_dcoxgs6-pre.png?token=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJzdWIiOiJ1cm46YXBwOiIsImlzcyI6InVybjphcHA6Iiwib2JqIjpbW3siaGVpZ2h0IjoiPD0yNTYwIiwicGF0aCI6IlwvZlwvOTkyZTk2YzEtZjAwNy00ZDQ5LTg0MWYtOWVlZmZkZjQ4NDI4XC9kY294Z3M2LWYwOGUxM2NlLWQwYWYtNGE1ZC1hMzI2LWMyOTQyYzU5YzA5YS5wbmciLCJ3aWR0aCI6Ijw9MjU2MCJ9XV0sImF1ZCI6WyJ1cm46c2VydmljZTppbWFnZS5vcGVyYXRpb25zIl19.aejBI1TEoe1imZ5s7iNMhBGtXzZOwES4gOz5-_b7q1c)

[sans](https://www.hiclipart.com/free-transparent-background-png-clipart-jibtd)

[flappy bird](https://p1.hiclipart.com/preview/193/496/988/flappy-bird-sprite-flappy-bird-blue-video-games-flying-flappy-android-mobile-game-pixel-art-dong-nguyen-png-clipart-thumbnail.jpg)

[discount mega man](https://www.nicepng.com/png/detail/222-2222201_video-game-sprite-png-png-freeuse-moving-pictures.png)