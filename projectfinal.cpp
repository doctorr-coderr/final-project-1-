#include <iostream>
#include <string>
using namespace std;
#define TAX_RATE_PREPROCESSOR 0.08

int main() {
    cout << " Welcome to the Product Sales Analyzer"<<endl
    cout << "This program helps a store track sales and inventory"<<endl;
    cout << "Reminder: C++ is a compiled language, so this code must be compiled before running."<<endl;

    string productName;
    int productCategory;
    int initialInventory;
    float productPrice;
    int itemsSold;
    int newInventory;
    float totalSalesAmount;
    string inventoryStatus;
    int sampleVar1 = 100;        
    int sampleVar2;              
    sampleVar2 = 200;            
    int sampleVar3{300};         
    
    const double TAX_RATE_CONST = 0.08;

    cout << "Enter product name (one word): ";
    cin >> productName;

    std::cout << "Enter product category (1-5): ";
    cin >> productCategory;

    cout << "Enter initial inventory quantity: ";
    cin >> initialInventory;

    cout << "Enter product price per unit: ";
    cin >> productPrice;

    cout << "Enter number of items sold: ";
    cin >> itemsSold;

    newInventory = initialInventory;
    newInventory -= itemsSold; 
    totalSalesAmount = itemsSold * productPrice;

    auto totalSalesHelper = totalSalesAmount;
    decltype(initialInventory) anotherInventoryHelper = 50; 

    inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";

    if (productCategory < 1 || productCategory > 5) {
        std::cout << "Invalid product category. Please enter a value between 1 and 5."<<endl;
        return 1; 
    }

    cout << "Product Category: ";
    switch (productCategory) {
        case 1: cout << "Category 1: Electronics"<<endl; break;
        case 2: cout << "Category 2: Groceries"<<endl; break;
        case 3: cout << "Category 3: Clothing"<<endl; break;
        case 4: cout << "Category 4: Stationery"<<endl; break;
        case 5: cout << "Category 5: Miscellaneous"<<endl; break;
    }

    cout << "Printing Receipt";
    for (int i = 1; i <= itemsSold; i++) {
        std::cout << "Item " << i << " - Price: $" << productPrice <<endl;
    }
    cout << "Sales and Inventory Report"<<endl;
    cout << "Product Name: " << productName<<endl;
    cout << "Product Category: " << productCategory <<endl;
    cout << "Initial Inventory: " << initialInventory <<endl;
    cout << "Items Sold: " << itemsSold <<endl;
    cout << "New Inventory: " << newInventory <<endl;
    cout << "Total Sales Amount: $" << totalSalesAmount <<endl;
    cout << "Inventory Status: " << inventoryStatus <<endl;
    
    cout << "Tax Rate (Preprocessor Directive): " << TAX_RATE_PREPROCESSOR * 100 <<endl;
    cout << "Tax Rate (Const Variable): " << TAX_RATE_CONST * 100 <<endl;

    cout << "Helper Variables:"<<endl;
    cout << "Total Sales Helper (auto): $" << totalSalesHelper<<endl;
    cout << "Another Inventory Helper (decltype): " << anotherInventoryHelper<<endl;

    cout << "Program execution completed successfully."<<endl;
    return 0;
}
