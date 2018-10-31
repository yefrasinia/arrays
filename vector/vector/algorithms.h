//
//  Header.h
//  vector
//
//  Created by yefrasinia on 31.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#ifndef Header_h
#define Header_h
template<class Iter,class UP>
Iter find_if(Iter first,Iter last,UP p){
    for(;first!= last;++first){
        if(p(*first)){
            return first;
        }
    }
    return first;
}
#endif /* algorithms_h */
