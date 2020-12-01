#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "event.h"
#include "lumi.h"

int main(int argc, char const *argv[])
{

    std::cout << "Hello world 😀" << std::endl;
    event e1;
    lumi l1;
    srand(time(NULL));
    int summedEvents = 0;
    float summedLumi = 0;

    for (int i = 0; i < 1000; ++i)
    {
    	e1.set_values(static_cast<int> (rand()%10), static_cast<int> (rand()%10));
    	summedEvents += e1.pass_selection();
    	l1.set_lumi(rand());
    	summedLumi += l1.get_lumi();
    }

    std::cout << "Percentage of events pass selection: " << summedEvents/1000.0 << std::endl;
    std::cout << "Total lumi: " << summedLumi << std::endl;
    return 0;
}