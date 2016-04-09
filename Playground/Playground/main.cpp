//
//  main.cpp
//  Playground
//
//  Created by Jia Wang on 3/31/16.
//  Copyright © 2016 Jia Wang. All rights reserved.
//

#include <iostream>
#include <queue> 
#include <list> 
#include <set> 
#include <map>

using namespace std;

int main(int argc, const char * argv[]) {
    
    list <int> newList;
    deque <int> newDeque;
    set <string> newSet;
    map <string, string> newMap;
    
    newList.push_back(5);
    newList.push_back(10);
    
    list<int>::iterator it;
    for (it = newList.begin(); it != newList.end(); it++)
        cout << *it << endl;
    cout << endl;
    
    newDeque.push_back(15);
    newDeque.push_front(20);
    
    for (int i = 0; i < newDeque.size(); i ++)
        cout << newDeque[i] << endl;
    cout << endl;
    
    newSet.insert("30");
    newSet.insert("25");
    
    set<string>::iterator iter;
    for (iter = newSet.begin(); iter != newSet.end(); iter++)
        cout << *iter << endl;
    cout << endl;
    
    newMap["ding"] = "run ye fools";
    newMap["hippity"] = "hoppitcous";
    
    cout << newMap["ding"] << endl;
    cout << newMap["hippity"] << endl;
    
    return 0;
}
