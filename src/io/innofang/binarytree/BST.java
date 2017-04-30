package io.innofang.binarytree;

import io.innofang.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/4/30.
 * <p>
 * the Binary Search Tree
 */
public class BST<K, V> {

    private Node root;
    private int count;
    private Comparator<K> kComparator;
    private Comparator<V> VComparator;

    public BST(Comparator<K> kComparator, Comparator<V> VComparator) {
        this.kComparator = kComparator;
        this.VComparator = VComparator;
        root = null;
        count = 0;
    }

    /**
     * get the number of node in this BST
     *
     * @return count
     */
    public int size() {
        return count;
    }

    /**
     * judge whether the BST is empty
     *
     * @return true if the BST is empty, otherwise false
     */
    public boolean isEmpty() {
        return count == 0;
    }

    /**
     * Insert a new node with key and value into the BST
     *
     * @param key   the key of the node you want to insert
     * @param value the value of the node you want to insert
     */
    public void insert(K key, V value) {
        root = insert(root, key, value);
    }

    private Node insert(Node node, K key, V value) {
        if (null == node) {
            count++;
            return new Node(key, value);
        }

        if (kComparator.equal(key, node.key)) {
            node.value = value;
        } else if (kComparator.lessThan(key, node.key)) {
            node.left = insert(node.left, key, value);
        } else { // key > node.key (kComparator.lessThan(key, node.key))
            node.right = insert(node.right, key, value);
        }
        return node;
    }


    /**
     * judge whether the BST contain the node with key
     *
     * @param key you want to find the node with key
     * @return true if the BST contain the node with this key, otherwise false
     */
    boolean contain(K key) {
        return contain(root, key);
    }

    private boolean contain(Node node, K key) {
        if (null == node) {
            return false;
        }

        if (kComparator.equal(key, node.key)) {
            return true;
        } else if (kComparator.lessThan(key, node.key)) {
            return contain(node.left, key);
        } else { // key > node.key
            return contain(node.right, key);
        }
    }


    /**
     *Traverse the BST to query the value of the corresponding key
     * @param key the node with value of key
     * @return the value if search successfully, otherwise <code>null</code>
     */
    public V search(K key) {
        return search(root, key);
    }

    private V search(Node node, K key) {
        if (null == node)
            return null;
        if (kComparator.equal(key, node.key))
            return node.value;
        else if (kComparator.lessThan(key, node.key))
            return search(node.left, key);
        else // key > node.key
            return search(node.right, key);
    }

    /**
     * The Node of the Binary Search Tree
     */
    private class Node {
        K key;
        V value;
        Node left;
        Node right;

        private Node(K key, V value) {
            this.key = key;
            this.value = value;
            this.left = null;
            this.right = null;
        }

        private Node(Node node) {
            this.key = node.key;
            this.value = node.value;
            this.right = node.right;
            this.left = node.left;
        }
    }
}
