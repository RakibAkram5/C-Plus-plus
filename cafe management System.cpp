#include<iostream>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;

// ================= PERSON CLASS =================

class Person {
protected:
    string username;
    string password;

public:
    void setLogin(string u, string p) {
        username = u;
        password = p;
    }

    bool login(string u, string p) {
        return (username == u && password == p);
    }
};

// ================= ITEM CLASS =================

class Item {
private:
    int code;
    string name;
    float price;
    int stock;

public:
    Item() : code(0), name(""), price(0.0f), stock(0) {}

    void setItem(int c, string n, float p, int s) {
        code = c;
        name = n;
        price = p;
        stock = s;
    }

    void showItem() {
        cout << left
             << setw(10) << code
             << setw(25) << name
             << setw(10) << fixed << setprecision(2) << price
             << setw(10) << stock
             << endl;
    }

    int   getCode()  { return code;  }
    string getName() { return name;  }
    float getPrice() { return price; }
    int   getStock() { return stock; }

    void reduceStock(int q) { stock -= q; }
};

// ================= FILE HELPERS =================

// Save all items to menu.txt
// Format per line: code|name|price|stock
// Using '|' as delimiter so item names with spaces are handled correctly.
void saveMenuToFile(Item *items, int count) {
    ofstream file("menu.txt");
    for (int i = 0; i < count; i++) {
        file << items[i].getCode()  << "|"
             << items[i].getName()  << "|"
             << fixed << setprecision(2)
             << items[i].getPrice() << "|"
             << items[i].getStock() << "\n";
    }
    file.close();
}

// Load items from menu.txt into array; returns number of items loaded.
int loadMenuFromFile(Item *items, int maxSize) {
    ifstream file("menu.txt");
    if (!file.is_open()) return 0;

    int count = 0;
    string line;

    while (getline(file, line) && count < maxSize) {
        if (line.empty()) continue;

        stringstream ss(line);
        string token;

        string codePart, namePart, pricePart, stockPart;

        if (!getline(ss, codePart,  '|')) continue;
        if (!getline(ss, namePart,  '|')) continue;
        if (!getline(ss, pricePart, '|')) continue;
        if (!getline(ss, stockPart, '|')) continue;

        int   code  = stoi(codePart);
        float price = stof(pricePart);
        int   stock = stoi(stockPart);

        items[count].setItem(code, namePart, price, stock);
        count++;
    }

    file.close();
    return count;
}

// ================= ADMIN CLASS =================

class Admin : public Person {

public:

    void addItem(Item *items, int &count, int maxSize) {

        // BUG FIX: overflow guard
        if (count >= maxSize) {
            cout << "\nMenu is full! Cannot add more items.\n";
            return;
        }

        int code, stock;
        string name;
        float price;

        cout << "\nEnter Item Code: ";
        cin >> code;
        cin.ignore(); // BUG FIX: flush newline before getline

        // BUG FIX: check for duplicate code
        for (int i = 0; i < count; i++) {
            if (items[i].getCode() == code) {
                cout << "\nItem with this code already exists!\n";
                return;
            }
        }

        cout << "Enter Item Name: ";
        getline(cin, name);

        cout << "Enter Price: ";
        cin >> price;

        // BUG FIX: negative value validation
        if (price < 0) {
            cout << "\nPrice cannot be negative!\n";
            return;
        }

        cout << "Enter Stock: ";
        cin >> stock;

        if (stock < 0) {
            cout << "\nStock cannot be negative!\n";
            return;
        }

        items[count].setItem(code, name, price, stock);
        count++;

        // BUG FIX: use shared save function so file stays in sync
        saveMenuToFile(items, count);

        cout << "\nItem Added Successfully!\n";
    }

    void viewItems(Item *items, int count) {

        if (count == 0) {
            cout << "\nNo Items Available!\n";
            return;
        }

        cout << "\n============= MENU =============\n";
        cout << left
             << setw(10) << "Code"
             << setw(25) << "Name"
             << setw(10) << "Price"
             << setw(10) << "Stock"
             << endl;
        cout << string(55, '-') << endl;

        for (int i = 0; i < count; i++) {
            items[i].showItem();
        }
    }

    void deleteItem(Item *items, int &count) {

        int code;
        cout << "\nEnter Item Code to Delete: ";
        cin >> code;

        bool found = false;

        for (int i = 0; i < count; i++) {
            if (items[i].getCode() == code) {

                for (int j = i; j < count - 1; j++) {
                    items[j] = items[j + 1];
                }
                count--;
                found = true;

                // BUG FIX: persist deletion to file
                saveMenuToFile(items, count);

                cout << "\nItem Deleted!\n";
                break;
            }
        }

        if (!found) {
            cout << "\nItem Not Found!\n";
        }
    }
};

// ================= CUSTOMER CLASS =================

