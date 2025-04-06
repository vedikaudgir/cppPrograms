#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    auto beforeLoop = system_clock::now();
    time_t before = system_clock::to_time_t(beforeLoop);
    cout << "\nTime before loop is: " << ctime(&before);

    for (int i = 0; i < 1000000000; i++);

    auto afterLoop = system_clock::now();
    time_t after = system_clock::to_time_t(afterLoop);
    cout << "\nTime after loop is: " << ctime(&after);
}