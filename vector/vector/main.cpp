//
//  main.cpp
//  vector
//
//  Created by yefrasinia on 31.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
//#define
using namespace std;
using UnaryOperation = void(*)(int);
template <class T>
struct Pair{
    T first;
    T second;
};
template<class T>
T sum( T a , T b ){
    return a + b;
}
template<class Iterator,class UnaryOperation>
void for_each_(Iterator first , Iterator last , UnaryOperation op){
    for(; first!= last ; ++first){
        op(*first);
    }
}
void iter_swap(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
void iter_swap_(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {
    vector<int> v{-2,5,7,8,55,33,22};
    std::list<int> list{2,3,4,5,6,7,8,9};
    int array[7] = {2,5,7,8,55,33,22};
    int result = *find_if(v.begin(),v.end(),[](int a){return a>0;});
    for_each(v.begin(),v.end(),[result](int& a){a = a + result;});
    for_each_(list.begin(),list.end(),[](int a){std::cout<<a <<" ";});
    cout << result;
    //for_each(array,array+7,[](int a){std::cout<<a <<" ";});
    //for_each_(list.begin(),list.end(),[](int a){std::cout<<a <<" ";});
    //for_each_(v.begin(),v.end(),[](int& a){a = a + 1;});
    //for_each_(v.begin(),v.end(),[](int a){std::cout<<a <<" ";});
    //std::cout <<sum(5,6);
    return 0;
}
