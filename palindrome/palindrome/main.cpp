//
//  main.cpp
//  palindrome
//
//  Created by Jia Wang on 3/30/16.
//  Copyright © 2016 Jia Wang. All rights reserved.
//

#include <iostream>
#include <list>
#include <stack>

using namespace std;

//this function tests whether or not the list is palindromic
template <typename T>
bool isPalin (list<T> deezList) {
    typename list<T>::iterator it;
    stack <T> testStack;
    
    //push all the elements of the list onto a Stack
    for (it = deezList.begin(); it != deezList.end(); it++) {
        testStack.push(*it);
    }
    
    //iterate through the list and compare the value of the iterator
    //to the top of the stack. If the values match, pop the top of the stack.
    //If the values don't match return false.
    for (it = deezList.begin(); it != deezList.end(); it++) {
        if (testStack.top() != *it)
            return false;
        else
            testStack.pop();
    }
    
    //if stack is empty and iterator points to last element then
    if (testStack.empty() && it == deezList.end())
        return true;
    else
        return false;
    
    return false;
}

int main(int argc, const char * argv[]) {
    list <int> myList;
    bool palindromic;
    
    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(15);
    myList.push_back(10);
    myList.push_back(5);

    palindromic = isPalin(myList);
    
    if (palindromic == true) {
        cout << "list is palindromic!";
    }
    else
        cout << "list is not palindromic!";
    
    return 0;
}
