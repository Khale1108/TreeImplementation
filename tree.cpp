#include "tree.h"
#include <iostream>
#include <queue>

//not going to implement this. I'd have to pass by reference a queue into the function and onto the stack.
//This is just an all around bad implementation.
void Tree::levelOrderTravereRecursive(Node* localNode) 
{
}

void Tree::levelOrderInsertIterative(Node* nodeToInsert)
{
	if (root==nullptr) 
	{
		root = nodeToInsert;
	}

	queue<Node*> tempQueue;
	tempQueue.push(root);

	while (!tempQueue.empty()) 
	{
		Node* tempNode = tempQueue.front();
		tempQueue.pop();

		if (tempNode->left) 
		{
			tempQueue.push(tempNode->left);
		}
		else
		{
			tempNode->left = nodeToInsert;
			break;
		}

		if (tempNode->right) 
		{
			tempQueue.push(tempNode->right);
		}
		else
		{
			tempNode->right = nodeToInsert;
			break;
		}

	}

}

void Tree::inOrderTraverse(Node* nodeLocal)
{
	if (nodeLocal ==nullptr)
	{
		return;
	}

	inOrderTraverse(nodeLocal->left);
	cout << nodeLocal->data;
	inOrderTraverse(nodeLocal->right);
}

void Tree::postOrderTraverse(Node* nodeLocal)
{
	if (nodeLocal == nullptr)
	{
		return;
	}

	postOrderTraverse(nodeLocal->left);
	postOrderTraverse(nodeLocal->right);
	cout << nodeLocal->data;
}

void Tree::preOrderTraverse(Node* nodeLocal)
{
	if (nodeLocal == nullptr)
	{
		return;
	}

	cout << nodeLocal->data;
	preOrderTraverse(nodeLocal->left);
	preOrderTraverse(nodeLocal->right);
}

void Tree::breadthFirstTraverseIterative(Node* nodeLocal)
{
	if (nodeLocal == nullptr) 
	{
		return;
	}

	queue<Node*> tempQueue;
	tempQueue.push(nodeLocal);
	cout << nodeLocal->data;

	while (!tempQueue.empty()) 
	{
		Node* tempNode = tempQueue.front();
		tempQueue.pop();

		if (tempNode->left) 
		{
			cout << tempNode->left->data;
			tempQueue.push(tempNode->left);
		}
		else
		{
			return;
		}

		if (tempNode->right)
		{
			cout << tempNode->right->data;
			tempQueue.push(tempNode->right);
		}
		else
		{
			return;
		}
	}

}