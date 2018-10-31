//
//  predicates.h
//  new
//
//  Created by yefrasinia on 01.11.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef predicates_h
#define predicates_h
namespace stu{
int greater(int a,int b){
    return a>b;
}
    int less(int a,int b){
        return a<b;
    }
    int is_local_max(int a,int b,int c){
        return c>b && c>a;
    }
    }
#endif /* predicates_h */
