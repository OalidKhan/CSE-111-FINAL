#include <bits/stdc++.h>
using namespace std;

void checkTemperature(int temp){
    if(temp < -273.15){
        throw invalid_argument("Invalid Temprature");
    }
}

int main() {
    int temp;
    cin >> temp;
    
    try{
        checkTemperature(temp);
        cout << "Temprature: " << temp << endl;
    }
    catch(const invalid_argument e){
        cout << e.what() << endl;
    }
    
    return 0;
}
