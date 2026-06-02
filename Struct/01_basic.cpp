#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name;
    int age;
    string contact;
};

// 3 1.default constructor, 2.primary constructor 3.secondary constructor.

/** Memory Block
 * 1. 3
 * 2. 5343434343
 * ...
 * 100.
 */
/** default constructor
 * accountName = "" 
 * type = ""
 * amount = 56453454 gabage
 * accountId = 23434343
 */
struct BankAccount{
    // default value
    string account_name = "";
    string type = "";
    int amount = 0;  // gabage value
    int accountId = 0;

    /**
     * default constructor should have only one inside struct or class
     */
    // default constructor
    BankAccount() = default;

    // defalult constructor
    BankAccount(): account_name(""), type(""), amount(0), accountId(0) {}

    // primary constructor
    BankAccount(string name,
         string type, 
         int amount, 
         int id) : 
         account_name(name), 
         type(type),
         amount(amount), 
         accountId(id) {
        // cout << "name" << name << endl;
        // cout << i << endl;
    }

};
/**
 * type convention 
 *    - structure PascalCase
 *    - class PascalCase
 *    - function camelCase
 *    - variable snake_case
 *    - instance | obj camelCase
 *  
 *  default constructor:
 *    - build in: it auto have when their is no manual constructor. but it break if we create one constructor inside struct.
 *    - use default keyward 
 *    - init value with out pass parameter 
 */
struct Product{
    float price; // 10 byte - stack 1010 0000 101020...
    int num; // 4 byte - stack 
    string type; // heap - "hi I am virak" 1010 1010 1010 1010 1010 1010 ... (13 byte)
    string brand; // 

    Product() = default;
};


struct Drink{
    int quantiy;
    float price;
    // BankAccount(): account_name(""), type(""), amount(0), accountId(0) {}
};

/**
 * return type function -> int
 * parameter -> value pass to funciton to be exec.
 *       : f(x,y,z) = 2*x + 1 + z + 3*y
 *       : f(1) = 
 */
int my_first_function(int x){
    x = 2*x + 1;
    return x;
}
int main(){
    
    int user_name; //keep 4 byte memory to my program -> gabage value       
    user_name = 123;

    // Drink mathcha;
    // Drink coca;
    // int choice;

    int my_num;
    Person p1;
    p1.name = "virak";
    p1.age = 13;
    p1.contact = "+885 1293434232";

    Person p3 = {.age = 3, .contact = "+885 3434343", .name = "tyty"};

    Person p2; 
    p2.name = "vitin";
    p2.age = 3;
    p2.contact = "+845 239232233";

    cout << "name: " << p2.name << endl;
    cout << "age: " << p1.age << endl;
    cout << "contact: " << p1.contact << endl;

    // Research how to use or access default constructor
    BankAccount ac;
    ac.account_name = "labubu";

    int my_value = my_first_function(1); //3

    BankAccount aba("my Account", "Saving account", 1000, 113527);
    // int my_num;

    Product veaJa;

    return 0;
}
