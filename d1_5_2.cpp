#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;
    int matrix[100][100];
    // cout << "enter how many row you want to make :";
    cin >> n1;
    // cout << "enter how many column you want to make :";
    cin >> n2;
    // cout << "Enter Matrix element \n";
    for (int i = 0; i < n1; i++)

        for (int j = 0; j < n2; j++)
        {
            // cout << "enter matrix[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> matrix[i][j];
        }

    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {

    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //    cout << "\nwhich number you want to search :";
    int key, r_mid, c_mid, ans1, ans2, a; // VERIABLES FOR BINARYSEARCH...........
    cin >> key;

    int r_low = 0, r_high = n1 - 1, c_low = 0, c_high = n2 - 1;
    while (r_low <= r_high)
    {
        r_mid = (r_high + r_low) / 2;

        if (matrix[r_mid][0] == key)
        {
            cout << "(" << r_mid << "," << 0 << ")";
            return 0;
            break;
        }
        else if (matrix[r_mid][n2 - 1] == key)
        {
            cout << "(" << r_mid << "," << n2 - 1 << ")";
            return 0;
            break;
        }

        else if (matrix[r_mid][0] < key && matrix[r_mid][n2 - 1] > key) // ROW CONDITION........
        {
            ans1 = r_mid;
            while (c_high >= c_low) // FOR  COLUMN...........
            {

                c_mid = (c_high + c_low) / 2;
                if (matrix[r_mid][c_mid] == key)
                {
                    ans2 = c_mid;
                    cout << "("
                         << ans1 << ","
                         << ans2 << ")";
                    return 0;
                }
                else if (matrix[r_mid][c_mid] < key)
                {
                    c_low = c_mid + 1;
                }
                else
                {
                    c_high = c_mid - 1;
                }
            }
        }

        else if (matrix[r_mid][n2 - 1] < key)
        {
            r_low = r_mid + 1;
        }
        else if (matrix[r_mid][0] > key)
        {
            r_high = r_mid - 1;
        }
    }
    cout << -1;
    return 0;
}
