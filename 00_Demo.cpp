#include <iostream>
using namespace std;
#include <string>

class Missile{
    public:
        int distance;
        string missileType;

        //constructor
        Missile (int distinces, string type){
            this->distance = distinces;
            this->missileType = type;
        }

        // method
        void display(){
            cout << "Type:" << this->missileType << "Distince:" << this->distance;
        }
};
int main(){
    Missile* missile = new Missile(1000,"PHL03");
    missile->display();
    return 0;
}