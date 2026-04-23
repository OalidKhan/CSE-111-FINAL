#include <bits/stdc++.h>
using namespace std;

class Distance{
    int feet, inch;
    
    public:
    Distance(int f=0, int i=0){
        feet = f;
        inch = i;
    }
    Distance operator+(Distance obj){
        Distance temp;
        temp.feet = feet + obj.feet;
        temp.inch = inch + obj.inch;
        return temp;
    }
    void display(){
        cout << feet << "' " << inch << "''\n";
    }
};

int main() {
    Distance obj1(5,6), obj2(4,8), obj3;
    obj3 = obj1 + obj2;
    obj3.display();
    
    return 0;
}
