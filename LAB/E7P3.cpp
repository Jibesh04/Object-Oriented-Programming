/* Create N number of vehicle objects of vehicle class which contains data members:
    Vehicle brand
    Colour (Colour)
    Weight
    Max-Speed
    Mileage
Write appropriate member functions to initialize and display properties.
Add a static member function change-colour to the class for changing the colour of any object of the same class.*/
#include <iostream>
#include <cstring>
using namespace std;
class Vehicle{
        string brand;
        static int count;
        static string colour;
        float weight, max_speed, mileage;
    public:
        Vehicle(){
            if(count == 0){
                cout<<"Enter the colour: ";
                cin>>colour;
            } // Only once for the whole class
            cout<<"Vehicle Number "<<++count;
            cout<<"\n\tBrand: ";
            cin>>brand;
            cout<<"\tWeight (tonne): ";
            cin>>weight;
            cout<<"\tMax Speed (mph): ";
            cin>>max_speed;
            cout<<"\tMileage (m/l): ";
            cin>>mileage; 
        }
        static void change_colour(string);
        void display();
};
string Vehicle::colour;
int Vehicle::count;
void Vehicle::change_colour(string new_col){
    colour = new_col;
    cout<<"Colour has been updated\n";
}
void Vehicle::display(){
    cout<<"\tBrand: "<<brand<<"\n\tColour: "<<colour<<"\n\tWeight: "<<weight<<"\n\tMax Speed: "<<max_speed<<" MPH\n\tMileage: "<<mileage<<" M/L\n";
}
int main(){
    int n;
    cout<<"Enter number of vehicles: ";
    cin>>n;
    Vehicle Car[n];
    cout<<"The First Vehicle Details...\n";
    Car[0].display();
    Vehicle::change_colour("Black");
    cout<<"After Changing Colour...\n";
    Car[0].display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o E7P3.exe .\E7P3.cpp
PS D:\Junior\Study\Object-Oriented-Programming> ./E7P3.exe
Enter number of vehicles: 3
Enter the colour: Blue
Vehicle Number 1
        Brand: Audi
        Weight (tonne): 21
        Max Speed (mph): 200
        Mileage (m/l): 18
Vehicle Number 2
        Brand: Kia
        Weight (tonne): 18
        Max Speed (mph): 220
        Mileage (m/l): 8
Vehicle Number 3
        Brand: Suzuki
        Weight (tonne): 25 
        Max Speed (mph): 175
        Mileage (m/l): 15
The First Vehicle Details...
        Brand: Audi
        Colour: Blue
        Weight: 21
        Max Speed: 200 MPH
        Mileage: 18 M/L
Colour has been updated
After Changing Colour...
        Brand: Audi
        Colour: Black
        Weight: 21
        Max Speed: 200 MPH
        Mileage: 18 M/L
*/