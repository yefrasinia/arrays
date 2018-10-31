//
//  algorithms.h
//  tasks
//
//  Created by yefrasinia on 31.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef algorithms_h
#define algorithms_h
namespace stu{
template<class Iter,class UO>
void for_each(Iter first,Iter last,UO p){
    for( ; first!= last ;++first){
        p(*first);
        
    }
}
template<class Iterator,class BinaryPredicate>
Iterator find_element(Iterator first,Iterator last,BinaryPredicate p){
    Iterator element = first;
    for( ; first != last ;){
        if(p(*first,*element)){
            element = first;
        }
        
    }
    return element;
}
void swap_(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
    template <class Iterator,class UP>
Iterator find_if(Iterator first,Iterator last,UP p){
    for(; first!= last ; ++first){
        if(p(*first)){
            return first;
        }
    }
    return first;
}
}
#endif /* algorithms_h */
