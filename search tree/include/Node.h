#ifndef NODE_H
#define NODE_H

#include <memory>

template <class K, class V>
class Node {
public:

    Node( K, V );
    Node( void ): m_key( 0 ), m_value( 0 ), m_left( NULL ), m_right( NULL ) {};

    void set_left_child( const Node<K, V> & );
    void set_right_child( const Node<K, V> & );

    const Node<K, V>& get_left_child( void ) const;
    const Node<K, V>& get_right_child( void ) const;

private:
    
    K m_key;
    V m_value;
    std::shared_ptr<Node<K, V>> m_left;
    std::shared_ptr<Node<K, V>> m_right;

};

#endif