#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int temp;
    long double sol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            sol = sol + temp;
        }
    }
    cout << fixed << setprecision(9) << sol / (n * m);
    return 0;
}