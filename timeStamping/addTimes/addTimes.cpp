#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    auto beforeTime1 = system_clock :: now();

    for (int i = 0; i < 100000000; i++);

    auto afterTime1 = system_clock :: now();

    auto duration1 = afterTime1 - beforeTime1;
    cout << "\nThe time taken is:" << duration1.count() << " ns ";


    auto beforeTime2 = system_clock :: now();

    for (int i = 0; i < 100000000; i++);

    auto afterTime2 = system_clock :: now();

    auto duration2 = afterTime2 - beforeTime2;
    cout << "\nThe time taken is:" << duration2.count() << " ns ";

    auto totalTime = duration1 + duration2;
    cout << "\nTotal time taken by both the loops is: " << totalTime.count() << " ns ";

}