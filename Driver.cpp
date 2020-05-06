#include <iostream>
#include "Student.hpp"
#include "Room.hpp"
#include "Door.hpp"
#include "Student.hpp"
#include "Item.hpp"

using namespace std;

int main()
{
    Student* theStudent = new Student("Mr. Gonzales");
    Room* lobby = new Room("Lobby");
    Room* serverRoom = new Room("Server Room");
    Room* esports = new Room("Esports");
    Room* locklairOffice = new Room("Lockair's Office");

    Door* d1 = new Door("north", serverRoom, "south", lobby);
    Door* d2 = new Door("west", locklairOffice, "east", lobby);
    Door* d3 = new Door("south", esports, "north", lobby);

    string command = "";
    lobby->addStudent(theStudent);

    Item* chainsaw = new Item("a running chainsaw");
    theStudent->addItem(chainsaw);
    lobby->addItem("A double sided gun");

    while(command != "quit")
    {
        theStudent->getCurrentRoom()->display();
        cout << "Where would you like to go?: ";
        cin >> command; 

        if(command == "backpack")
        {
            theStudent->displayBackpackContents();
        }
        else if(command == "drop")
        {
            theStudent->dropItem("a running chainsaw");
        }
        else if(command == "look")
        {
            theStudent->getCurrentRoom()->lookAround();   
        }
        else if(command == "pickup")
        {
            string pickUpItem;
            //cout << "What would you like to pick up? ";
            //cin >> pickUpItem;
            theStudent->pickupItem("A double sided gun");
        }
        else
        {
            theStudent->getCurrentRoom()->takeDoor(theStudent, command);
        } 
    }
    cout << "Goodbye!!!\n";
    return 0;
}