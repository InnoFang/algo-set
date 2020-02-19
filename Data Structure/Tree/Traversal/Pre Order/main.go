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

pre-order traversal: 1 2 4 5 7 3 6
*/

func (tn *TreeNode) PreorderTraversalByRecursion() {
	if tn == nil {
		return
	}
	fmt.Print(tn.Val, " ")
	tn.Left.PreorderTraversalByRecursion()
	tn.Right.PreorderTraversalByRecursion()
}

func (tn *TreeNode) PreorderTraversal() {
	stack := list.New()
	node := tn
	for node != nil || stack.Len() > 0 {
		for node != nil {
			fmt.Print(node.Val, " ")
			stack.PushBack(node)
			node = node.Left
		} 
		s := stack.Back()
		node = s.Value.(*TreeNode)
		stack.Remove(s)
		node = node.Right
		
	}
}

func main() {
	nodes := []int{1, 2, 3, 4, 5, 6, -1, -1, -1, 7}

	root := generateBTree(nodes, 0)

	root.PreorderTraversalByRecursion()
	fmt.Println()

	root.PreorderTraversal()
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
