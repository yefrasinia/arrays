//
//  Header.h
//  new
//
//  Created by yefrasinia on 31.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef Header_h
#define Header_h
namespace stu{
    template<class Iter, class UO>
    void for_each(Iter first,Iter last, UO p){
        for(; first!= last ; ++first){
            p(*first);
        }
    }
    template<class Iterator,class BP>
    Iterator find_element(Iterator first,Iterator last,BP p){
        Iterator element = first;
        for(  ; first != last ; ++first){
            if(p(*first,*element)){
                element = first;
            }
        }
        return element;
    }
    template<class T>
    void swap(T& a,T& b){
        T temp = a;
        a = b;
        b = temp;
    }
    template<class Iterator>
    void iter_swap(Iterator a,Iterator b){
        stu::swap(*a, *b);
        
    }
    template <class Iterator1,class Iterator2>
    void swap_rangers(Iterator1 first1,Iterator1 last1,Iterator2 first2){
        while(first1!=last1){
            iter_swap(first1++,first2++);
        }
    }
    template<class Iterator>
    void reverse(Iterator first,Iterator last){
        --last ;
        while(first < last ) {
           std::iter_swap(first++,last--);
            
           
        }
    }
    template<class Iterator,class TP>
    void zero_local_max(Iterator first,Iterator last,TP p){
        for( ; first < last-1 ; ++first){
            if(p (*(first),*(first+2),*(first+1))){
                *(first + 1) = 0;
            }
        }
    }
}

#endif /* Header_h */
