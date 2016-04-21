#include <cstdio>
#include <iostream>
#include "ac.h"

using namespace std;
using namespace ac;

/**
 * ##ac_build
 * 用于创建AC自动机
 * */

int main(int argc, const char** argv) {
    if (argc == 1) {
        printf("build AC-Automata using a dict file\n");
        printf("usage: %s ac.bin < ordered_dict_file\n", argv[0]);
        return 0;
    }
    std::vector<std::string> keys;
    std::vector<unsigned int> values;

    for (string line; getline(cin, line); ) {
        size_t table_pos = line.find('\t');
        if (table_pos != std::string::npos) {
            keys.push_back(line.substr(0, table_pos));
            values.push_back(atoi(line.c_str() + table_pos + 1));
        } else {
            keys.push_back(std::move(line));
            values.push_back((unsigned int)values.size());
        }
    }
    //printf("%lu\n", text_dict.size());

    AC_Automata aca;
    if (build(keys, values, &aca)) {
        printf("%lu\n", aca.size());
    }

    /// build trie
    save(aca, argv[1]);
    return 0;
}
