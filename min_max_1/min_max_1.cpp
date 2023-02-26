// min_max_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <climits>

struct Node {
    int value;
    Node* left;
    Node* right;
};

Node* new_node(int value)
{
    Node* node = new Node;
    node->value = value;
    node->left = node->right = NULL;
    return node;
}

int find_max_sum(Node* root, bool is_maximizer)
{
    if (root == NULL) {
        return 0;
    }

    if (root->left == NULL && root->right == NULL) {
        return root->value;
    }

    int left_sum = find_max_sum(root->left, !is_maximizer);
    int right_sum = find_max_sum(root->right, !is_maximizer);

    if (is_maximizer) {
        return std::max(left_sum, right_sum) + root->value;
    }
    else {
        return std::min(left_sum, right_sum) + root->value;
    }
}

int main()
{
    Node* root = new_node(8);
    root->left = new_node(2);
    root->right = new_node(10);
    root->left->left = new_node(4);
    root->left->right = new_node(6);
    root->right->left = new_node(12);
    root->right->right = new_node(14);

    std::cout << "The maximum sum is : " << find_max_sum(root, true) << std::endl;

    std::cin.get();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
