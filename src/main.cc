#include <fstream>
#include <iostream>
#include <stdint.h>
#include <string>
#include <vector>
#include "Lexical.hh"
#include "Option.hh"

__option__ option;

auto parse(std::string s) {
    std::ifstream file;
    file.open(s);
    file >> s;
    tokens tk(s);
    return tk.data;
};

std::vector<std::string> dt;
int main(int argc,char ** argv) {
// 读入文件 和 传入参数
    for (int i = 1;i < argc;i++) {
        if (argv[i][0] == '-') {
            option.getArgm(argv[i] + 1);
        } else {
            auto c = parse(argv[i]);
            for(auto l : c) {
                // std::cout << l.value << '\n';
            }
        }
    }

    return 0;
}