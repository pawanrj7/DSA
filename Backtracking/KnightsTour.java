public class KnightsTour {
    int[][] chessBoard;
    int boardSize;
    int[] xMoves = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int[] yMoves = { 1, 2, 2, 1, -1, -2, -2, -1 };

    public KnightsTour(int boardSize) {
        this.boardSize = boardSize;
        this.chessBoard = new int[boardSize][boardSize];
        initializeChessBoard();
    }

    void initializeChessBoard() {
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                chessBoard[i][j] = Integer.MIN_VALUE;
            }
        }

    }

    public void solve() {
        chessBoard[0][0] = 0;
        if (solveProblem(1, 0, 0)) {
            printSol();
        } else {
            System.out.print("There is no solution");
        }

    }

    private boolean solveProblem(int stepCount, int x, int y) {

        if (stepCount == boardSize * boardSize)
            return true;

        for (int i = 0; i < xMoves.length; i++) {
            int xNext = x + xMoves[i];
            int yNext = y + yMoves[i];
            if (isValid(xNext, yNext)) {
                chessBoard[xNext][yNext] = stepCount;

                if (solveProblem(stepCount + 1, xNext, yNext))
                    return true;

                chessBoard[xNext][yNext] = Integer.MIN_VALUE;
            }

        }

        return false;
    }

    private boolean isValid(int x, int y) {

        if (x < 0 || x >= boardSize)
            return false;
        if (y < 0 || y >= boardSize)
            return false;

        if (chessBoard[x][y] != Integer.MIN_VALUE)
            return false;

        return true;

    }

    private void printSol() {
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                System.out.print(this.chessBoard[i][j] + " ");
            }

            System.out.println();
        }
    }
}
