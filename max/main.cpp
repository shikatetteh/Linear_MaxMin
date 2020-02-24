#include <iostream>
using namespace std;


int findMaxRec(int E[], int n)
{
    if (n == 1)
        return E[0];
    return max(E[n-1], findMaxRec(E, n-1));
}


int main()
{
    int E[] = {2, 3, -45, 33, -120, 12, 5};
    int n = sizeof(E)/sizeof(E[0]);
    cout << "The maximum value is :"<< findMaxRec(E, n);
    return 0;
}
