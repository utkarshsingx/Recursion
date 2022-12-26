#include <bits/stdc++.h>
using namespace std;
 
// Recursive function
void f(int N)
{
    if (N == 0)
        return;

    cout << N << " ";
    f(N);
}
 
int main()
{
    int N = 5;
    f(N);
    return 0;
}