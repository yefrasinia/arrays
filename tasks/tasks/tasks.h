//
//  tasks.h
//  tasks
//
//  Created by yefrasinia on 31.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef tasks_h
#define tasks_h
#include <vector>
#include <list>
#include "algorithms.h"
#define Containers std::vector<int> v{1,2,3,4,5,6,7,8,9,10}; \
int arr[10]{1,2,3,4,5,6,7,8,9,10}; \
std::list<int> l{1,2,3,4,5,6,7,8,9,10};
void task_66(){
    Containers
    int f = *stu::find_if(v.begin(),v.end(),[](int a){return a%2==0;});
    std::cout << f <<std::endl;
    stu::for_each(v.begin(),v.end(),[f](int& a){
        if(a%2==0){
           a = a + f;
        }
        });
    stu::for_each(v.begin(),v.end(),[f](int& a){std::cout << a << " ";});
}
void task_67(){
    Containers
    int f = *stu::find_if(v.rbegin(),v.rend(),[](int a){return a%2==1;});
    std::cout << f <<std::endl;
    stu::for_each(v.begin(),v.end(),[f](int& a){
        if(a%2==1){
            a = a + f;
        }
    });
    stu::for_each(v.begin(),v.end(),[f](int& a){std::cout << a << " ";});
}
void task_68(){
    Containers
    
    std::cout << *stu::find_element(v.begin(),v.end(),[](int a,int b){return a<b;});
    stu::for_each(v.begin(),v.end(),[](int a){std::cout << a << " ";});
}
#endif /* tasks_h */
