//
//  main.cpp
//  dynamic_arrays
//
//  Created by yefrasinia on 29.10.2018.
//  Copyright © 2018 yefrasinia. All rights reserved.
//

#include <iostream>
#include <stdexcept>
namespace stu{
    struct vector{
        using iterator = int*;
        int* m_arr;
        int m_size;
        int m_capacity;
        vector(){
            m_size = 0;
            m_capacity = 10;
            m_arr = new int[m_capacity]{};
        }
        
        void push_back(int value){
            m_arr[m_size++] = value;
        }
        int& at(int index){
            if(index>=m_size){
                throw std::out_of_range("vector not change");
            }
            return m_arr[index];
        }
        int& operator[](int index){
            return m_arr[index];
        }
        int size();
        void pop_back();
        vector::iterator begin(){
            return m_arr;
        }
        vector::iterator end(){
            return m_arr+m_size;
        }
        int front();
        void relocate();
    };
    void vector::pop_back(){
        --m_size;
    }
    int vector::size(){
        return m_size;
    }
    int vector::front(){
        return m_arr[0];
    }
    void vector::relocate(){
        int* temp = new int[m_capacity];
        for(int i = 0; i < m_size;++i){
            temp[i] = m_arr[i];
            
        }
        delete [] m_arr;
        m_arr = temp;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    stu::vector a;
    a.push_back(5);
    a.push_back(51);
    a.relocate();
    //a.pop_back();
    a.at(1) = 99;
    for(stu::vector::iterator i=a.begin(); i < a.end() ; ++i){
        std::cout << *i << std::endl;
    }
    std::cout << " ";
    return 0;
}
