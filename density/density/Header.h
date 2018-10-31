//
//  Header.h
//  density
//
//  Created by yefrasinia on 30.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef Header_h
#define Header_h
#define Arr int arr[10]{1,2,3,4,5,6,7,8,9,10}
template<typename Iterator,typename BinaryPredicate>
void task1(){
    Arr;
    int* min_el = find_element(arr,arr+10,[](int a,int b){return a<b;})};
    int* max_el = find_element(arr,arr+10,[](int a,int b){return a>b;})};
assert(min_el == arr);
assert(max_el == arr+9);
}
#endif /* Header_h */
