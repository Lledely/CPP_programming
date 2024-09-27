#ifndef TREE_H
#define TREE_H

#include <Node.h>

template <class K, class V>
class Tree {
public:

    Tree( void );
    Tree( K &, V & );
    Tree( const Node<K, V> & )

    void insert( K & ,V & );
    void insert( const Node<K, V> & );

    void remove( K & );
    V &get( K & );

private:

    std::shared_ptr<Node<K, V>> m_head;

};

#endif