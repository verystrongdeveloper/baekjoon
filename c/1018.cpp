#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> board(n);

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    int min_count = 64;

    for (int y = 0; y <= n - 8; y++)
    {
        for (int x = 0; x <= m - 8; x++)
        {
            int count_w = 0;
            int count_b = 0;

            for (int r = 0; r < 8; r++)
            {
                for (int c = 0; c < 8; c++)
                {
                    int z = y + r;
                    int k = x + c;
                    if ((r + c) % 2 == 0)
                    {
                        if (board[z][k] == 'W')
                        {
                            count_w++;
                        }
                        if (board[z][k] == 'B')
                        {
                            count_b++;
                        }
                    }
                    else
                    {
                        if (board[z][k] == 'B')
                        {
                            count_w++;
                        }
                        if (board[z][k] == 'W')
                        {
                            count_b++;
                        }
                    }
                }
            }
            int current_best = min(count_w, count_b);

            min_count = min(min_count, current_best);
        }
    }
    cout << min_count;
    return 0;
}