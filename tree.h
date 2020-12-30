#ifndef TREE_H
#define TREE_H

using namespace std;

struct Node 
{
	int data = 0;
	Node* right = nullptr;
	Node* left = nullptr;

	Node(int inData)
	{
		data = inData;
		right, left = nullptr;
	};
};

class Tree
{

public:
	Node* root;

	Tree(Node* inRoot)
	{
		root = inRoot;
	}

	void inOrderTraverse(Node* nodeLocal);
	void postOrderTraverse(Node* nodeLocal);
	void preOrderTraverse(Node* nodeLocal);
	void breadthFirstTraverseIterative(Node* nodeLocal);
	void levelOrderInsertIterative(Node* nodeToInsert);
	void Tree::levelOrderTravereRecursive(Node* localNode);


};



#endif TREE_H
