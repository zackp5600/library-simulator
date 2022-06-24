#include <iostream>
using namespace std;
#include <string>
string book_1;
string book_2;
string book_3;

void menu(){
    cout << "\n*********Menu*********";
    cout << "\n1) Sign out book";
    cout << "\n2) sign in book";
    cout << "\n3) See my books";
    cout << "\n4) Exit";
    cout << "\n";
    
    }
void book1(){
    book_1 = {"Computer Science"};
}
void book2(){
    book_2 = {"Programming with C++"};
}
void book3(){
    book_3 = {"Python Programming"};
}
int main(){
    //Vars
    int choice;
    do
    {
        menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            int book_choice;
            cout << "\n**********************";
            cout << "\n1) Computer Science";
            cout << "\n2) Programming with C++";
            cout << "\n3) Python Programming";
            cin >> book_choice;
            switch (book_choice)
            {
                case 1:
                    book1();
                    break;
                case 2:
                    book2();
                    break;
                case 3:
                    book3();
                    break;
                default:
                    break;
            }
            break;
        case 2:
            int bookout;
           cout << "\n**********************";
           cout << "\nSigned out books: ";
           cout << "\n" << "\n1)"<< book_1 << "\n2)" << book_2 << "\n3)" << book_3;
           cout << "choose book to sign out";\
           cin >> bookout;
           switch (bookout)
           {
           case 1:
            book_1 = {""};
            break;
           case 2:
            book_2 = {""};
            break;
           case 3:
            book_3 = {""};
            break;
           default:
            break;
           }
        case 3:
            cout << "\n"<< book_1 << "\n" << book_2 << "\n" << book_3;
        
        default:
            break;
        }
    } while (choice != 4);
    
}
