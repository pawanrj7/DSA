public class MazeProblem {
    private int[][] maze;
    private int[][] solution;
    private int mazeSize;

    public MazeProblem(int[][] maze) {
        this.maze = maze;
        this.mazeSize = maze.length;
        this.solution = new int[mazeSize][mazeSize];

    }

    public void solve() {
        if (solveProblem(0, 0)) {
            printSolution();
        } else {
            System.out.println(" There is no solution ");
        }

    }

    private boolean solveProblem(int row, int column) {
        if (isFinished(row, column)) {
            return true;
        }

        if (isValid(row, column)) {
            solution[row][column] = 1;

            if (solveProblem(row, column + 1)) {
                return true;
            }

            if (solveProblem(row + 1, column)) {
                return true;
            }

            solution[row][column] = 0;

        }

        return false;

    }

    private boolean isFinished(int row, int column) {
        if (row == mazeSize - 1 && column == mazeSize - 1) {
            solution[row][column] = 1;
            return true;
        } else {
            return false;
        }
    }

    private boolean isValid(int row, int column) {

        if (row < 0 || row > mazeSize - 1)
            return false;
        if (column < 0 || column > mazeSize - 1)
            return false;

        if (maze[row][column] == 0) {
            return false;
        }

        return true;

    }

    private void printSolution() {
        for (int i = 0; i < mazeSize; i++) {
            for (int j = 0; j < mazeSize; j++) {
                if (solution[i][j] == 1) {
                    System.out.print(" * ");
                } else {
                    System.out.print(" - ");
                }
            }
            System.out.println();
        }
    }
}
