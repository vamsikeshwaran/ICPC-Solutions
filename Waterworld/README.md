# Waterworld
## Problem I ICPC 2023

### Problem
![Code Diagram](problem.png)

### Sample Test Case
![Code Diagram](sampletestcase.png)

## Question Breakdown
The question uses a simplified version of the relativistic quantum-polarized spectroscopy approach. The major goal of the question is to find the percentage of water in the whole world. Here the world rotates about its vertical axis. The world is sliced horizontally into blocks. The number of blocks is given by the user. The world is spherical which rotates "d" degrees in each rotation. The degree of rotation is not given explicitly it is given in digits that is if the value is "7" then the degree of rotation is "51.42" (360/7). The area indicated in red denotes the the area segments when degree of rotation equals to "12". The percentage of water content for each segment will be provided by the user.

## Sample test case Breakdown
The first line of the sample test case consist of 2 integers the first integer denotes the number of horizontal cuts of the world in blocks and the second integer denotes the degree of rotation which is not given explicitly it is given in digits that is if the value is "7" then the degree of rotation is "51.42" (360/7). Then we will have a matrix in which  Each column of this matrix describes the measurements for a single step, that is, a rotation by d degrees. The number ai,j is the percentage of area Ai that is covered by water.

## Code Snippet
```markdown
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
```
## Logic Explanation
The problem gives us a matrix in which each value present in it gives the percentage of water content in the particular sector. The total number of sectors would be equal to the product of the degree of rotation that is "m" and the number of horizontal cuts "n" (n*m). So the percentage of the water content in the whole world would be the sum of all the induvidual percentage in the matrix divided by the the product of n*m that is the average of all the values in the matrix

## Knowlege Booster
1. Here the "fixed" parameter is used to convert the number from scientific notation to fixed decimal notation. Usually very large numbers are denoted like this 1.23e-04 but fixed converts this format to a decimal format that is 0.000123.
2. The "setprecision" function helps to set the number of digits after the decimal point. When used without "fixed" the total number of digits will be the parameter value. 


