//
//  main.cpp
//  density
//
//  Created by yefrasinia on 30.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#include <iostream>
#include "Header.h"
template<typename Iterator,typename BinaryPredicate>
Iterator find_element(Iterator first,Iterator last,BinaryPredicate p){
    Iterator element = first;
    for( ; first < last ; ++first){
        if(p(*first,*element)){
            element = first;
        }
    }
    return element;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
