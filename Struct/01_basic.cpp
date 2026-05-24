#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name;
    int age;
    string contact;
};

// 3 1.default constructor, 2.primary constructor 3.secondary constructor.


/**
 * 1. 3
 * 2. 5343434343
 * ...
 * 100.
 */
/**
 * // default constructor
 * accountName = "" 
 * type = ""
 * amount = 56453454 gabage
 * accountId = 23434343
 */
struct BankAccount{
    string accountName;
    string type;
    int amount;
    int accountId;

    BankAccount(string name, string type, int amount, int id) : accountName(name), type(type), amount(amount), accountId(id) {
        // cout << "name" << name << endl;
        // cout << i << endl;
    }

    // cout << name << endl;
    // cout << accountName << endl;

    // for(int i = 0; i < 10; i++){

    // }
    // cout << i << endl;

};

struct Drink{

    int quantiy;
    float price;

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
    
    // Drink mathcha;
    // Drink coca;
    
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

    BankAccount ac("my Account", "Saving account", 1000, 113527);

    int my_value = my_first_function(1); //3

    BankAccount ABA("my Account", "Saving account", 1000, 113527);
    int my_num;
    return 0;
}
