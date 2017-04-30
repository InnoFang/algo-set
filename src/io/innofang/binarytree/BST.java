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
     * @return count
     */
    public int size() {
        return count;
    }

    /**
     * judge whether the BST is empty
     * @return true if the BST is empty, otherwise false
     */
    public boolean isEmpty(){
        return count == 0;
    }

    public void insert(K key, V value) {
        root = insert(root, key, value);
    }

    private Node insert(Node node, K key, V value) {
        if ( null == node ){
            count++;
            return new Node(key, value);
        }

        if (kComparator.equal(key, node.key)) {
            node.value = value;
        } else if (kComparator.lessThan(key, node.key)){
            node.left = insert(node.left, key, value);
        } else { // key > node.key (kComparator.lessThan(key, node.key))
            node.right = insert(node.right, key, value);
        }
        return node;
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
