//Program in cpp to work on time management.
//Author - Vedika Udgir

#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    auto beforeTime = system_clock :: now();

    for (int i = 0; i < 100000000; i++);

    auto afterTime = system_clock :: now();

    auto duration = afterTime - beforeTime;
    cout << "\nThe time taken is:" << duration.count() << " ns ";

    duration = duration_cast<milliseconds>(afterTime - beforeTime);
    cout << "\nThe time taken is:" << duration.count() << " ms ";
}