#include <bits/stdc++.h>
using namespace std;

class ComplexNumber{
    int real, img;
    
    public:
    ComplexNumber(int r=0, int i=0){
        real = r;
        img = i;
    }
    ComplexNumber operator+(ComplexNumber obj){
        ComplexNumber temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
    void display(){
        cout << real << " + " << img << "i\n";
    }
};

int main() {
    ComplexNumber obj1(5,3);
    ComplexNumber obj2(3,5);
    ComplexNumber obj3;
    obj3 = obj1 + obj2;
    obj3.display();
    
    return 0;
}
