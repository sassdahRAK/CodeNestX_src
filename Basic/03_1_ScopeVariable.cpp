/**
 * 1. acessibility 
 * 2. shadow method
 */

#include <iostream> 
#include <string>
// global variable
int g = 20;
int computes(){
    return g * 2;
}
int compute(){
    return l * 2; // error: 'l' was not declared in this scope
}
int main(){

    // local variable
    int g = 10;
    int valueG = g;
    for (int g = 0; g < 5; g++){
        // block variable
        int g = 5;
        std::cout << "block variable b: " << ::g << std::endl;
        std::cout << "i value: " <<  valueG<< std::endl;
    }
    std::cout << "block variable b: " << ::g << std::endl;
    std::cout << i << std::endl; // error: 'i' was not declared in this scope
    return 0;
}

std::cout << "block variable b: " << g << std::endl;

