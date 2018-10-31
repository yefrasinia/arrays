//
//  main.cpp
//  list
//
//  Created by yefrasinia on 01.11.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
template<class Iterator,class BP>
Iterator find_element(Iterator first,Iterator last,BP p){
    Iterator element = first;
    for( ; first != last ; ++first){
        if(p(*first,*element)){
            element = first;
        }
    }
    return element;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::list<int> l{1,2,3,4,5,6,7,8,90,10};
    auto s = l.begin();
    std::advance(s, 5);
    //std::cout << *s <<std::endl;
    l.erase(s);
    auto f = find_element(l.begin(), l.end(), [](int a,int b){return a>b;}) ;
    //std::cout << *f << std::endl;
    l.insert(find_element(l.begin(), l.end(), [](int a,int b){return a>b;}),100);
    std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
    for(auto i = l.begin() ; i != l.end() ; ++i){
        std::cout << *i << " ";
    }
    
    return 0;
}
