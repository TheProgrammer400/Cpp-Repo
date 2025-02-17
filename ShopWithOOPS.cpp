#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int price[100];
    int quantity[100];
    int billOfEach[100];
    int totalPrice;
    int counter;
    int noOfItems;
    void getPriceId(void);
    void printing(void);
    void calculating(void);
    void init(void);
    void setItems(void);
    
    public:
        Shop(void);
};

Shop :: Shop(void){
    setItems();
}

void Shop :: setItems(void){
    cout<<"Enter no. of items: ";
    cin>>noOfItems;

    init();

    for(int i=0; i<noOfItems; i++){
        getPriceId();
    }

    calculating();
    printing();
}

void Shop :: init(void){
    counter = 0;
    totalPrice = 0;
}

void Shop :: getPriceId(void){
    cout<<"Enter the Id of product "<<counter+1<<": ";
    cin>>itemId[counter];
    cout<<"Enter the price of product "<<counter+1<<": ";
    cin>>price[counter];
    cout<<"Enter the quantity of product "<<counter+1<<": ";
    cin>>quantity[counter];
    counter++;
}

void Shop :: printing(void){
    for(int i=0; i<counter; i++){
        cout<<"Total price of product with Id "<<itemId[i]<<" with quantity "<<quantity[i]<<" is "<<billOfEach[i]<<endl;
    }

    cout<<"Total amount to be paid: "<<totalPrice<<endl;
}

void Shop :: calculating(void){
    for(int i=0; i<counter; i++){
        billOfEach[i] = price[i] * quantity[i];
        totalPrice = totalPrice + billOfEach[i];
    }
}

int main(){
    Shop customer;
    return 0;
}