//
//  main.cpp
//  testing
//
//  Created by Jia Wang on 3/30/16.
//  Copyright © 2016 Jia Wang. All rights reserved.
//


//This program sort a linked list and finds the min, max, and median and prints it out.

#include <iostream>
#include <list>

using namespace std;

/*
 This function returns a list that contains the minimum, the maximum, and the median numbers of a given
list lst. If lst has an odd number of elements, then the median is the number that separates the higher
half from the lower half. If lst has an even number of elements, then the median is the mean of the two
middle values.
 */
template <typename T>
list<T> min_max_med (list<T> lst) {
    int count, medianIndex;
    double min, max;
    double median;
    
    lst.sort();
    
    typename list<T>::iterator it = lst.begin();
    min = *it;
    
    it = lst.end();
    --it;
    max = *it;

    count = lst.size();
    
    // this if statement executes if the linked list has an odd number of elements
    if (count % 2 == 1) {
        median = 0;
        medianIndex = (count/2)+1;
        for (it = lst.begin(); it != lst.end(); it++) {
            medianIndex--;
            if (medianIndex == 0) {
                median = *it;
            }
        }
    }
    
    // this else statement executes if the linked list has an even number of elements
    else {
        median = 0;
        medianIndex = (count/2);
        for (it = lst.begin(); it != lst.end(); it++) {
            medianIndex--;
            if (medianIndex == 0 || medianIndex == -1) {
                median += *it;
            }
        }
        median /= 2;
    }
    
    // push the min, median, and max onto newList and return newList.
    list <double> newList;
    newList.push_back(min);
    newList.push_back(median);
    newList.push_back(max);
    
    
    return newList;
    
}

int main(int argc, const char * argv[]) {
    list <double> myList;
    
    myList.push_back(95);
    myList.push_back(10);
    myList.push_back(2);
    myList.push_back(35);
    myList.push_back(2);
    myList.push_back(99);
    myList.push_front(45);
    myList.push_back(12);
    myList.push_front(25);
    myList.push_front(47);
    
    list <double> newList = min_max_med(myList);
    
    for (list<double>::iterator it = newList.begin(); it != newList.end(); it++)
    cout << *it << " ";
    
    return 0;
}
