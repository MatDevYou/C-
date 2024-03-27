#include <iostream>
#include <ctime>

using namespace std;

const int GRID_SIZE = 9;

void printGrid(int grid[][GRID_SIZE]) {
  for (int i = 0; i < GRID_SIZE; i++) {
    for (int j = 0; j < GRID_SIZE; j++) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}

bool isValidPlacement(int grid[][GRID_SIZE], int row, int col, int value) {
  // Check row for conflicts
  for (int i = 0; i < GRID_SIZE; i++) {
    if (grid[row][i] == value && col != i) {
      return false;
    }
  }

  // Check column for conflicts
  for (int i = 0; i < GRID_SIZE; i++) {
    if (grid[i][col] == value && row != i) {
      return false;
    }
  }

  // Check subgrid for conflicts (assuming 3x3 subgrids)
  int subgridRowStart = (row / 3) * 3;
  int subgridColStart = (col / 3) * 3;
  for (int i = subgridRowStart; i < subgridRowStart + 3; i++) {
    for (int j = subgridColStart; j < subgridColStart + 3; j++) {
      if (grid[i][j] == value && row != i && col != j) {
        return false;
      }
    }
  }

  return true;
}

bool solveSudoku(int grid[][GRID_SIZE], int row, int col) {
  // Base case: If we've reached the end of the grid, the Sudoku is solved
  if (row == GRID_SIZE) {
    return true;
  }

  // If we're at the end of a row, move to the next row
  if (col == GRID_SIZE) {
    return solveSudoku(grid, row + 1, 0);
  }

  // If the current cell is already filled, move on to the next cell
  if (grid[row][col] > 0) {
    return solveSudoku(grid, row, col + 1);
  }

  // Try all possible values for the current cell
  for (int value = 1; value <= GRID_SIZE; value++) {
    if (isValidPlacement(grid, row, col, value)) {
      grid[row][col] = value;

      // Recursively call solveSudoku to try the placement and solve the rest
      if (solveSudoku(grid, row, col + 1)) {
        return true;
      }

      // Backtrack if the placement didn't lead to a solution
      grid[row][col] = 0;
    }
  }

  // If none of the values worked for the current cell, return false
  return false;
}

void generateSudoku(int grid[][GRID_SIZE]) {
  // Seed the random number generator
  srand(time(0));

  // Fill some random cells to create a starting point
  for (int i = 0; i < GRID_SIZE; i++) {
    for (int j = 0; j < GRID_SIZE; j++) {
      if (rand() % 4 == 0) { // Adjust the probability of pre-filled cells here
        int value = rand() % GRID_SIZE + 1;
        if (isValidPlacement(grid, i, j, value)) {
          grid[i][j] = value;
        }
      }
    }
  }

  // Solve the partially filled Sudoku using backtracking
  solveSudoku(grid, 0, 0);
}

int main() {
  int grid[GRID_SIZE][GRID_SIZE] = {0};

  generateSudoku(grid);

  cout << "Generated Sudoku:" << endl;
  printGrid(grid);

  // Add functionalities for user input to solve the Sudoku or play the game
  // Extend the code to allow user interaction and provide mechanisms to take input
  // and validate user-placed numbers.

  return 0;
}
