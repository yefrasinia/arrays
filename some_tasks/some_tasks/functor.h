//
//  functor.h
//  some_tasks
//
//  Created by yefrasinia on 11/2/18.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef functor_h
#define functor_h

struct Even_find{
   bool counter = true;
    bool operator()(int a,int b){
        if(counter){
            counter = false;
            return a<b;
        }
        else{
            counter = true;
            return false;
        }
    }
};
struct Test{
   bool counter = true;
    
    void operator()(){
        if(counter){
            counter = false;
            std::cout << "yes" << std::endl;
        }
        else{
            counter = true;
            std::cout << "no" << std::endl;
        }
    }
    
    
};
#endif /* functor_h */
