#include <iostream>

using namespace std;

struct Node {
	int value;
	Node* left;
	Node* right;
};

int SumNode(Node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return (root->value + SumNode(root->left) + SumNode(root->right));
	}
}

int main()
{
	return 0;
}