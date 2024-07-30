#include <bits/stdc++.h>

using namespace std;

// Function to check if the element can be placed at the given position
bool can_place(int element, int row, int col, const vector<vector<int>> &grid, int rows, int cols)
{

    // this line of code can chack the direction any one not match the same elements okk understands;
    vector<pair<int, int>> directions = {
        {-1, 0}, {1, 0}, {0, -1}, {0, 1}, // Top, Bottom, Left, Right
        {-1, -1},//check the top left;
        {-1, 1},// check the top right;
        {1, -1},// check the bottom left;  // Diagonal
        {1, 1} // check the bottom right;
    };

    
    for (size_t i = 0; i < directions.size(); ++i)
    {
        int dr = directions[i].first;
        int dc = directions[i].second;
        int r = row + dr;
        int c = col + dc;
        if (r >= 0 && r < rows && c >= 0 && c < cols)
        {
            if (grid[r][c] == element)
            {
                return false;
            }
        }
    }

    return true;
}

// Function to arrange elements in a 2D grid with constraints
vector<vector<int>> arrange_elements(const vector<int> &elements, int rows, int cols)
{
    vector<vector<int>> grid(rows, vector<int>(cols, -1));
    random_device rd;
    mt19937 g(rd());

    vector<int> elements_vec = elements;
    for (int i = 0; i < (rows * cols + elements.size() - 1) / elements.size(); ++i)
    {
        elements_vec.insert(elements_vec.end(), elements.begin(), elements.end());
    }
    shuffle(elements_vec.begin(), elements_vec.end(), g);

    for (size_t i = 0; i < elements_vec.size(); ++i)
    {
        bool placed = false;
        for (int r = 0; r < rows && !placed; ++r)
        {
            for (int c = 0; c < cols && !placed; ++c)
            {
                if (grid[r][c] == -1 && can_place(elements_vec[i], r, c, grid, rows, cols))
                {
                    grid[r][c] = elements_vec[i];
                    placed = true;
                }
            }
        }
    }

    return grid;
}

int main()
{
    int num_elements;
    cout << "Enter the how many stream are conduct the exam:";
    cin >> num_elements;

    vector<int> elements(num_elements);
    cout << "Enter the elements: ";
    for (int i = 0; i < num_elements; ++i)
    {
        cin >> elements[i];
    }

    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    auto grid = arrange_elements(elements, rows, cols);

    for (size_t i = 0; i < grid.size(); ++i)
    {
        for (size_t j = 0; j < grid[i].size(); ++j)
        {
            if (grid[i][j] == -1)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << grid[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
