#ifndef GAME_DICTIONARY_H
#define GAME_DICTIONARY_H

#include <set>
#include <string>

class GameDictionary {
public:
    void add_word( std::string );
    std::set<std::string>& get_all_words( void );
    std::string get_random_word( void );

private:
    std::set<std::string> m_dictionary;
};

#endif