/* Write a program to convert the time given in hours and minutes into number of seconds. */
#include <iostream>
using namespace std;
class Time{
        int hr, mins;
    public:
        Time(){hr = mins = 0;}
        Time(int h, int m){hr = h; mins = m;}
        operator int(){
            int sec;
            sec = hr * 3600 + mins * 60;
            // cout<<sec<<" secondss\n";
            return sec;
        }
        void display(){
            cout<<hr<<" hours : "<<mins<<" minutes\n";
        }
};
int main(){
    Time t1(1, 23);
    t1.display();
    int t2 = (int)t1;
    cout<<t2<<" seconds"<<endl;
    return 0;
}

/* OUTPUT
1 hours : 23 minutes
4980 seconds
 */