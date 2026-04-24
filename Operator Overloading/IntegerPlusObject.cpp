#include <bits/stdc++.h>
using namespace std;

class X{
    int value;
    
    public:
    X(int val=0){
        value = val;
    }
    void display(){
        cout << value << endl;
    }
    
    friend X operator-(int v, X obj);
};

X operator-(int v, X obj){
    X temp;
    temp.value = v - obj.value;
    return temp;
}

int main() {
    X obj(45);
    X OBJ;
    OBJ = 90 - obj;
    OBJ.display();
    
    return 0;
}
