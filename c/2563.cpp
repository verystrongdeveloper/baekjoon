#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> paper(100, vector<int>(100, 0));
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int j = x; j < x + 10; j++)
        {
            for (int k = y; k < y + 10; k++)
            {
                paper[j][k] = 1;
            }
        }
    }
    int area = 0;
    for (int j = 0; j < 100; j++)
    {
        for (int k = 0; k < 100; k++)
        {
            if (paper[j][k] == 1)
            {
                area++;
            }
        }
    }
    cout << area << endl;
    return 0;
}