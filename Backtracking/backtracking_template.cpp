// 28. Golden Template for Backtracking
// void solve(...)
// {
//     // Base Case

//     // Include
//     choose();

//     solve();

//     // Backtrack
//     undo();

//     // Exclude
//     solve();
// }
// This template is used in:
// •	Subsets 
// •	Permutations 
// •	N-Queens 
// •	Sudoku Solver 
// •	Combination Sum 
// •	Rat in Maze 
// and many advanced DSA problems.




// class Solution {
// public:

//     bool isSafe(vector<vector<char>> &board, int row, int col, int num){
//         for(int i=0; i<9; i++){
//             if(board[row][i] == num){
//                 return false;
//             }
//             if(board[i][col] == num){
//                 return false;
//             }
//             if(board[3*(row/3)+i/3][3*(col/3)+i%3] == num){
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool solve(vector<vector<char>> &board){
//         for(int i=0; i<9; i++){
//             for(int j=0; j<9; j++){
//                 if(board[i][j] == '.'){
//                     for(int num='1'; num<='9'; num++){
//                         if(isSafe(board, i, j, num)){
//                             board[i][j] = num; 

//                             if(solve(board)){
//                                 return true;
//                             }

//                             board[i][j] = '.';
//                         }
//                     }
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }

//     void solveSudoku(vector<vector<char>>& board) {
//         solve(board);
//     }
// };