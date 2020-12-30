#include "iostream";
#include "tree.h"

using namespace std;

int main() 
{
	Node* root = new Node(1);
	Tree* test = new Tree(root);

	test->levelOrderInsertIterative(new Node(2));
	test->levelOrderInsertIterative(new Node(3));
	test->levelOrderInsertIterative(new Node(4));
	test->levelOrderInsertIterative(new Node(5));
	test->breadthFirstTraverseIterative(root);
}