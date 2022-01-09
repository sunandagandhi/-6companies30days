// C++ find number of squares in a
// chessboard
#include <bits/stdc++.h>
using namespace std;

// Function to return count of squares;
long long int countSquares(int n)
{
return (n * (n + 1) / 2) * (2 * n + 1) / 3;
}

// Driver Code
int main()
{

int n = 4;
cout << countSquares(n);
return 0;
}

//vermay87 `

