#include<iostream>
#include<math.h>
using namespace std;
class Area{
    float result;
  public:
    void area(float, float, float);
    void area(float, float);
    void area(int);
    void area(float);
    void output();
};
void Area::area(float radius){
  result = 3.14159 * radius * radius;
}
void Area::area(int side){
  result = side * side;
}
void Area::area(float a, float b, float c){
  float s = (a + b + c)/2.0;
  result = sqrt(s * (s - a) * (s - b) * (s - c));
}
void Area::area(float l, float b){
  result = l * b;
}
void Area::output(){
  cout<<"Area = "<<result<<endl;
}
int main(){
  Area a1;
  float a = 5.5;
  a1.area(a);
  a1.output();
  a1.area(2);
  a1.output();
  a1.area(4.1, 2, 3.3);
  a1.output();
  a1.area(2.3, 3.2);
  a1.output();
  return 0;
}

/* TERMINAL
Area = 95.0331
Area = 4
Area = 3.2649
Area = 7.36
*/