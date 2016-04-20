#ifndef __AC_H__
#define __AC_H__
#include <vector>
#include <string>
namespace ac {


typedef unsigned char key_t;
typedef unsigned int value_t;

typedef std::vector<unsigned int> AC_Automata;
typedef std::vector<unsigned long> TRIE_Automata;
typedef unsigned int state_t;

const state_t ROOT = 0;


bool build(const std::vector<std::string>&, const std::vector<value_t>&, AC_Automata*);

void save(const AC_Automata&, const char* filename);
void load(const char* filename, AC_Automata* aca);


state_t input(const AC_Automata&, const state_t, const key_t);
void output(const AC_Automata& aca, const state_t index, std::vector<value_t>* matches);

}

#endif
