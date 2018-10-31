//
//  Print.h
//  fibonachi
//
//  Created by yefrasinia on 29.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef Print_h
#define Print_h

void print_array(int* arr,int size){
    for(int i = 0 ; i< size; ++i){
        std::cout<<arr[i];
    }
}
template<typename T,typename UnaryOperation>
void print_if(T* arr,int size,UnaryOperation p){
    for(int i = 0;i!= size;++i){
        if(p(arr[i])){
            std::cout<<arr[i];
        }
    }
}
template<typename T,typename UnaryOperation>
void print_step(T* a,int size,UnaryOperation op){
    for(int i = 0 ; i < size; i = op(i)){
        std::cout<<arr[i];
    }
}
#endif /* Print_h */