class Customer {

public:

    void orderFood(Item *items, int &count) {

        if (count == 0) {
            cout << "\nSorry, no items available right now!\n";
            return;
        }

        float total = 0;
        char  choice;

        ofstream bill("bill.txt");

        bill << "======= CAFE BILL =======\n";

        cout << "\n============= MENU =============\n";
        cout << left
             << setw(10) << "Code"
             << setw(25) << "Name"
             << setw(10) << "Price"
             << setw(10) << "Stock"
             << endl;
        cout << string(55, '-') << endl;

        for (int i = 0; i < count; i++) {
            items[i].showItem();
        }

        do {
            int code, qty;

            cout << "\nEnter Item Code: ";
            cin >> code;

            // BUG FIX: validate quantity input
            cout << "Enter Quantity: ";
            cin >> qty;

            if (qty <= 0) {
                cout << "\nQuantity must be greater than zero!\n";
            } else {

                bool found = false;

                for (int i = 0; i < count; i++) {
                    if (items[i].getCode() == code) {
                        found = true;

                        if (qty > items[i].getStock()) {
                            cout << "\nInsufficient Stock! Available: "
                                 << items[i].getStock() << "\n";
                        } else {
                            float itemTotal = qty * items[i].getPrice();
                            total += itemTotal;
                            items[i].reduceStock(qty);

                            cout << "\nAdded: " << items[i].getName()
                                 << " x " << qty
                                 << " = " << fixed << setprecision(2)
                                 << itemTotal << "\n";

                            bill << left
                                 << setw(25) << items[i].getName()
                                 << " x " << setw(4) << qty
                                 << " = " << fixed << setprecision(2)
                                 << itemTotal << "\n";
                        }
                        break;
                    }
                }

                if (!found) {
                    cout << "\nInvalid Item Code!\n";
                }
            }

            cout << "\nOrder More? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        float tax      = total * 0.05f;
        float finalBill = total + tax;

        cout << "\n============= FINAL BILL =============\n";
        cout << fixed << setprecision(2);
        cout << "Subtotal   : " << total     << endl;
        cout << "Tax (5%)   : " << tax       << endl;
        cout << "Final Bill : " << finalBill << endl;

        bill << "\n--------------------------\n";
        bill << "Subtotal   : " << fixed << setprecision(2) << total     << "\n";
        bill << "Tax (5%)   : " << tax       << "\n";
        bill << "Final Bill : " << finalBill << "\n";
        bill << "==========================\n";
        bill.close();

        // BUG FIX: persist reduced stock back to menu.txt after every order
        saveMenuToFile(items, count);

        ofstream sales("sales.txt", ios::app);
        sales << fixed << setprecision(2) << finalBill << "\n";
        sales.close();

        cout << "\nBill saved to bill.txt\n";
    }
};

// ================= MAIN FUNCTION =================

int main() {

    const int SIZE = 100;
    int count = 0;

    Item *items = new Item[SIZE];

    // BUG FIX: load existing menu from file on startup
    count = loadMenuFromFile(items, SIZE);
    if (count > 0)
        cout << "\nLoaded " << count << " item(s) from menu.\n";

    Admin admin;
    admin.setLogin("admin", "1234");

    Customer customer;

    int mainChoice;

    do {
        cout << "\n========== CAFE MANAGEMENT SYSTEM ==========\n";
        cout << "1. Admin Login\n";
        cout << "2. Customer Panel\n";
        cout << "3. Exit\n";
        cout << "\nEnter Choice: ";
        cin >> mainChoice;

        switch (mainChoice) {

        case 1: {
            string u, p;

            cout << "\nEnter Username: ";
            cin >> u;

            cout << "Enter Password: ";
            cin >> p;

            if (admin.login(u, p)) {
                cout << "\nLogin Successful!\n";

                int adminChoice;

                do {
                    cout << "\n========== ADMIN PANEL ==========\n";
                    cout << "1. Add Item\n";
                    cout << "2. View Items\n";
                    cout << "3. Delete Item\n";
                    cout << "4. Logout\n";
                    cout << "\nEnter Choice: ";
                    cin >> adminChoice;

                    switch (adminChoice) {
                    case 1: admin.addItem(items, count, SIZE); break;
                    case 2: admin.viewItems(items, count);     break;
                    case 3: admin.deleteItem(items, count);    break;
                    case 4: cout << "\nLogged Out!\n";         break;
                    default: cout << "\nInvalid Choice!\n";
                    }

                } while (adminChoice != 4);

            } else {
                cout << "\nInvalid Username or Password!\n";
            }
            break;
        }

        case 2:
            customer.orderFood(items, count);
            break;

        case 3:
            cout << "\nThank You! Goodbye!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (mainChoice != 3);

    delete[] items;
    return 0;
}