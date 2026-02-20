#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

    string website;

    cout << "===== Network Latency Monitor =====" << endl;
    cout << "Enter website (example: google.com): ";
    cin >> website;

    cout << "\nChecking latency...\n" << endl;

    #ifdef _WIN32
        string command = "ping -n 3 " + website;
    #else
        string command = "ping -c 3 " + website;
    #endif

    system(command.c_str());

    cout << "\nTest complete." << endl;

    return 0;
}
