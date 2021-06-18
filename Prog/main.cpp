/* 
Name: Akhadbek Rizakulov
ID: U2010227 
Date: 17.03.2021
*/
#include<iostream> 
#include<string>
#include"Player.h"
using namespace std;

void menu();

int main()
{
    Player obj;
    int choice;
    menu();
    cin >> choice;

    while (choice != 6)
    {
        switch (choice)//Switch statement
        {
        case 1:
            obj.create_player();//call the function
            menu();
            cin >> choice;
            break;
        case 2:
            obj.display_player();//call the function
            menu();
            cin >> choice;
            break;
        case 3:
            obj.delete_player();//call the function
            menu();
            cin >> choice;
            break;
        case 4:
            cout << "Number of players : " << obj.countPlayer;//call the function
            menu();
            cin >> choice;
            break;
        case 0:
            cout << "Good bye" << endl;
            break;
        default:
            cout << "Choose One Out Of The 4" << endl;
            menu();
            break;
        }
    }
    system("pause");
    return 0;
}

void menu()
{
    cout << "\n";
    cout << "Please Choose\n";
    cout << "1. Create Player\n";
    cout << "2. Display Player Information\n";
    cout << "3. Delete Player\n";
    cout << "4. Number of Players\n";
    cout << "0. Exit\n";
    cout << "Enter your choice(0-4): ";
}
