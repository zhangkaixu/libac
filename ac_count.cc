#include <cstdio>
#include <iostream>
#include "ac.h"

using namespace std;
using namespace ac;

/**
 * */

int main(int argc, const char** argv) {
    if (argc == 1) {
        printf("counting using a dict file\n");
        printf("usage: %s ac.bin < input > output\n", argv[0]);
        return 0;
    }

    AC_Automata aca;
    load(argv[1], &aca);

    std::vector<unsigned int> matches;

    for (string line; getline(cin, line); ) {
        unsigned int pos = 0;
        for (size_t i = 0; i < line.size(); i++) {
            unsigned char c = line[i];
            pos = input(aca, pos, c);
            output(aca, pos, &matches);
            printf(">>\n");
            for (auto j = 0; j < matches.size(); j++) {
                printf(">>%u\n", matches[j]);
            }
        }
    }
    return 0;
}
