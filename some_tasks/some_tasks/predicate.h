//
//  predicate.h
//  some_tasks
//
//  Created by yefrasinia on 11/2/18.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef predicate_h
#define predicate_h
namespace stu{
bool greater(int a,int b){
    return a>b;
}
bool less(int a,int b){
    return a<b;
}
    bool is_even(int a){
        return a%2==0;
    }
    bool less_abs(int a,int b){
        return std::abs(a) > std::abs(b);
    }
    bool is_alternate_by_sign(int a,int b){
        return a < 0 && b > 0;
    }
}
#endif /* predicate_h */
