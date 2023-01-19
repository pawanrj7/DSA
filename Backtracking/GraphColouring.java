public class GraphColouring {

    public static void main(String[] args) {
        int[][] graph = { { 0, 1, 1, 1, 0, 0 },
                { 1, 0, 1, 0, 1, 1 },
                { 1, 1, 0, 1, 0, 1 },
                { 1, 0, 1, 0, 0, 1 },
                { 0, 1, 0, 0, 0, 1 },
                { 0, 1, 1, 1, 1, 0 },
        };

        ColouringProblem problem = new ColouringProblem(graph, 5);
        problem.solve();
    }
}
