#include<iostream>
#include<cstdlib>
using namespace std;

class Book{
    string author;
    string title;
    float price;
    string publisher;
    int stock;
    int count;

    void modifyPrice(int n){
        price = n;
    }

    void modifyStock(int n){
        stock = stock - n;
    }

    public:
        Book(string author, string title, float price, string publisher, int stock){
            this->author = author;
            this->title = title;
            this->price = price;
            this->publisher = publisher;
            this->stock = stock;
        }

        string getTitle() {
            return title;
        }

        float getPrice() {
            return price;
        }

        int getStock() {
            return stock; 
        }

        friend void buyBook(int num, string arr[], Book pushtak, int Count);
};

void buyBook(int num, string arr[], Book pushtak, int Count){
    int copies;
    cout<<"Enter the no. of copies to buy: ";
    cin>>copies;

    if (copies > pushtak.stock){
        cout<<"Not enough copies in the stock!"<<endl;
    } else {
        cout<<"Transaction successful!"<<endl;
        cout<<"Amount to be paid: "<<pushtak.price * copies<<endl;
        pushtak.modifyStock(copies);
        Count++;
    }
}

int main(){
    int n = 2;
    Book* ptr[n];
    int count = 0;

    string bookName[n];

    for(int i=0; i<n; i++){
        string givenAuthor;
        string givenTitle;
        float givenPrice;
        string givenPub;
        int givenStock;

        cout<<"Enter the information of book "<<i+1<<": "<<endl;

        cout<<"Enter the author of book "<<i+1<<": ";
        getline(cin, givenAuthor);

        cout<<"Enter the title of book "<<i+1<<": ";
        getline(cin, givenTitle);

        cout<<"Enter the price of book "<<i+1<<": ";
        cin>>givenPrice;

        cin.ignore();

        cout<<"Enter the publication of book "<<i+1<<": ";
        getline(cin, givenPub);

        cout<<"Enter the stock of book "<<i+1<<": ";
        cin>>givenStock;

        cin.ignore();

        ptr[i] = new Book(givenAuthor, givenTitle, givenPrice, givenPub, givenStock);
        bookName[i] = givenTitle;
    }

    string title;
    cout<<"Enter the book you want to buy: ";
    cin>>title;

    int found = 0;

    for(int i=0; i<n; i++){
        if (title == bookName[i]);
        found = 1;

        buyBook(1, bookName, *(ptr[i+1]), count);
        exit(0);
    }

    cout<<"No book found!"<<endl;
    
    return 0;
}