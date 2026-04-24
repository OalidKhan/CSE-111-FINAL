#include <bits/stdc++.h>
using namespace std;

class Room{
    int room_no,price;
    string size;
    
    public:
    Room(int r, int p, string s){
        room_no = r;
        price = p;
        size = s;
    }
    bool operator>(Room obj){
        if(price > obj.price)
        return true;
        else
        return false;
    }
    bool operator<(Room obj){
        if(price < obj.price)
        return true;
        else
        return false;
    }
};

int main() {
    Room room1(201, 15000, "KING");
    Room room2(202, 12000, "QUEEN");
    Room room3(203, 10000, "MINISTER");
    Room room4(204, 8000, "PAWN");
    if(room1>room2)
    cout << "Room 201 is bigger\n";
    else
    cout << "Room 202 is bigger\n";
    
    if(room3<room4)
    cout << "Room 203 is smaller\n";
    else
    cout << "Room 204 is smaller\n";
    
    return 0;
}
