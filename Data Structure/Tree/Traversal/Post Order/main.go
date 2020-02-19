package main

import(
	"fmt"
	"container/list"
)

type TreeNode struct {
    Val interface{}
    Left *TreeNode
    Right *TreeNode
}

/*
The binary tree in this example is shown as follow

       1
     /   \
    2     3
   / \   /  
  4   5 6
     /
    7

post-order traversal: 4 7 5 2 6 3 1
*/

func (tn *TreeNode) PostorderTraversalByRecursion() {
	if tn == nil {
		return
	}
	tn.Left.PostorderTraversalByRecursion()
	tn.Right.PostorderTraversalByRecursion()
	fmt.Print(tn.Val, " ")
}

func (tn *TreeNode) PostorderTraversal() {
	if tn == nil {
		return
	}

	stack := list.New()
	stack.PushBack(tn)
	var pre *TreeNode
	for stack.Len() > 0 {
		s := stack.Back()
		cur := s.Value.(*TreeNode)
		switch {
		case cur.Left != nil && cur.Left != pre && cur.Right != pre:
			stack.PushBack(cur.Left)
		case cur.Right != nil && cur.Right != pre:
			stack.PushBack(cur.Right)
		default:
			fmt.Print(cur.Val, " ")
			pre = cur
			stack.Remove(s)
		} 
	}
}

func main() {
	nodes := []int{1, 2, 3, 4, 5, 6, -1, -1, -1, 7}

	root := generateBTree(nodes, 0)

	root.PostorderTraversalByRecursion()
	fmt.Println()

	root.PostorderTraversal()
	fmt.Println()
}

func generateBTree(nodes []int, index int) *TreeNode {
	var node TreeNode

	if index < len(nodes) && nodes[index] != -1 {
		node = TreeNode{Val: nodes[index]}
		node.Left = generateBTree(nodes, index * 2 + 1)
		node.Right = generateBTree(nodes, index * 2 + 2)
		return &node
	}
	return nil
}
