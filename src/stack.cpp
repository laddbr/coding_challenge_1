/**
 * 
 * CREATED BY: LADDBR
 * 
 * Stack.cpp contains the implementations for the functions listed in stack.h
 * 
 * */



#include "stack.h"


StackType::StackType()
{
    top = -1;
}

void StackType::Pop()
{   
    top--;
}

void StackType::Push(char item)
{
    top++;
    items[top] = item;
}

char StackType::Top()
{
    return items[top];
}

bool StackType::isEmpty(){
    if (top == -1)
    {
        return true;
    }
    else if (top != -1)
    {
        return false;
    }
    return false;
}