//
//  tests.h
//  some_tasks
//
//  Created by yefrasinia on 11/1/18.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef tests_h
#define tests_h
#include "algorithm.h"
#include "my_algorithms.h"
#include "functor.h"
#include "predicate.h"
#include "operations.h"
#include <vector>
#include <iostream>
#include <cmath>
#define Containers std::vector<int> v{1,2,3,8,5,11,-7,8,9,10}; \
std::vector<int> v1; \
std::vector<int> v2{10,20,30,40,50,60,70,80,90,100}; \
std::vector<int> v3{10,0,0,40,50,60,0,80,0,100}
void task1(){
    Containers;
    //for_each(v.begin(),v.end(),[](int& a){++a;});
    //int k = 10;
    //for_each(v.begin(),v.end(),[k](int& a){a = a + k;});
    //for_each(v.begin(),v.end(),[](int a){std::cout << a << " " ;});
    for_each(v.begin(),v.end(),[&v1](int a){
        v1.push_back(a);
        });
    for_each(v.begin(),v.end(),[](int& a){
        a = 0;
    });
    for_each(v1.begin(),v1.end(),[](int a){std::cout << a << " ";});
    std::cout << std::endl;
    for_each(v.begin(),v.end(),[](int a){
        if(a%2==0){
            std::cout << a << " ";
        }
    });
}
void task_2(){
    Containers;
    stu::swap_rangers(v.begin(),v.begin() + 5,v.begin() + 5);
    
    stu::swap_rangers(v2.begin(), v2.end(), v.begin() );
    for_each(v.begin(),v.end(),[](int a){std::cout << a << " ";});
}
void task_3(){
    Containers;
    stu::fill_array(v.begin(),v.end(),1,2,0,[](int a,int d,int number){ return a + d * number;});
    //for_each(v.begin(),v.end(),[](int a){std::cout << a << " ";});
    stu::fill_array(v2.begin(),v2.end(),1,2,0,[](int a,int d,int number){ return a * std::pow(d,number);});
    for_each(v2.begin(),v2.end(),[](int a){std::cout << a << " ";});
}
void task_4(){
    Test a;
    for(int i = 0 ; i < 10 ; ++i){
        a();
    }
    Test b;
}
void task_5(){
    Containers;
    int result = *stu::find_element(v.begin() , v.end(), Even_find() );
    std::cout << result <<std::endl;
}
void task_6(){
    Containers;
    auto f = stu::find(v3.begin(), v3.end(), 0);
    auto f1 = stu::find(f+1,v3.end(), 0);
    std::cout << stu::accumulate(f, f1, 0) << std::endl;
}
void task_7(){
    Containers;
    auto f = stu::find(v3.begin(),v3.end(),0);
    auto f1 = stu::find(v3.rbegin(),v3.rend(), 0);
    auto a = stu::accumulate(f1,std::make_reverse_iterator(f),0);
    std::cout << a << std::endl;
    
    
}
void task_8(){
    Containers;
    std::vector<int>::iterator f = stu::find_element(v.begin(),v.end(),stu::greater);
    std::vector<int>::iterator f1 = stu::find_element(v.begin(),v.end(),stu::less);
    std::cout << stu::count_if(f1, f, stu::is_even);
}
void task_9(){
    Containers;
    for_each(v.begin(),v.end(),[](int& a){a+= 5;});
    for_each(v.begin(),v.end(),[](int a){std::cout << a << " ";});
}
void task_10(){
    Containers;
    int result = *stu::find_element(v.begin(), v.end(), stu::less_abs);
    std::cout << result << std::endl;
    
}
void task_11(){
    Containers;
    int c = 4;
    int result = stu::count_if(v.begin(), v.end(), [c](int a){return a>c;});
    std::cout << result <<std::endl;
}
void task_12(){
    Containers;
    
    int result = stu::accumulate(v.begin(),v.end(),1,stu::mull_if);
    std::cout << result << std::endl;
}
void task_13(){
    Containers;
    int result = stu::binary_count_if(v.begin(), v.end(), stu::greater);
    int result1 = stu::binary_count_if(v.begin(), v.end(), stu::is_alternate_by_sign);
    std::cout << result << " " <<result1 << std::endl;
}
void task_14(){
    Containers;
    int result = *stu::find_element(v.begin(), v.end(), stu::less_abs);
    std::cout << result << std::endl;
}
void run_tasks(){
    task_14();
}
#endif /* tests_h */
