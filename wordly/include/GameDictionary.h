#ifndef GAME_DICTIONARY_H
#define GAME_DICTIONARY_H

#include <set>
#include <string>

class GameDictionary {
public:
    GameDictionary( void );

    void add_word( std::string );
    inline const std::set<std::string>& get_all_words( void ) const { return m_dictionary; };
    std::string get_random_word( void );

private:
    std::set<std::string> m_dictionary;
};

#endif