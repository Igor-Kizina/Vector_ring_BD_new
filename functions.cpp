#include "Header.h"

void printBd(std::vector<int> &bd)
{
   for(auto n : bd)
        cout << n << " ";
   cout << endl;
}

bool inBd(std::vector<int> & bd)
{
    int num;
    int vecBeginInd{0};
    while(1) {
        cin >> num;
        if(num == -2)
            return false;
        else if(num == -1)
            printBd(bd);
        else {
            bd[vecBeginInd] = num;
            vecBeginInd++;
            if(vecBeginInd == N)
                vecBeginInd = 0;
        }
    }
}
