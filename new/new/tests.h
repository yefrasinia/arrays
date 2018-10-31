//
//  tests.h
//  new
//
//  Created by yefrasinia on 31.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef tests_h
#define tests_h
#define Vector std::vector<int> v{1,2,3,4,5,6,7,8,9,10}
#include <vector>
#include <cassert>
#include "Header.h"
void  find_element_test(){
    Vector;
    auto f = stu::find_element(v.begin(),v.end(),[](int a,int b){return a<b;});
    auto f1 = stu::find_element(v.begin(),v.end(),[](int a,int b){return a>b;});
    assert(*f == 1);
    assert(*f1 == 10);
}
void run_tests(){
    find_element_test();
    
}
#endif /* tests_h */
