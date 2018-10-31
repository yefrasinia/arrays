//
//  main.cpp
//  fibonachi
//
//  Created by yefrasinia on 29.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#include <iostream>
#include <vector>
template <typename T>
struct Arrays{
    T* arr1;
    int size1 = 0;
    T* arr2;
    int size2 = 0;
    
};
template<typename T1,typename T2>
struct Pair{
    T1 first;
    T2 second;
};
using VInt = std::vector<int>;
template <typename UnaryPredicate>
Arrays<int> transform_array(int* arr,int size,UnaryPredicate p){
    Arrays<int> result;
    
    result.arr1=new int[size];
    result.arr2 = new int[size];
    int j = 0;
    int k = 0;
    for(int i = 0 ; i<size;++i){
        if(p(arr[i])){
            result.arr1[j] = arr[i];
            j++;
            result.size1++;
        }
        else{
            result.arr2[k] = arr[i];
            k++;
            result.size2++;
        }
    }
    return result;
}
using VInt = std::vector<int>;
template<typename UnaryPredicate>
Pair<int,VInt> transform_array_(int* arr,int size,UnaryPredicate p){
    Pair<VInt,VInt> result;
    for(int i = 0 ; i < size; ++i){
        if(p(arr[i])){
            result.first.push_back(arr[i]);
        }
        else{
            result.second.push_back(arr[i]);
        }
    }
}
void print_array(){
    
}
int main(){
    int arr[10]{1,2,3,4,5,-5,-3,-2,-9,-19};
    Pair<VInt,VInt> result = transform_array_(arr, 10,[](int a){return a<0;));
        print_array(result.first.begin(),result.first.end());
}
