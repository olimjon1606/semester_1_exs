#include <iostream>
#include <string>
#include <vector>

using namespace std;
void change_first(std::vector<int> ys) {
    std::cout << "before change, inside change_first ys[0] = " << ys[0] << std::endl;
    ys[0] = -1;
    std::cout << "after change, inside change_first ys[0] = " << ys[0] << std::endl;
}

int main() {
    std::vector<int> xs(10, 7);

    std::cout << "before change, inside main xs[0] = " << xs[0] << std::endl;
    change_first(xs);
    std::cout << "after change, inside main xs[0] = " << xs[0] << std::endl;

}