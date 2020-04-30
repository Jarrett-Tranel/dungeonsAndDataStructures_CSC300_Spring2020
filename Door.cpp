#include "Door.hpp"
#include "Room.hpp"

Door::Door(string directionToRoomA, Room* roomA, string directionToRoomB, Room* roomB)
{
    this->directionToRoomA = directionToRoomA;
    this->directionToRoomB = directionToRoomB;
    this->roomA = roomA;
    this->roomB = roomB;
    this->roomA->addDoor(this);
    this->roomB->addDoor(this);
}

bool Door::hasDirection(string direction)
{
    return directionToRoomA == direction || directionToRoomB == direction;
}

void getDoor(string direction)
{
    ...///
}

string Door::getDirectionToOtherRoom(Room* currentRoom)
{
    if(currentRoom == this->roomA)
    {
        return this->directionToRoomB;
    }
    else
    {
        return this->directionToRoomA;
    }
}