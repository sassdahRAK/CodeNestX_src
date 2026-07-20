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

// int array = {1000, 101001, 10100, 5434545,....};

struct Drink
{
    string name;
    int price;
    string type;
};

// function

int total(Drink* myDrink, int num){
    return myDrink->price * num;
}
int main(){
    int num = 3;
    Drink coffee;  // 0x100 -> .price 3$ : 3 * 3 = 9

    Drink& ref = coffee;

    ref.name = "coffee late";
    ref.price = 3; //$
    ref.type = "coffee";

    int comput_total = total(&ref, num);

    int *my_prt;
    int array[100];

    cout << comput_total << endl;
    // int x = 10;
    // int& lucky = x; // crteate an alias name for x
    // int y = x; // copy value to y

    // cout << "address of x: " << &x << endl;
    // cout << "address of lucky: " << &lucky << endl;
    // cout << "address of y: " << &y << endl;

    // cout << "value of x: " << x << " - " << "value of lucky: " << lucky << endl;
    // lucky = 90;
    // cout << "modified: value of x: " << x << " - " << "value of lucky: " << lucky << endl;

    // const int n = 10;
    // const int& ref = n; // rule: create with init

    return 0;
}

int main1()
{
    int x = 5; 
    int *p = &x; //&x == 0x7ffdb42e097c
    int *p1 = &x;
    
    int *p3 = &x; // read already
    cout << *p3 <<endl;
    // read file from data.csv to *p3
    if (p3 == nullptr){
        cout << "read from data.csv fail." << endl;
        return 0;
    }
    int total = *p3 * 3;
    
    
    if (p == p1){
        cout << "equal!" <<endl;
    }else {cout << "not equal!"<<endl;}
    
    cout<< p <<endl;
    return 0;
    
}