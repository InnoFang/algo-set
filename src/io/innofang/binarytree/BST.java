package io.innofang.binarytree;

import io.innofang.utils.comparator.Comparator;

import java.util.LinkedList;
import java.util.Queue;

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
     * Traverse the BST to query the value of the corresponding key
     *
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

    public void preOrder() {
        preOrder(root);
    }

    private void preOrder(Node node) {
        if (null != node) {
            System.out.println(node.value);
            preOrder(node.left);
            preOrder(node.right);
        }
    }

    public void inOrder() {
        inOrder(root);
    }

    private void inOrder(Node node) {
        if (null != node) {
            inOrder(node.left);
            System.out.println(node.value);
            inOrder(node.right);
        }
    }

    private void postOrder() {
        postOrder(root);
    }

    private void postOrder(Node node) {
        if (null != node) {
            postOrder(node.left);
            postOrder(node.right);
            System.out.println(node.value);
        }
    }

    public void levelOrder() {
        Queue<Node> nodeQueue = new LinkedList<>();
        nodeQueue.add(root);
        while (!nodeQueue.isEmpty()) {
            Node node = nodeQueue.poll();
            System.out.println(node.value);
            if (null != node.left) {
                nodeQueue.add(node.left);
            }
            if (null != node.right) {
                nodeQueue.add(node.right);
            }
        }
    }

    /**
     * get the minimum in this BST
     *
     * @return the key of the minimum
     */
    public K minimum() {
        if (isEmpty()) {
            throw new RuntimeException("cannot get the minimum when the BST is empty");
        }
        return minimum(root).key;
    }

    private Node minimum(Node node) {
        if (null == node.left) {
            return node;
        }
        return minimum(node.left);
    }

    /**
     * get the maximum in this BST
     *
     * @return the key of the maximum
     */
    public K maximum() {
        if (isEmpty()) {
            throw new RuntimeException("cannot get the maximum when the BST is empty");
        }
        return maximum(root).key;
    }

    private Node maximum(Node node) {
        if (null == node.right) {
            return node;
        }
        return maximum(node.right);
    }

    /**
     * remove the minimum in this BST
     */
    public void removeMin() {
        if (null != root) {
            root = removeMin(root);
        }
    }

    /**
     * remove the minimum in this BST
     *
     * @param node the root of BST
     * @return after remove the minimum, the root of BST
     */
    private Node removeMin(Node node) {
        if (null == node.left) {
            Node rightNode = node.right;
            count--;
            return rightNode;
        }
        node.left = removeMin(node.left);
        return node;
    }

    /**
     * remove the maximum in this BST
     */
    public void removeMax() {
        if (null != root) {
            root = removeMax(root);
        }
    }

    /**
     * remove the maximum in this BST
     *
     * @param node the root of BST
     * @return after remove the maximum, the root of BST
     */
    private Node removeMax(Node node) {
        if (null == node.right) {
            Node leftNode = node.left;
            count--;
            return leftNode;
        }
        node.right = removeMax(node.right);
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

    /**
     * remove the node with the key in this BST
     *
     * @param key the key of the node you want to remove
     */
    public void remove(K key) {
        root = remove(root, key);
    }

    /**
     * @param node
     * @param key
     * @return
     */
    private Node remove(Node node, K key) {
        if (null == node) {
            return null;
        }
        if (kComparator.lessThan(key, node.key)) {
            node.left = remove(node.left, key);
            return node;
        } else if (kComparator.moreThan(key, node.key)) {
            node.right = remove(node.right, key);
            return node;
        } else {
            if (null == node.left) {
                Node rightNode = node.right;
                count--;
                return rightNode;
            } else if (null == node.right) {
                Node leftNode = node.left;
                count--;
                return leftNode;
            } else {
                Node successor = new Node(minimum(node.right));
                count++;
                successor.right = removeMin(node.right);
                successor.left = node.left;
                count--;
                return successor;
            }
        }
    }
}
