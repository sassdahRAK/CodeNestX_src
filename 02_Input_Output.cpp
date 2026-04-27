/**
 * print immediate value vs Stored value
 * print number 3 + 3, 3 * 5, "3 + 2"
 * print string "str" << var << "str" << endl;
 * print 3 + 3, 3 * 5, "3 + 2"
 * using \n, endl, + , << , `$myVar`
 * using \t , \\ , \" , 
 * compare printf vs cout
 */
#include <string>
#include <iostream> 

int main0(){
    int val = 10;
    std::string str = "my value";
    std::cout << "hello" << std::endl;
    std::cout << "hit", val, str; // not recommended
    std::cout << "hi my friend"  "im here to assist you" << std::endl;
    std::cout << "with str and object" + str + "is" <<std::endl; // no space include 
    std::printf("");
    return 0;
}
// method


/**
 * input
 * str
 * int , size_t, long, short, unsign
 * flaot, double
 * char
 * bool
 */

// ------------------------------------------------------------------
//    compare input/output c vs c++
// ------------------------------------------------------------------

// 
#include <stdio.h>

int main1(){
    // "string";// 'a' 'd' 'f' 'g' , "hello" "hi my name is virak" 
    printf("4 + 7");
    int a = 6 *(4-5);
    printf("%d", a);
    float x = 7.044343;
    printf("Hello ");
    printf("virak\n");
    printf("My value is %.2f integer \n", x);
    // Hello virak
    return 0;
}


#include <iostream>

int main2(){
    int x = 3;
    std::cout << "Hello " << "virak" <<std::endl;
    std::cout << "My value X is " << x << " integer" << std::endl;
    std::cout << 6 *(4-5) << std::endl;
    std::cout << "\"";
    std::cout << "\thello my is ... i am .. year old." ;
    return 0;
}
// input c
int main3(){
    int my_input;
    scanf("%d",&my_input);
    return 0;
}
// input c++
int main4(){
    int my_input;
    std::cin >> my_input;
    return 0;
}


#include <string>
int main5(){
    std::string my_name = "tyty";
    int x = 2;
    int y = 3;
    bool isTrue = x < y && x % y == 0;
    int n = 1 , y = 2;
    int z;
    z = 0;
    if (isTrue){
        std::cout << "if statement work";
    }else {
        std::cout << "else statement work";
    }
    if (x < y){

    }
    return 0;
}

/**
 * function
 * class
 * normal variable
 */

class PascalCase{

};

int main(){
    int camelCase; // normal variable 
    char PascalCase; // not recommend use for class only
    std::string snake_case; // not recommend use in database 
    const int UPPER_SNAKE_CASE = 4;
    const int PY_VALUE = 3.14;
    long Sovanvirak_Vean; // file name 

    // int 2myVar;
    // std::string my variable;
    // char #myVer, @myVer, ...;
    // float a&b;

    return 0;
}

int myFunction(){

    return 0;
}
class Myclass{

};

#include <stdio.h>
#define  MY_CONSTANCES 10

int mian(){
    const int MY_CONSTANCE = 990;
    
    int i = 0;
    while(MY_CONSTANCES-i < 0){
        i --;
    }

    do{
        i --;
    }while (MY_CONSTANCE-i < 0);
    
    return 0;
}