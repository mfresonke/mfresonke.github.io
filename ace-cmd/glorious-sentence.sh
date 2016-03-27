#!/bin/bash

# Read Enters the User's Input into the given Enviornment Variable.
read -p "Please Enter a Glorious Sentence: " ANSWER

# Now Let's Print it in cool ways!
echo You Said: $ANSWER

# A for loop by default splits the output by spaces.
for WORD in $ANSWER
do
  figlet $WORD
done

# Cowsay the Output for Good Measure
cowsay -f hellokitty $ANSWER

# And for that special ending
espeak "$ANSWER"
