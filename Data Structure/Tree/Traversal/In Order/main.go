package main

import(
	"fmt"
	"container/list"
)

type TreeNode struct {
    Val int
    Left *TreeNode
    Right *TreeNode
}

func  InorderTraversalByRecursion(root *TreeNode) {
	if root == nil {
		return
	}
	InorderTraversalByRecursion(root.Left)
	fmt.Print(root.Val, " ")
	InorderTraversalByRecursion(root.Right)
}

func InorderTraversal(root *TreeNode) {
	stack := list.New()
	node := root
	for node != nil || stack.Len() > 0 {
		for node != nil {
			stack.PushBack(node)
			node = node.Left
		} 
		s := stack.Back()
		node = s.Value.(*TreeNode)
		stack.Remove(s)
		fmt.Print(node.Val, " ")
		node = node.Right
		
	}
}

func main() {
	nodes := []int{1, 2, 3, 4, 5, 6, -1, -1, -1, 7}

	root := generateBTree(nodes, 0)

	InorderTraversalByRecursion(root)
	fmt.Println()

	InorderTraversal(root)
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
