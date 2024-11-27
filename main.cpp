#include <vector>

class Edge {
  private:
    int position;
    int orientation;

    Edge(int pos, int ori) : position(pos % 12), orientation(ori % 2) {};
};

class Corner {
  private:
    int position;
    int orientation;

    Corner(int pos, int ori) : position(pos % 8), orientation(ori % 3) {};
};

class Cube {
  private:
    std::vector<Edge> edges;
    std::vector<Corner> corners;

  public:
    Cube() {
        for (int i = 0; i < 12; ++i) {
            edges.emplace_back(i, 0);
        }
        for (int i = 0; i < 8; ++i) {
            corners.emplace_back(i, 0);
        }
    }
};
