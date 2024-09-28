#include <Tree.h>

template <class K, class V>
Tree<K, V>::Tree( const Node<K, V> &node ) {
    m_head = std::shared_ptr<Node<K, V>>(node);
}

template <class K, class V> 
Tree<K, V>::Tree( const K& key, const V& value ) {
    m_head = std::shared_ptr<Node<K, V>>(Node<K, V>(key, value));
}