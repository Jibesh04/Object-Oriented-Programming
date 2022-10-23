#include<iostream>
using namespace std;
class Items{
    int n;
    int item_code[10];
    int item_price[10];
    int item_qty[10];
    int price();
  public:
    void input();
    void add();
    void delete_n(int i);
    void display();
};
void Items::input(){
  cout<<"Enter the number of items: ";
  cin>>n;
  for(int i = 0; i < n; i++){
    cout<<"Item Code: ";
    cin>>item_code[i];
    cout<<"Item Price: ";
    cin>>item_price[i];
    cout<<"Item Quantity: ";
    cin>>item_qty[i];
  }
}
void Items::add(){
  cout<<"Item Code: ";
  cin>>item_code[n];
  cout<<"Item Price: ";
  cin>>item_price[n];
  cout<<"Item Quantity: ";
  cin>>item_qty[n];
  n++;
}
void Items::delete_n(int i){
  for(int j = n - 1; j > i; j--){
    item_code[j + 1] = item_code[j];
    item_price[j + 1] = item_price[j];
    item_qty[j + 1] = item_qty[j];
  }
  n--;
}
int Items::price(){
  int price = 0;
  for(int j = 0; j < n; j++)
    price += item_price[j] * item_qty[j];
  return price;
}
void Items::display(){
  cout<<"Total Cost: "<<price()<<endl;
}
int main(){
  Items i1;
  i1.input();
  int option;
  while(true){
    cout<<"Choose an operation: "<<endl;
    cout<<"1.Add\n2.Delete\n3.Calculate"<<endl;
    cin>>option;    
    switch(option){
      case 1:
        i1.add();
        break;    
      case 2:
        int idx;
        cout<<"Enter the index: ";
        cin>>idx;
        i1.delete_n(idx);
        break;
      case 3:
        i1.display();
        return 0;
      default:
        cout<<"Enter a valid option: ";
        cin>>option;    
    }
  }
}

/* TERMINAL
> g++ -o array_in_objects.exe .\array_in_objects.cpp
> .\array_in_objects.exe
Item Code: 1
Item Price: 1998
Item Quantity: 2
Item Code: 2
Item Price: 459
Item Quantity: 1
Item Code: 3
Item Price: 279
Item Quantity: 3
Choose an operation: 
1.Add
2.Delete
3.Calculate
2
Enter the index: 2
Choose an operation: 
1.Add
2.Delete
3.Calculate
1
Item Code: 2
Item Price: 399
Item Quantity: 1
Choose an operation: 
1.Add
2.Delete
3.Calculate
3
Total Cost: 4854
*/