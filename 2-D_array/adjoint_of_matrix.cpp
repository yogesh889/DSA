#include<iostream>
using namespace std;

// Function to find determinant of 2x2 matrix
int determinant2x2(int mat[2][2])
{
    return (mat[0][0] * mat[1][1]) -
           (mat[0][1] * mat[1][0]);
}

// Function to get minor matrix
void getMinor(int mat[3][3], int minor[2][2], int row, int col)
{
    int r = 0, c = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            // Skip selected row and column
            if(i != row && j != col)
            {
                minor[r][c] = mat[i][j];
                c++;

                // Move to next row in minor matrix
                if(c == 2)
                {
                    c = 0;
                    r++;
                }
            }
        }
    }
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {0, 4, 5},
        {1, 0, 6}
    };

    int cofactor[3][3];
    int adjoint[3][3];

    // Find Cofactor Matrix
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int minor[2][2];

            // Get minor matrix
            getMinor(mat, minor, i, j);

            // Find determinant of minor
            int det = determinant2x2(minor);

            // Apply sign
            cofactor[i][j] = ((i + j) % 2 == 0 ? 1 : -1) * det;
        }
    }

    // Transpose Cofactor Matrix -> Adjoint
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            adjoint[i][j] = cofactor[j][i];
        }
    }

    // Print Adjoint Matrix
    cout << "Adjoint Matrix:\n";

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << adjoint[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}