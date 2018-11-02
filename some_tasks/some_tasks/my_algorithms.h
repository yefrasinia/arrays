//
//  my_algorithms.h
//  some_tasks
//
//  Created by yefrasinia on 11/2/18.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef my_algorithms_h
#define my_algorithms_h
namespace stu{
template <class T,class Iter , class TernaryOperation>
void fill_array(Iter first,Iter last,T a, T d,T number, TernaryOperation t){
    for(; first != last ; ++first){
        *first = t(a,d,number);
        ++number;
    }
}
template<class Iter,class BinaryPredicate >
    Iter find_element(Iter first,Iter last,BinaryPredicate p){
        Iter el = first;
        for( ; first!= last ; ++ first){
            if(p(*first,*el)){
                el = first;
            }
        }
        return el;
    }
    template<class Iter,class BinaryPredicate>
    int binary_count_if(Iter first,Iter last,BinaryPredicate p){
        int temp =0;
        --last;
        for( ; first!= last ; ++ first){
            if(p( *first, *(first+1) )){
                temp++;
            }
        }
        return temp;
    }
}
#endif /* my_algorithms_h */
