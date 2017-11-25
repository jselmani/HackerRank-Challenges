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
