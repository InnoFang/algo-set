package com.company;

import java.io.BufferedOutputStream;
import java.io.PrintWriter;

public class Solution {
    public static void main(String[] args) {
        PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));

        ListNode node1 = new ListNode(1);
        ListNode node2 = new ListNode(2);  node1.next = node2;
        ListNode node3 = new ListNode(3);  node2.next = node3;
        ListNode node4 = new ListNode(4);  node3.next = node4;
        node4.next = null;

        ListNode p = new Solution().swapPairs(node1);
        for (; p != null; p = p.next)
            out.print(p.val + " ");
        out.flush();
        out.close();
    }

    public ListNode swapPairs(ListNode head) {
        ListNode root = new ListNode(-1);
        root.next = head;
        ListNode pre = root;
        ListNode p = head, q;
        while (p != null && p.next != null) {
            q = p.next;
            p.next = q.next;
            pre.next = q;
            q.next = p;
            pre = p;
            p = p.next;
        }
        return root.next;
    }
}

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

