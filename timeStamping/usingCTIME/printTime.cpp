#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(nullptr);
    cout << "Current Time: " << ctime(&now);
}