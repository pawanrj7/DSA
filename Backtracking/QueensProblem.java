public class QueensProblem {

    private int numOfQueens;
    private int[][] chess;

    public QueensProblem(int numOfQueens) {
        this.numOfQueens = numOfQueens;
        this.chess = new int[numOfQueens][numOfQueens];
    }

    public void solve() {
        if (setQueen(0)) {
            solution();
        } else {
            System.out.println("There is no solution ");
        }

    }

    public boolean setQueen(int colIndex) {
        if (colIndex == numOfQueens) {
            return true;
        }

        for (int row = 0; row < numOfQueens; row++) {
            if (isValid(row, colIndex)) {
                chess[row][colIndex] = 1;
                if (setQueen(colIndex + 1))
                    return true;

                chess[row][colIndex] = 0;

            }
        }
        return false;

    }

    public boolean isValid(int row, int col) {
        for (int i = 0; i < col; i++) {
            if (chess[row][i] == 1)
                return false;
        }

        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (chess[i][j] == 1) {
                return false;
            }
        }

        for (int i = row, j = col; i < chess.length && j >= 0; i++, j--) {
            if (chess[i][j] == 1) {
                return false;
            }
        }

        return true;

    }

    public void solution() {
        for (int i = 0; i < numOfQueens; i++) {
            for (int j = 0; j < numOfQueens; j++) {
                if (chess[i][j] == 1) {
                    System.out.print(" * ");
                } else {
                    System.out.print(" - ");
                }
            }
            System.out.println();
        }

    }
}
