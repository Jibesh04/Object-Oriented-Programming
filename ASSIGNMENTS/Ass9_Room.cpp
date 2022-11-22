/* Design a class Room having data members height, width and length.
Calculate the area and volume of the room. Use constructor for initialization
of data members. Use a copy constructor for calculating the area of
two similar rooms. */
#include <iostream>
using namespace std;
class Room{
        float height, width, length;
        double area, volume;
    public:
        Room(){
            cout<<"\tEnter height: ";
            cin>>height;
            cout<<"\tEnter width: ";
            cin>>width;
            cout<<"\tEnter length: ";
            cin>>length;
        }
        Room(int h, int w, int l){
            height = h;
            width = w;
            length = l;
        }
        Room(Room &R){
            height = R.height;
            width = R.width;
            length = R.length;
        }
        void Area();
        void Volume();
};
void Room::Area(){
    area = width * length;
    cout<<"\tArea = "<<area<<" sq unit"<<endl;
}
void Room::Volume(){
    volume = height * width * length;
    cout<<"\tVolume = "<<volume<<" cubic unit"<<endl;
}
int main(){
    Room R1;
    Room R2(R1);
    cout<<"For room 1"<<endl;
    R1.Area();
    R1.Volume();
    cout<<"For room 2"<<endl;
    R2.Area();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass9_Room.exe .\Ass9_Room.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass9_Room.exe
        Enter height: 12.5
        Enter width: 21
        Enter length: 67.4
For room 1
        Area = 1415.4 sq unit
        Volume = 17692.5 cubic unit
For room 2
        Area = 1415.4 sq unit
*/