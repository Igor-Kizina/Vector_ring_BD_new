#include "Header.h"

int main()
{
    std::vector<int> bd(N);
    printBd(bd);

    while(true) {
        if(inBd(bd) == false)
            break;
    }
    return 0;
}
