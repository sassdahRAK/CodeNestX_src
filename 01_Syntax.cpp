#define PI_VALUE = 3.14
#include <iostream>

int mains(){
    int a = -2;
    if (a == 0){
        std::cout << a;
    }else if (a == 1){
        std::cout << a;
    }else if (a == 2){
        std::cout << a;
    }else {
        std::cout << "else block";
    }

    if (a == 0){
        std::cout << a;
    } 
    if (a == 1){
        std::cout << a;
    }
    // nested if
    if (a == 0){
        if (a > 1){
            std::cout << a;
        }else {
            std::cout << "else block";
        }
    }
    return 0;
}

int main(){
    int a;
    std::cout << "please in put any number: ";
    std::cin >> a;
    return 0;
    if (a == 0){
        std::cout << "the zero number not accept";
        return 0;
    }
    std::cout << 5 / a;
    return 0;
}

/**
 *  homework
 *  apply if, else if, nested if
 *  create a mini program use if statement to solve real-world problem
 */

