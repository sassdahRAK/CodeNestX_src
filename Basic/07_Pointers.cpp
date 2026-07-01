#include <stdio.h>

// int main1(){

//     int x = 10;
//     int& ref = x;

//     printf("%p \n",ref);
//     return 0;
// }

// int , float, 

#include <iostream>
using namespace std;

int array = {1000, 101001, 10100, 5434545,....};

int main(){
    int x = 10;
    int& lucky = x; // crteate an alias name for x
    int y = x; // copy value to y

    cout << "address of x: " << &x << endl;
    cout << "address of lucky: " << &lucky << endl;
    cout << "address of y: " << &y << endl;

    cout << "value of x: " << x << " - " << "value of lucky: " << lucky << endl;
    lucky = 90;
    cout << "modified: value of x: " << x << " - " << "value of lucky: " << lucky << endl;

    const int n = 10;
    const int& ref = n; // rule: create with init

    return 0;
}