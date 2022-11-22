#include<iostream>
using namespace std;

class Sample{
    int a, b, c;
    float average_num;
  public:
    void input(int x, int y, int z){
      a = x;
      b = y;
      c = z;
    }
    void display(Sample S);
    friend float average(Sample);
};

float average(Sample S){
    return (float)(S.a + S.b + S.c)/3.0;
}

void Sample::display(Sample S){
    cout<<"Average: "<<average(S)<<endl;
}

int main(){
  Sample S1;
  S1.input(4, 5, 6);
  S1.display(S1);
  return 0;
}

/* TERMINAL
Average: 5
*/