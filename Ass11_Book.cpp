/* Design a class Books having data members author, title, price, publisher 
and stock position. Whenever a customer wants a book, it searches using title 
and author. Display whether the book is available or not using suitable member 
functions and constructors. */
#include <iostream>
#include <cstring>
#define MAX 30
using namespace std;
class Books{
        static int sl_no;
        char author[MAX], title[MAX], publisher[MAX];
        float price;
        int stock_psn;
    public:
        static int flag;
        Books(){
            cout<<"S.N. "<<sl_no++<<" Enter details..."<<"\n\tAuthor: ";
            fgets(author, MAX, stdin);
            fgets(author, MAX, stdin);
            cout<<"\tTitle: ";
            fgets(title, MAX, stdin);
            cout<<"\tPublisher: ";
            fgets(publisher, MAX, stdin);
            cout<<"\tPrice: Rs. ";
            cin>>price;
            cout<<"\tStock Position: ";
            cin>>stock_psn;
        }
        void available(){
            cout<<"Available\nStock Position: "<<stock_psn<<"\nPrice: Rs. "<<price<<endl;
        }
        void not_available(){
            cout<<"Not Available"<<endl;
        }
        void search(char t[], char a[]);
};
int Books::sl_no = 1;
int Books::flag = -1;
void Books::search(char t[], char a[]){
    if(strcmp(t, title) == 0 && strcmp(a, author) == 0){
        if(stock_psn > 0)
            available();
        else if(stock_psn == 0)
            not_available();
        flag = 1;
    }
    else{
        flag = 0;
    }
}
int main(){
    int n;
    cout<<"Enter number of items: ";
    cin>>n;
    Books B[n];
    char t[MAX], a[MAX], cont;
    label:
        cout<<"To check availability, Enter\n\tTitle: ";
        fgets(t, MAX, stdin);
        fgets(t, MAX, stdin);
        cout<<"\tAuthor: ";
        fgets(a, MAX, stdin);
        for(int i = 0; i < n; i++){
            B[i].search(t, a);
            if(Books::flag == 1)
                break;
        }
        if(Books::flag == 0)
            cout<<"Match Not Found"<<endl;
        cout<<"Search Again? (Y/N): ";
        cin>>cont;
        if(cont == 'Y' || cont == 'y')
            goto label;
    return 0;
}

/* TERMINAL
PS D:\New folder> g++ -o Ass11_Book.exe .\Ass11_Book.cpp
PS D:\New folder> .\Ass11_Book.exe
Enter number of items: 2
S.N. 1 Enter details...
        Author: Author 1
        Title: Title 1
        Publisher: Unknown
        Price: Rs. 200.50
        Stock Position: 2
S.N. 2 Enter details...
        Author: Author 2
        Title: Title 2
        Publisher: Demo
        Price: Rs. 500
        Stock Position: 0
To check availability, Enter
        Title: Title 2
        Author: Author 1
Match Not Found
Search Again? (Y/N): y
To check availability, Enter
        Title: Title 2
        Author: Author 2
Not Available
Search Again? (Y/N): y
To check availability, Enter
        Title: Title 1
        Author: Author 1
Available
Stock Position: 2
Price: Rs. 200.5
Search Again? (Y/N): n
*/