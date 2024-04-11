#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: height or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree)
    {
        size_t a = 0, b = 0;

        a = tree->left ? 1 + binary_tree_height(tree->left) : 0;
        b = tree->right ? 1 + binary_tree_height(tree->right) : 0;
        return ((a > b) ? a : b);
    }
    return (0);
}
