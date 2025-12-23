// 9. Shopping Cart Total Using Dynamic Constructor 
// Create a class Item with price and quantity. 
// Use a constructor to dynamically allocate memory for price and quantity. 
// Calculate total cost = price × quantity. 
// Use destructor to free memory. 
 #include <iostream>
using namespace std;

class Item {
    int *price;
    int *quantity;

public:
    // Dynamic constructor
    Item(int p, int q) {
        price = new int;      
        quantity = new int;  
        *price = p;
        *quantity = q;
    }

    
    int totalCost() {
        return (*price) * (*quantity);
    }

    
    ~Item() {
        delete price;
        delete quantity;
        cout << "Memory freed for item." << endl;
    }
};

int main() {
    Item item1(150, 3);   
    cout << "Total Cost = Rs " << item1.totalCost() << endl;

    Item item2(200, 2);   
    cout << "Total Cost = Rs " << item2.totalCost() << endl;

    return 0;
}

