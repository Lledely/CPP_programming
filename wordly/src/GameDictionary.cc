#include <GameDictionary.h>

GameDictionary::GameDictionary( void ) {
    m_dictionary = std::set<std::string>( {} );
}

void GameDictionary::add_word( std::string word) {
    m_dictionary.insert( word );
}

std::string GameDictionary::get_random_word( void ) {

    return "cocks";
}