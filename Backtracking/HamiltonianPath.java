
public class HamiltonianPath {
    private int numOfVertices;
    private int[] hamiltonianPAth;
    private int[][] graph;

    public HamiltonianPath(int[][] graph) {
        this.numOfVertices = graph[0].length;
        this.graph = graph;
        this.hamiltonianPAth = new int[numOfVertices];
    }

    public void solve() {

        hamiltonianPAth[0] = 0;

        if (findSol(1)) {
            printSol();
        } else {
            System.out.print("There is no sol");
        }

    }

    public boolean findSol(int position) {

        if (position == this.numOfVertices) {
            if (graph[hamiltonianPAth[position - 1]][hamiltonianPAth[0]] == 1) {
                return true;
            } else {
                return false;
            }
        }
        for (int vertexIndex = 0; vertexIndex < numOfVertices; ++vertexIndex) {
            if (isValid(vertexIndex, position)) {
                hamiltonianPAth[position] = vertexIndex;

                if (findSol(position + 1))
                    return true;
            }
        }

        return false;

    }

    public boolean isValid(int vertex, int actualPosition) {

        if (graph[hamiltonianPAth[actualPosition - 1]][vertex] == 0)
            return false;

        for (int i = 0; i < actualPosition; ++i) {
            if (hamiltonianPAth[i] == vertex) {
                return false;
            }
        }

        return true;

    }

    public void printSol() {
        System.out.println("Hamiltonian cycle exists: ");

        for (int i = 0; i < hamiltonianPAth.length; i++) {
            System.out.print(hamiltonianPAth[i] + " - ");
        }
        System.out.println(hamiltonianPAth[0]);

    }
}
