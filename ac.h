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

state_t read(const AC_Automata&, const state_t, const key_t);

void save(const AC_Automata&, const char* filename);

//state_t trans(const AC_Automata, const state_t, const key_t, std::vector<value_t>* values = NULL);
//state_t trans(const TRIE_Automata, const state_t, const key_t, value_t* value);

/// read a key and trans from state old to new
//state_t ac_read(const AC_Automata&, const key_t, state_t);

/// get all suffix

//void ac_get(const AC_Automata&, const state_t, std::vector<value_t>& values);
}

#endif
