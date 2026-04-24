#include <bits/stdc++.h>
using namespace std;

void checkAge(int age){
    if(age < 0 || age > 120){
        throw invalid_argument("Invalid Argument!!!");
    }
}

int main() {
    int age;
    cin >> age;
    try{
        checkAge(age);
        cout << "Your age: " << age << endl;
    }
    catch(const invalid_argument e){
        cout << e.what() << endl;
    }
    
    return 0;
}
