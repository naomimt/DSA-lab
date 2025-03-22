#include <iostream>
#include <string>

using namespace std;

#define TAX_RATE_DIRECTIVE 0.1

int main()
{
    // welcome msgs
    cout << "Hello, this program will analayze product sales and inventory.";
    cout << "C++ is a compiled language.";

    const float TAX_RATE_ = 0.1;

    // product details variables
    string productName;
    int category = 1;
    int initialInventoryQty{0};
    float pricePerUnit = 0.0;
    int itemsSold = 0;

    // computed values
    int newInventoryQty;
    float totalSales;
    string inventoryStatus;

    auto totalSalesHelper = totalSales;
    decltype(initialInventoryQty) initialInventoryQtyHelper = 60;

    // User input
    cout << "Enter the product name (single word): ";
    cin >> productName;

    cout << "Enter the product category (1-5): ";
    cin >> category;

    cout << "Enter the initial inventory quantity: ";
    cin >> initialInventoryQty;

    cout << "Enter the product price per unit: ";
    cin >> pricePerUnit;

    cout << "Enter the number of items sold: ";
    cin >> itemsSold;

    newInventoryQty = initialInventoryQty;
    newInventoryQty -= itemsSold;
    totalSales = itemsSold * pricePerUnit;

    inventoryStatus = (newInventoryQty < 10) ? "Low inventory" : "Sufficient inventory";

    if ((category < 1) || (category > 5))
    {
        cout << "Invalid product category! Please enter a number between 1 and 5." << endl;
    }
    else
    {
        switch (category)
        {
        case 1:
            cout << "Category 1: Electronics" << endl;
            break;
        case 2:
            cout << "Category 2: Groceries" << endl;
            break;
        case 3:
            cout << "Category 3: Clothing" << endl;
            break;
        case 4:
            cout << "Category 4: Stationery" << endl;
            break;
        case 5:
            cout << "Category 5: Miscellaneous" << endl;
            break;
        }
    }

    cout << "Reciept details" << endl;

    for (int i = 1; (i <= itemsSold); i++)
    {
        cout << "Item " << i << " Price: $" << pricePerUnit << endl;
    }

    // summary
    cout << "\nSummary of Transactions:" << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Category: " << category << endl;
    cout << "Initial Inventory: " << initialInventoryQty << endl;
    cout << "Product Price: $" << pricePerUnit << endl;
    cout << "Items Sold: " << itemsSold << endl;
    cout << "New Inventory: " << newInventoryQty << endl;
    cout << "Total Sales Amount: $" << totalSales << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;
    cout << "Helper Total Sales: $" << totalSalesHelper << endl;
    cout << "Helper Inventory Value: " << initialInventoryQtyHelper << endl;
    cout << "Tax Rate [from directive]: " << TAX_RATE_DIRECTIVE << endl;
    cout << "Tax Rate: " << TAX_RATE_ << endl;

    return 0;
}