#include <iostream>
using namespace std;

int main(){
    float a = 6.9;
    int b = 2;
    float sum = int(a / b);
    float minus = a - b;
    auto multiple = a * b;
    auto mynum = 'c';
    mynum = 1 ;
    cout <<  mynum;
    auto name = 2;
    float c = 0.1;
    float d = 0.2;
    float e = c + d;
    // 01010111
    // 0.1 == 
    if (2 ==e ){
        cout << "equal";
    }else{
        cout << "bug"<<endl;
    }
    // cout<< multiple;
    
    int result = 123;
    float x = 3;
    float y = 2;
    result = result % 6 / x * y - x/2 * y;
    //123 % 6 / 3 * 2 - 3/2 * 2
    //3 / 3 * 2 - 3/2 * 2
    //2 - 3/2 * 2
    //2 - 3 = -1 
    // result = x + y / 2;
    // result = x - y * (2*y) / y;
    // result = ((--x) + (y++)) / 3;
    //x = x-1
    //y = y
    // result = (0 + (-1))/3;
    // y = y + 1
    // result = result + result / result % result;
    // 7 + 7 / 7 % 7
    // 7 + 1 % 7
    // 7 + 1 = 8
    cout << "result=" << result << endl;
    cout << "x =" << x << endl;
    cout << "y =" << y << endl;
    int a = 3;
    int b = 1;
    a &= b;
    a?
    return 0;
}