/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int row = matrixSize;
    int col = matrixColSize[0];
    *returnSize = col;
    *returnColumnSizes = (int *)malloc(col * sizeof(int));
    for(int i = 0; i < col; i++){
        (*returnColumnSizes)[i] = row;
    }
    int** transpose = (int **)malloc(col * sizeof(int*));
    for(int i = 0; i < col; i++){
        transpose[i] = (int *)malloc(row * sizeof(int));
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}
