# Riddle of the Sphinx
## Problem W ICPC 2023

### Problem
![Code Diagram](problem.png)

### Sample Test Case
![Code Diagram](sampletestcase.png)

## Question Breakdown
The major goal of this question is to find answers to the following questions
1. How many legs do an axex have ?
2. How many legs do a basilisk have ?
3. How many legs do a centaur have ?
One thing that we know for sure is that there can be no negative values in the output of the code.
Here there is a creature to which you can ask a maximum of 5 questions. For each of the 5 questions asked the creature would provide an answer out of which one might be incorrect or a lie.

## Code Snippet
**Result**:
```markdown
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cout << "1 0 0" << endl;
    cin >> a;
    cout << "0 1 0" << endl;
    cin >> b;
    cout << "0 0 1" << endl;
    cin >> c;
    cout << "1 1 1" << endl;
    cin >> d;
    cout << "1 2 3" << endl;
    cin >> e;
    if (a + b + c == d)
        cout << a << ' ' << b << ' ' << c << endl;
    else if (a + 2 * b + 3 * c == e)
        cout << a << ' ' << b << ' ' << c << endl;
    else if ((d - b - c) + 2 * b + 3 * c == e)
        cout << d - b - c << ' ' << b << ' ' << c << endl;
    else if (a + 2 * (d - c - a) + 3 * c == e)
        cout << a << ' ' << d - c - a << ' ' << c << endl;
    else
        cout << a << ' ' << b << ' ' << d - a - b << endl;
}

