#include "include/GameDictionary.h"

void GameDictionary::add_word( std::string word) {
    m_dictionary.insert( word );
}