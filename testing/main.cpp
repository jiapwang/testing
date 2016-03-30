//
//  main.cpp
//  testing
//
//  Created by Jia Wang on 3/30/16.
//  Copyright © 2016 Jia Wang. All rights reserved.
//

#include <iostream>
#include <list>

using namespace std;

template <typename T>
list<T> min_max_med (list<T> deezList) {
    int count;
    double min, max, medianIndex;
    double median;
    
    deezList.sort();
    
    typename list<T>::iterator it = deezList.begin();
    min = *it;
    
    it = deezList.end();
    --it;
    max = *it;

    count = deezList.size();
    
    if (count % 2 == 1) {
        median = 0;
        medianIndex = (count/2)+1;
        for (it = deezList.begin(); it != deezList.end(); it++) {
            medianIndex--;
            if (medianIndex == 0) {
                median = *it;
            }
        }
        
    }
    
    else {
        median = 0;
        medianIndex = (count/2);
        for (it = deezList.begin(); it != deezList.end(); it++) {
            medianIndex--;
            if (medianIndex == 0 || medianIndex == -1) {
                median += *it;
            }
        }
        median /= 2;
    }
    
    list <double> newList;
    newList.push_back(min);
    newList.push_back(max);
    newList.push_back(median);
    
    return newList;
    
}

int main(int argc, const char * argv[]) {
    list <double> myList;
    
    myList.push_back(95);
    myList.push_back(10);
    myList.push_back(2);
    myList.push_back(35);
    myList.push_back(2);
    //myList.push_back(99);
    myList.push_back(12);
    
    list <double> newList = min_max_med(myList);
    
    for (list<double>::iterator it = newList.begin(); it != newList.end(); it++)
    cout << *it << " ";
    
    return 0;
}
