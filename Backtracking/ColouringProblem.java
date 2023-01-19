public class ColouringProblem {
    int numOfVertics;
    int numOfColours;
    int[][] graph;
    int[] result;

    public ColouringProblem(int[][] graph, int colour) {
        this.graph = graph;
        this.numOfColours = colour;
        this.numOfVertics = graph[0].length;
        this.result = new int[graph[0].length];

    }

    public void solve() {
        if (fixColour(0)) {
            printSol();
        } else {
            System.out.println("There is no solutions for given parameters...");
        }

    }

    public boolean fixColour(int vertexIndex) {
        result[0] = 0;

        if (vertexIndex == numOfVertics) {
            return true;
        }

        for (int i = 1; i < numOfColours; i++) {
            if (isValid(vertexIndex, i)) {
                result[vertexIndex] = i;

                if (fixColour(vertexIndex + 1))
                    return true;
            }
        }

        return false;

    }

    public boolean isValid(int vertexIndex, int colourIndex) {

        for (int allNode = 0; allNode < numOfVertics; ++allNode) {
            if (graph[vertexIndex][allNode] == 1 && result[allNode] == colourIndex) {
                return false;
            }
        }

        return true;

    }

    public void printSol() {
        for (int i = 0; i < numOfVertics; ++i) {
            System.out.println("vertex " + i + " has " + result[i] + " colour");
        }
    }
}
