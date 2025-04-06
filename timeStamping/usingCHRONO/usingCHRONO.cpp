#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
using namespace chrono;

int main()
{
    auto now = system_clock::now();
    time_t now_c = system_clock::to_time_t(now);
    cout << ctime(&now_c);
}