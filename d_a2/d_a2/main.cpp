//
//  main.cpp
//  d_a2
//
//  Created by yefrasinia on 29.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#include <iostream>
#include <vector>
struct Plane{
    struct Engine{
        int fuel; //топливо
        int forcer; //поршень
    }
};
struct Car{
    struct Engine{
        int fuel; //топливо
        int forcer; //поршень
        int a;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Car::Engine a;
    Plane::Engine b;
    return 0;
}
