#include <bits/stdc++.h>
using namespace std;

void checkMarks(int marks){
    if(marks < 0 || marks > 100){
        throw invalid_argument("Invalid Argument");
    }
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    
    try{
        checkMarks(marks);
        cout << "Valid Marks: " << marks << endl;
    }
    catch (const invalid_argument e){
        cout << e.what() << endl;
    }
    
    return 0;
}
