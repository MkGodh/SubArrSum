#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = { -4, 3, 5, -4, 9, 1, -3, -3, 1 };
    int max = 0;
    int end = 0;
    int curInd = 0;
    int curIndTwo = 0;

    for (int i = 0; i < vec.size(); i++) {

        for (int j = i; j < vec.size(); j++) {
            max += vec[j];
            if (max > end)
            {
                curInd = i;
                curIndTwo = j;
                end = max;
            }
        }
        max = 0;
    }

    std::cout << curInd << " " << curIndTwo;
    return 0;
}

