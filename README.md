# ASWWU Coding Challenge: Working with Stacks

## Problem Statement

Create a program that evaluates a string of brackets. Said program will take the user's input consisting of {}, (), and [] characters, and evaluate them to see if they are a balanced string. Balanced strings are strings such as these:

[[]]
({})
{{{((()))}}}

"Given n string of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, print YES on a new line; otherwise, print NO on a new line." - HackerRank

##User Guideline

Clone into this repo or download the files to your machine. CodingChallengeOne has been provided as a compiled version of the program. To make changes and compile it further, 
"g++ -o [filename.out] driver.cpp". Then use "./[filename.out]" to run it. 

The program will prompt you to enter how many strings you would like evaluated. You can enter as many as 10^3, or 1000, different strings for evaluation. Then, line by line, you input each string of brackets, up to as many as you specified. Each string of brackets can have no more than 10^3, or 1000, characters. After all the lines have been submitted, the 
evaluations show up for each line, with a "YES": it is balanced, or "NO": it was not. Each string cannot contain any letters, numbers, or any character that isn't listed above.

