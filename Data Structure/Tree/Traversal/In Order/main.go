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

func (tn *TreeNode) InorderTraversalByRecursion() {
	if tn == nil {
		return
	}
	tn.Left.InorderTraversalByRecursion()
	fmt.Print(tn.Val, " ")
	tn.Right.InorderTraversalByRecursion()
}

func (tn *TreeNode) InorderTraversal() {
	stack := list.New()
	node := tn
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

	root.InorderTraversalByRecursion()
	fmt.Println()

	root.InorderTraversal()
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
