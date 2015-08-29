#include <fstream>
#include <topcoder>
#include "LuckyXor.cpp"
namespace tc = TopCoder;

int main(int argc, char const *argv[]) {
    try {
        std::ifstream ifs(argv[1]);
        int a; tc::read(ifs, a);
        ifs.close();

        std::ofstream ofs(argv[2]);
        LuckyXor solver;
        tc::show(ofs, solver.construct(a));
        ofs.close();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}