// 00001010
// 00000001
//
//  main.cpp
//  f
//
//  Created by yefrasinia on 08.09.2018.
//  Copyright © 2018 жшар. All rights reserved.
//

#include <iostream>
#include <utility>
using PII = std::pair<int,int>;
struct Arrays{
    int* first;
    int* second;
    int f_size = 0;
    int s_size = 0;
};
Arrays f(int* first,int* last){
    Arrays result;
    result.first = new int[last-first]{0};
    result.second = new int[last-first]{0};
    int* temp1 = result.first;
    int* temp2 = result.second;
    for( ; first != last ; ++first){
        if(*first>0){
            *temp1=*first;
            ++temp1;
            ++result.f_size;
        }
        else{
            *temp2=*first;
            ++temp2;
            result.s_size;
        }
    }
    return result;
}
void print_array(int* arr,int size){
    for(int i = 0;i< size;++i){
        std::cout << arr[i];
    }
}

int main(){
    int* arr = new int[7]{1,2,3,4,5,6,-7};
    Arrays result = f(arr,arr+7);
    print_array(result.first,result.f_size);
    print_array(result.second,result.s_size);
    return 0;
}
