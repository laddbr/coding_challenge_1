/**
 *
 * CREATED BY: LADDBR
 * 
 * Driver.cpp runs the stack evaluation program, provides info, and does the evaluation on user input.
 * 
 * */


#include "stack.cpp"
#include <iostream>
#include <string>
#include <iostream>

using namespace std;


int main()
{
    
    //Intro and guide
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "***************************************************************" << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "                     Stack Evaluation Program                  " << endl;
    cout << "                     ASWWU Coding Challenge 1                  " << endl;
    cout << "                     Created by: Bradon Ladd                   " << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "***************************************************************" << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "            Welcome to the stack evaluation program            " << endl;
    cout << "            The purpose of this program is to demo-            " << endl;
    cout << "            nstrate personal knowledge of stacks and           " << endl;
    cout << "                  creative problem solving.                    " << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "***************************************************************" << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "            To use this program, first enter how many          " << endl;
    cout << "            strings you would like to evaluate, up to          " << endl;
    cout << "            10^3 strings. Next, for each prompt, enter         " << endl;
    cout << "            a string of characters consisting of (),           " << endl;
    cout << "            {}, or []. The program will evaluate if            " << endl;
    cout << "            the string of brackets is a balanced string.       " << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "***************************************************************" << endl;
    cout << "                                                               " << endl;
    cout << "                                                               " << endl;
    cout << "How many strings you would like to evaluate (Limit: 10^3): ";

    //Entering and checking the amount of strings
    int iterations;
    cin >> iterations;
    while (iterations > 999)
    {
        cout << "Too many strings (limit is 10^3). Please enter a lower number: ";
        cin >> iterations;
    }

    string answers[iterations];

    //For loop that enters and evaluates each string of brackets
    for (int i = 1; i <= iterations; i++)
    {
        StackType mainStack = StackType();
        StackType stack1 = StackType();
        StackType stack2 = StackType();
        string stackInput;
        bool valid = true;
        int stackLength;

        //String input
        cout << "Please enter string " << i << ": ";
        cin >> stackInput;

        stackLength = stackInput.length();

        //Makes sure string has less than 1000 characters
        while(stackLength >= 1000)
        {
            cout << "String too long, please enter a new string with fewer characters (less than 1000): ";
            cin >> stackInput;
        }

        //If the amount of brackets entered is odd (unbalanced)
        if (stackLength % 2 > 0)
        {
            valid = false;
        }

        //Splits the list down the middle and throws each half into its own stack
        for (int a = 0; a < stackLength / 2; a++)
        {
           stack1.Push(stackInput[a]);
           
        }
        for (int a = 0; a <= stackLength / 2; a++)
        {
            stack2.Push(stackInput[stackLength-a]);
        }


        //Evaluates the string and returns wether it's legit or not
        while (valid == true && stack1.isEmpty() == false)
        {
            char item1 = stack1.Top();
            char item2 = stack2.Top();
            
            if (item1 == '(')
            {
                if (item2 == ')')
                {
                    valid = true;
                }
                else
                {
                    valid = false;
                }
            }
            else if (item1 == '{')
            {
                if (item2 == '}')
                {
                    valid = true;
                }
                else
                {
                    valid = false;
                }
            }
            else if (item1 == '[')
            {
                if (item2 == ']')
                {
                    valid = true;
                }
                else 
                {
                    valid = false;
                }
            }
            else
            {
                valid = false;
            }
            
            stack1.Pop();
            stack2.Pop();

        }

        //Inputting the evaluations for later printing
        if (valid == true)
        {
            answers[i-1] = "YES";
        }
        else if (valid == false)
        {
            answers[i-1] = "NO";
        }  
    }

    //Printing the evaluations
    for (int i = 0; i < iterations; i++)
    {   
        cout << (i + 1) << ": " << answers[i] << endl;
    }
    return 0;
}


