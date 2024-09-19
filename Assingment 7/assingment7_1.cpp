#include <iostream>
#include <string>
using namespace std;


class Product {
protected:
    int id;
    string title;
    double price;

public:
    virtual void acceptDetails() = 0;   
    virtual double calculateFinalPrice() = 0; 
    virtual void displayDetails() = 0; 

    
};


class Book : public Product {
    string author;

public:
    void acceptDetails() {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Book Author: ";
        getline(cin, author);
        cout << "Enter Book Price: ";
        cin >> price;
    }

    double calculateFinalPrice()  {
        return price - (price * 0.10);  
    }

    void displayDetails() override {
        cout << "Book ID: " << id << ", Title: " << title << ", Author: " << author << ", Price: $" << price << endl;
        cout << "Price after 10% discount: $" << calculateFinalPrice() << endl;
    }
};


class Tape : public Product {
    string artist;

public:
    void acceptDetails()  {
        cout << "Enter Tape ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Tape Title: ";
        getline(cin, title);
        cout << "Enter Tape Artist: ";
        getline(cin, artist);
        cout << "Enter Tape Price: ";
        cin >> price;
    }

    double calculateFinalPrice()  {
        return price - (price * 0.05);  
    }

    void displayDetails()  {
        cout << "Tape ID: " << id << ", Title: " << title << ", Artist: " << artist << ", Price: $" << price << endl;
        cout << "Price after 5% discount: $" << calculateFinalPrice() << endl;
    }
};


void purchaseProducts(Product* arr[], int size) {
    for (int i = 0; i < size; ++i) {
        int choice;
        cout << "\nPurchase Product " << i + 1 << " (1. Book  2. Tape): ";
        cin >> choice;

        if (choice == 1) {
            arr[i] = new Book();  
        } else if (choice == 2) {
            arr[i] = new Tape();
        } else {
            cout << "Invalid choice! Please choose again.\n";
            --i;  
            continue;
        }

        arr[i]->acceptDetails(); 
    }
}


void displayBill(Product* arr[], int size) {
    double totalBill = 0;
    cout << "\n\nFinal Bill:\n";
    for (int i = 0; i < size; ++i) {
        arr[i]->displayDetails();
        totalBill += arr[i]->calculateFinalPrice();
        cout << "----------------------" << endl;
    }
    cout << "Total Bill: $" << totalBill << endl;
}

int main() {
    const int SIZE = 3;
    Product* arr[SIZE];  

    purchaseProducts(arr, SIZE);  
    displayBill(arr, SIZE);      

  

    return 0;
}
