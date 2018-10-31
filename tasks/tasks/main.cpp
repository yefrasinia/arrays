//
//  main.cpp
//  tasks
//
//  Created by yefrasinia on 31.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#include <iostream>
#include <vector>
#include "tasks.h"
void f(int* arr,int first,int last){
    --last;
    for( ; first<last ; ){
        
    for(int i = 0 ; i < 2; ++i){
        std::cout<<arr[first] << " ";
        ++first;
    }
    for(int i = 0 ; i < 2; ++i){
        std::cout<<arr[last] << " ";
        --last;
    }
    }
}
template <class Iterator>
void f1(Iterator first,Iterator last){
    --last;
    for(; first < last ; ++first,--last){
        std::cout << *first << " " << *last << " ";
        
    }
}
void print_sqrt(int row,int colomn){
    for(int i = 0 ; i < colomn ; ++i){
        for(int j = 0; j < i ; ++j){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //int arr[10]{1,2,3,4,5,6,7,8,9,10};
    //std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
    //f(arr,0,10);
    //f1(v.begin(),v.end());
    //task_66();
    task_68();
    print_sqrt(5, 10);
    return 0;
}
