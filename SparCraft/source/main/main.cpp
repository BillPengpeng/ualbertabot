#ifndef WIN32
#define APIENTRY
#define APIENTRYP
#endif

#include "../SparCraft.h"
#include "SearchExperiment.h""

using namespace SparCraft;

int main(int argc, char *argv[])
{
    SparCraft::init();

    try
    {
        if (argc == 2)
        {
            SparCraft::SearchExperiment exp(argv[1]);
            exp.runExperiment();
        }
        else
        {
            std::cout << "Please provide experiment file as only argument";
        }
    }
    catch(SparCraftException e)
    {
        std::cerr << "\nSparCraft Exception, Shutting Down\n\n";
    }
   
    return 0;
}