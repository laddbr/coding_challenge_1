/**
 * 
 * CREATED BY: LADDBR
 * 
 * Stack.h contains the class declaration for the stack object. 
 * The stack has a few operations, namely pop and push operations.
 * 
 * */


class StackType
{
    public:
        //Class Constructor
        StackType();

        //Pop operation
        char Pop();

        //Push operation
        void Push(char item);

        //Checks to see if the stack is empty
        bool isEmpty();

        char Top();
        


    private:
        int top;
        char items[1000];

};