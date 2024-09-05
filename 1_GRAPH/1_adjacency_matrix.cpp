#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat)); // set 0 to all

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    if (mat[3][0] == 1)
        cout << "connection ache";
    else
        cout << "connection nai";
    return 0;
}
