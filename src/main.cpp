#include <bits/stdc++.h>

typedef std::pair<int, int> P;
std::map<std::string, P> argMap = {
    { "-h", { 0, 1 } },
    { "--help", { 0, 1 } },
    { "-o", { 1, 2 } },
    { "--output", { 1, 2 } },
    { "-r", { 0, 3 } },
    { "--run", { 0, 3 } }
}; // Argument, Argument count, Jump point

void help()
{
}
namespace ArgumentCompute {
inline void exception(const std::string& str, int code)
{
    std::cout << str << std::endl;
    exit(code);
}

void executor(int argc, char** argv)
{
    for (int i = 0; i < argc; i++) {
        std::string curStr = argv[i];
        std::vector<std::string> args;
        if (argMap.find(curStr) == argMap.end()) {
            exception("Invalid Argument:" + curStr, 1);
        }
        for (int j = 1; j <= argMap[curStr].first; j++) {
            i++;
            args.emplace_back(argv[i + j]);
        }
    }
}
}

int main(int argc, char** argv)
{
    std::cerr << argc << std::endl;
    ArgumentCompute::executor(argc, argv);
    return 0;
}