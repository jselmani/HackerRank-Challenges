#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/*
The Node struct is defined as follows:
	struct Node {
	int data;
	Node* left;
	Node* right;
};

Proposed Solution - O(n) Time Complexity

Traverse through tree and store data values in an array.  If they are sorted, the tree is a BST.
We start from the ROOT and we work our way down the tree, strictly going to the left first of every node.
By doing so, we traverse to the bottom of the tree.  Once we reach a NULL value, we return and then push
the data of that node into the array.

This is a recursive solution that ensures that the nodes are sorted in ascending order.  If they do not, 
the BST does not meet criteria of the problem and STDOUT displays NO.
*/

vector<int> nodeList;

struct Node {
	int data;
	Node* left;
	Node* right;
};

struct Node* newNode(int data) {
	Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;

	return node;
}

void orderedTraversal(Node* n) {
	if (n == NULL) {
		return;
	}
	orderedTraversal(n->left);
	nodeList.push_back(n->data);
	orderedTraversal(n->right);
}

bool checkBST(Node* root) {
	orderedTraversal(root);
	for (int i = 1; i < nodeList.size(); i++) {
		if (nodeList[i] <= nodeList[i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	Node* root = newNode(4);
	// left of root
	root->left = newNode(2);
	root->left->left = newNode(1);
	root->left->right = newNode(3);
	// right of root
	root->right = newNode(6);
	root->right->left = newNode(5);
	root->right->right = newNode(7);

	Node* root2 = newNode(5);
	// left of root
	root2->left = newNode(2);
	root2->left->left = newNode(1);
	root2->left->right = newNode(4);
	// right of root
	root2->right = newNode(7);
	root2->right->left = newNode(6);
	root2->right->right = newNode(3);

	if (checkBST(root)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	nodeList.clear();

	if (checkBST(root2)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}
