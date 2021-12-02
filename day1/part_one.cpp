#include <stdint.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    uint64_t current = 0;
    uint64_t previous
    uint64_t result = 0;
    std::vector<uint64_t> sums;

    ifstream in;
    in.open("");
    std::string line;
    while(getline(in,line))
    {
       current = 0;
       std::istringstream ss(line);
       ss >> current;
       if(previous != 0)
       {
         if(current > previous)
         {
           result++;
         }
       }
       previous = current;
       

    }
    in.close();
    cout << result << endl;
    return 0;
}
