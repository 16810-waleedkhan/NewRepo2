#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    string password;

    // Correct login details
    string correctUsername = "waleed";
    string correctPassword = "16810";

    cout << "===== LOGIN SYSTEM =====" << endl;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword)
    {
        cout << "Login successful! Welcome, " << username << "." << endl;
    }
    else
    {
        cout << "Login failed! Incorrect username or password." << endl;
    }

    return 0;
}
