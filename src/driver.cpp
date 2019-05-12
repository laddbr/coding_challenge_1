
#include "stack.cpp"
#include <iostream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int iterations;
    cout << "Welcome to the stack evaluation program.\n Please enter the numeric value of how many strings you would like to evaluate: \n";
    cin >> iterations;

    for (int i = 0; i < iterations; i++)
    {
        StackType mainStack = StackType();
        StackType stack1 = StackType();
        StackType stack2 = StackType();
        string stackInput;
        bool valid = true;
        int stackLength;
        cout << "Please enter string " << i << ": ";
        cin >> stackInput;



        //Checks to see if the string has a balanced amount of brackets
        stackLength = stackInput.length();
        
        if (stackLength % 2 > 0)
        {
            valid = false;
        }

        
        for (int a = 0; a < stackLength / 2; a++)
        {
           stack1.Push(stackInput[a]);
           
        }
        
        for (int a = 0; a <= stackLength / 2; a++)
        {
            stack2.Push(stackInput[stackLength-a]);
        }

        bool isEmpty = stack1.isEmpty();
        while (valid == true && stack1.isEmpty() == false)
        {
            cout << "While loop executed successfully";
            char item1 = stack1.Top();
            char item2 = stack2.Top();
            cout << item1 << " " << item2 << "\n";

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
        
        cout << "Length of stack: " << stackLength << "\n";
        cout << "Stack inputted: " << stackInput << "\n";
        cout << "Stack 1 Length: " << (stackLength / 2) << "\n";





        if (valid == true)
        {
            cout << "YES";
        }
        else if (valid == false)
        {
            cout << "NO";
        }


        
    }

    return 0;
}


