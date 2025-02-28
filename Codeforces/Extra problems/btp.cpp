#include <bits/stdc++.h>
using namespace std;

struct Cell {
    int x, y;
    bool operator<(const Cell& other) const {
        return tie(x, y) < tie(other.x, other.y);
    }
};

int n, m;
vector<vector<int>> grid;
vector<vector<int>> burnTime;
vector<Cell> burningNodes;

vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && burnTime[x][y] == -1;
}

void spreadFire(set<Cell>& s) {
    set<Cell> newBurning;
    for (auto curr : s) {
        for (auto d : directions) {
            int nx = curr.x + d.first, ny = curr.y + d.second;
            if (isValid(nx, ny)) {
                burnTime[nx][ny] = burnTime[curr.x][curr.y] + 1;
                newBurning.insert({nx, ny});
            }
        }
    }
    s = newBurning;
}

Cell findFarthestNode() {
    int maxDist = -1;
    Cell farthest = {-1, -1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (burnTime[i][j] == -1) {
                int minDist = INT_MAX;
                for (auto node : burningNodes) {
                    minDist = min(minDist, abs(node.x - i) + abs(node.y - j));
                }
                if (minDist > maxDist) {
                    maxDist = minDist;
                    farthest = {i, j};
                }
            }
        }
    }
    return farthest;
}

int burnGrid() {
    set<Cell> s;
    s.insert(burningNodes[0]);
    burnTime[burningNodes[0].x][burningNodes[0].y] = 0;
    int burnCount = 1;

    while (true) {
        spreadFire(s);
        Cell nextBurn = findFarthestNode();
        if (nextBurn.x == -1) break;
        burnTime[nextBurn.x][nextBurn.y] = 0;
        s.insert(nextBurn);
        burningNodes.push_back(nextBurn);
        burnCount++;
    }
    return burnCount;
}

int main() {
    int N;
    cin >> N;
    for(int i=1800;i<=N;i+=100){
        n=i;m=i;
    grid.assign(i, vector<int>(i, 0));
    burnTime.assign(i, vector<int>(i, -1));
    
    burningNodes.push_back({0, 0}); // Start burning from (0,0) corner
    int result = burnGrid();
    vector<double> factors={1.0,1.1,1.2,1.3,1.4,1.5,1.8,2.0};

    // cout << "burning number = "<<result << endl;
    for(double f:factors){
        int j=ceil(result/f);
        int bound=ceil((pow(j,3)+j)/3);
        cout<<"n = "<<i<<", burning number = "<<result <<", factor = "<<f<<", bound = "<<bound<<", n^2 = "<<i*i<<", Approximation valid ? "<<(bound<i*i ? "MIGHT BE" : "NOT YET")<<endl;
    }}
    return 0;
}
