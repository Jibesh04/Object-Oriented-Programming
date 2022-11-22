#include <iostream>
using namespace std;
class Time{
    int hrs, mins, sec;
  public:
    void input(int h, int m, int s){
      hrs = h;
      mins = m;
      sec = s;
    }
    void display(){
      cout<<hrs<<" hours "<<mins<<" minutes "<<sec<<" seconds"<<endl;
    }
    void sum(Time, Time);
};
void Time::sum(Time T1, Time T2){
  sec = T1.sec + T2.sec;
  if(sec >= 60){
    mins = sec/60;
    sec %= 60;
  }
  mins += T1.mins + T2.mins;
  if(mins >= 60){
    hrs = mins/60;
    mins %= 60;
  }
  hrs += T1.hrs + T2.hrs;
}
int main(){
  Time T1, T2, T3;
  T1.input(12, 36, 25);
  T2.input(3, 54, 50);
  T3.sum(T1, T2);
  T1.display();
  T2.display();
  T3.display();
  return 0;
}

/* TERMINAL
12 hours 36 minutes 25 seconds
3 hours 54 minutes 50 seconds
16 hours 31 minutes 15 seconds
*/