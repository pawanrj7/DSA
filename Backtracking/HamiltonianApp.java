public class HamiltonianApp {

    public static void main(String[] args) {
        int[][] graph = { { 0, 1, 0, 0, 0, 1 },
                { 1, 0, 1, 0, 0, 0 },
                { 0, 1, 0, 0, 1, 0 },
                { 0, 0, 0, 0, 1, 1 },
                { 0, 0, 1, 1, 0, 1 },
                { 1, 0, 0, 1, 1, 0 }
        };

        HamiltonianPath problem = new HamiltonianPath(graph);
        problem.solve();
    }

}
