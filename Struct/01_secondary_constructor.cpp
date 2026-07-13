#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
// buil-in library
// external library 

using namespace std;

struct UserProfile{
    string user_name;
    bool img;
    string bio;
    int age;

    // default constructor
    UserProfile() = default;

    // primary constructor "Sovanvirak Vean"
    UserProfile(string name, 
            bool image, 
            string bio, 
            int age): 
            user_name(name), 
            img(image), 
            bio(bio), 
            age(age) 
    {
        // do something
    }

    // secondary constructor "Sovanvirak", "Vean"
    UserProfile(string first_name, 
            string last_name, 
            bool image, 
            string bio, 
            int age):
            user_name(first_name + ' ' + last_name), 
            img(image), 
            bio(bio), 
            age(age) 
    { 
        // do something
    }

    //Method == Function
    bool validate(){
        if (age < 18){
            return false;
        }
        return true;
    }
};

/** What is 'Function' ?
 *  - return
 *  - data-type
 *  - void -> return
 *  - Decription: Block of code, make our block of code reusable.
 * */
void display(UserProfile obj){
    cout << obj.user_name <<endl;
    cout << obj.img <<endl;
    cout << obj.bio <<endl;
    cout << obj.age <<endl;

    cout << "validation:" << obj.validate() << endl;
}

int main(){
    UserProfile myProfile;

    UserProfile myProfile1{};

    UserProfile myProfile2("Vitin Phum", true, "love only u muk muk", 20);

    UserProfile myProfile3("Sotheara", "Thoun", true, "I love cambodia.", 18);

    UserProfile array[4] = {myProfile, myProfile1, myProfile2, myProfile3};

    display(myProfile);
    display(myProfile1);
    display(myProfile2);
    display(myProfile3);
    
    // {myProfile, myProfile1, myProfile2, myProfile3}
    for (int i = 0; i < 4; ++i){
        cout << array[i].user_name <<endl;
        cout << array[i].img <<endl;
        cout << array[i].bio <<endl;
        cout << array[i].age <<endl;
    }

    return 0;
}