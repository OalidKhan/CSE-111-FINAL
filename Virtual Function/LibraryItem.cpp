#include <bits/stdc++.h>
using namespace std;

class LibraryItem{
    protected:
    string title;
    int itemID;
    public:
    LibraryItem(string t, int id){
        title = t;
        itemID = id;
    }
    virtual int getBorrowDays()=0;
    virtual void display(){
        cout << "Title: " << title;
        cout << "\nItem ID: " << itemID << endl;
    }
};

class Book : public LibraryItem{
    public:
    string AuthorName;
    int NumberOfPages;
    Book(string t, int id, string an, int np) : LibraryItem(t,id){
        AuthorName = an;
        NumberOfPages = np;
    }
    int getBorrowDays(){
        return 14;
    }
    void display(){
        LibraryItem :: display();
        cout << "Author Name: " << AuthorName << endl;
        cout << "Number of Pages: " << NumberOfPages << endl;
    }
};

class Magazine : public LibraryItem{
    public:
    int issueNumber;
    Magazine(string t, int id, int in) : LibraryItem(t,id){
        issueNumber = in;
    }
    int getBorrowDays(){
        return 7;
    }
    void display(){
        cout << "Issue Number: " << issueNumber << endl;
    }
};

int main() {
    Book obj1("KUTTA", 248, "OALID KHAN", 469);
    Magazine obj2("CUTE CAT", 245, 856);
    
    LibraryItem *ptr;
    // ptr -> display();
    ptr = &obj1;
    ptr -> display();
    cout << "Book can be borrowd for: " << ptr->getBorrowDays() << endl;
    ptr = &obj2;
    ptr -> display();
    cout << "Magazine can be borrowd for: " << ptr->getBorrowDays() << endl;

return 0;
}
