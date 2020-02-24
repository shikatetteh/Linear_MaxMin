#include <iostream>
using namespace std;


int findMinRec(int E[], int n)
{

    if (n == 1)
        return E[0];
    return min(E[n-1], findMinRec(E, n-1));
}


int main()
{
    int E[] = {2, 3, -45, 33, -120, 12, 5};
    int n = sizeof(E)/sizeof(E[0]);
    cout <<  "The minimum value is :"<<findMinRec(E, n);
    return 0;
}
