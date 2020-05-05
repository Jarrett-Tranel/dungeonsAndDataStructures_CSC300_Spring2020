#ifndef Student_hpp
#define Student_hpp

#include <string>

using namespace std;

class Room;
class Student
{
    private:
        string name;
        Room* currentRoom;

    public:
        Student(string name);
        string getName();
        Room* getCurrentRoom();
        void setCurrentRoom(Room* aRoom);
};

#endif