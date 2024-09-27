#include <Node.h>

template <class K, class V>
Node<K, V>::Node(K key, V value): m_key(key), m_value(value) {}

template <class K, class V>
const Node<K, V> & Node<K, V>::get_left_child( void ) const {
    return m_left.get();
}

template <class K, class V>
const Node<K, V> & Node<K, V>::get_right_child( void ) const {
    return m_right.get();
}

template <class K, class V> 
void Node<K, V>::set_left_child( const Node<K, V> &node ) {
    m_left = std::shared_ptr<Node<K, V>>( node );
}

template <class K, class V> 
void Node<K, V>::set_right_child( const Node<K, V> &node ) {
    m_right = std::shared_ptr<Node<K, V>>( node );
}