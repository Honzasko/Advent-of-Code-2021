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
    uint64_t pre_sum = 0;
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
       sums.insert(sums.end(),current);

    }
    for(unsigned int i = 0;i < sums.size();i++)
    {
       uint64_t pre = (sums[i] + sums[i+1] + sums[i+2]);
       if(pre_sum != 0)
       {
         if(pre > pre_sum)
         {
           result++;
         }
       }
       pre_sum = pre;
    }
    in.close();
    cout << result << endl;
    return 0;
}
