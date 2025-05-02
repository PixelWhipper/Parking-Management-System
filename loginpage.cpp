#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void showMenu();

int main() {
        int choice;
        string username, password;
        
        cout << "\nSelect a choice:\n1. Register\n2. Login\n3. Exit\nYour choice: ";
        cin >> choice;
    
        if (choice == 1) {
            cout << "Choose a username: ";
            cin >> username;
            cout << "Choose a password: ";
            cin >> password;
    
            ofstream file("users.txt", ios::app);
            if (file.is_open()) {
                file << username << " " << password << endl;
                file.close();
                cout << "Registration successful!" << endl;
            } 
            main();
        }
        else if (choice == 2) {
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
    
            ifstream file("users.txt");
            bool found = false;
            if (file.is_open()) {
                string stored_username, stored_password;
                while (file >> stored_username >> stored_password) {
                    if (stored_username == username && stored_password == password) {
                        found = true;
                        break;
                    }
                }
                file.close();
            }
    
            if (found) {
                cout << "Login successful!" << endl;
            } else {
                cout << "Invalid username or password." << endl;
            }
            main();
        }
        else if (choice == 3) {
            cout << "Exiting..." << endl;
            main();
        }
        else {
            cout << "Invalid choice. Try again." << endl;
            main();
        }
    }
    