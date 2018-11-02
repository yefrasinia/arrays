//
//  algorithm.h
//  some_tasks
//
//  Created by yefrasinia on 11/1/18.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef algorithm_h
#define algorithm_h

namespace stu{
    template<class Iter,class UO>
    void for_each(Iter first,Iter last,UO p){
        for( ; first!= last ; ++first){
            p(*first);
        }
    }
    template<class T>
    void swap(T& a,T& b){
        T temp = a;
        a = b;
        b = temp;
    }
    template <class Iter1,class Iter2>
    void iter_swap(Iter1 a,Iter2 b){
        stu::swap(*a,*b);
    }
    template<class Iter1,class Iter2>
    void swap_rangers(Iter1 first1,Iter1 last1,Iter2 first2){
        while(first1!=last1){
            stu::iter_swap(first1++,first2++);
        }
    }
    template<class Iterator,class T>
    void fill(Iterator first,Iterator last,T value){
        for( ; first!= last ; ++first){
            *first = value ;
        }
    }
    template<class Iter,class T>
    Iter find(Iter first,Iter last,T value){
        for( ; first != last ; ++first){
            if( *first == value){
                return first;
            }
        }
        return first;
    }
    template<class Iterator,class T>
    T accumulate(Iterator first,Iterator last,T init){
        for( ; first != last ; ++first){
            init = init + (*first);
        }
      return init;
    }
    template<class Iterator,class T,class BO>
    T accumulate(Iterator first,Iterator last,T init, BO p){
        for( ; first!= last ; ++first){
            init = p(init,*first);
        }
        return init;
    }
    template<class Iterator,class UP>
    int count_if(Iterator first,Iterator last,UP p){
        int temp = 0;
        for(; first!= last ; ++first){
            if(p(*first)){
                ++temp;
            }
        }
        return temp;
    }
    template<class Iterator,class T>
    int count(Iterator first,Iterator last,T value){
        int temp = 0;
    for(; first!= last ; ++first){
        if(*first == value){
            temp++;
        }
        return temp;
    }
        
}
#endif /* algorithm_h */
