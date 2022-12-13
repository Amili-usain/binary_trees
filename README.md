# Binary trees

## Learning Objectives


    What is a binary tree
    What is the difference between a binary tree and a Binary Search Tree
    What is the possible gain in terms of time complexity compared to linked lists
    What are the depth, the height, the size of a binary tree
    What are the different traversal methods to go through a binary tree
    What is a complete, a full, a perfect, a balanced binary tree

## Data structures

### Basic Binary Tree

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree

```
typedef struct binary_tree_s bst_t;
```

### AVL Tree

```
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```

| File/Folder                  | Description                |
| ---------------------------------- | ---------------------------|
| [tests](./tests) | Folder of test files for all tasks
| [binary_tree_print.c](./binary_tree_print.c) | <ul><li>Helper file provided for the project by alx</li><li>A function that prints binary trees in a pretty way.</li></ul> |
| [binary_trees.h](./binary_trees.h) | <ul><li> Header file containing definitions</li><li>and prototypes for all types and functions written for the project.</li></ul> |
| [0-binary_tree_node.c](./0-binary_tree_node.c) | <ul><li>A function that creates a binary tree node with a given parent and value.</li><li>Returns a pointer to the new node, or `NULL` on failure.</li></ul> |
| [1-binary_tree_insert](./1-binary_tree_insert) | <ul><li>A function that inserts a node as the left-child of another.</li><li>Returns a pointer to the new node, or `NULL` on failure.</li><li>If the given `parent` already contains a left node, the new node takes its place and the old left-child becomes the left-child of the new node.</li></ul> |
| [2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c) | <ul><li>A function that insert a node as the right-child of another.</li><li>Returns a pointer to the new node, or `NULL` on failure.</li><li>If the given `parent` already contains a right node, the new node takes its place and the old right-child becomes the right-child of the new node.</li></ul> |
| [3-binary_tree_delete.c](./3-binary_tree_delete.c) | A function that deletes an entire binary tree. |
| [4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c) | <ul><li>A function that checks if a given node is a leaf.</li><li>Returns `1` if the node is a leaf, `0` otherwise.</li></ul> |
| [5-binary_tree_is_root.c](./5-binary_tree_is_root.c) | <ul><li>A function that checks if a given node is a root.</li><li>Returns `1` if the node is a root, `0` otherwise.</li></ul> |
| [6-binary_tree_preorder.c](./6-binary_tree_preorder.c) | A function that traverses a tree using pre-order traversal. |
| [7-binary_tree_inorder.c](./7-binary_tree_inorder.c) | A function that traverses a tree using in-order traversal. |
| [8-binary_tree_postorder.c](./8-binary_tree_postorder.c) | A function that traverses a tree using post-order traversal. |
| [9-binary_tree_height.c](./9-binary_tree_height.c) | A function that returns the height of a binary tree. |
| [10-binary_tree_depth.c](./10-binary_tree_depth.c) | A function that returns the depth of a given node in a binary tree. |
| [11-binary_tree_size.c](./11-binary_tree_size.c) | A function that returns the size of a binary tree. |
| [12-binary_tree_leaves.c](./12-binary_tree_leaves.c) | A function that returns the number of leaves in a binary tree. |
| [13-binary_tree_nodes.c](./13-binary_tree_nodes.c) | A function that returns the number of nodes in a binary tree with at least one child. |
| [14-binary_tree_balance.c](./14-binary_tree_balance.c) | A function that returns the balance factor of a binary tree. |
| [15-binary_tree_is_full.c](./15-binary_tree_is_full.c) | <ul><li>A function that checks if a binary tree is full.</li><li>Returns `1` if a tree is full, `0` otherwise.</li></ul> |
| [16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c) | <ul><li>A function that checks if a binary tree is perfect.</li><li>Returns `1` if a tree is perfect, `0` otherwise.</li></ul> |
| [17-binary_tree_sibling.c](./17-binary_tree_sibling.c) | <ul><li>A function that returns a pointer to the sibling of a given node in a binary tree.</li><li>Returns `NULL` if no sibling is found.</li></ul> |
| [18-binary_tree_uncle.c](./18-binary_tree_uncle.c) | <ul><li>A function that returns a pointer to the uncle of a given node in a binary tree.</li><li>Returns `NULL` if no uncle is found.</li></ul> |
| [100-binary_trees_ancestor.c](./100-binary_trees_ancestor.c) | <ul><li>A function that returns a pointer to the lowest common ancestor node of two given nodes in a binary tree.</li><li>Returns `NULL` if no common ancestor is found.</li></ul> |
| [101-binary_tree_levelorder.c](./101-binary_tree_levelorder.c) | A function that traverses a binary tree using level-order traversal. |
| [102-binary_tree_is_complete.c](./102-binary_tree_is_complete.c) | <ul><li>A function that checks if a binary tree is complete.</li><li>Returns `1` if the tree is complete, `0` otherwise.</li></ul> |
| [103-binary_tree_rotate_left.c](./103-binary_tree_rotate_left.c) | <ul><li>A function that performs a left-rotation on a binary tree.</li><li>Returns a pointer to the new root node of the tree after rotation.</li></ul> |
| [104-binary_tree_rotate_right.c](./104-binary_tree_rotate_right.c) | <ul><li>A function that performs a right-rotation on a binary tree.</li><li>Returns a pointer to the new root node of the tree after rotation.</li></ul> |
| [110-binary_tree_is_bst.c](./110-binary_tree_is_bst.c) | <ul><li>A function that checks if a binary tree is a valid binary search tree.</li><li>Returns `1` if the tree is a valid BST, `0` otherwise.</li></ul> |
| [111-bst_insert.c](./111-bst_insert.c) | <ul><li>A function that inserts a value into a binary search tree.</li><li>Returns a pointer to the new node, or `NULL` on failure.</li><li>If the tree is `NULL`, the value becomes the root node.</li><li>The value is ignored if it is already present in the tree.</li></ul> |
| [112-array_to_bst.c](./112-array_to_bst.c) | <ul><li>A function that builds a binary search tree from an array.</li><li>Returns a pointer to the root node of the created tree, or `NULL` on failure.</li></ul> |
| [113-bst_search.c](./113-bst_search.c) | <ul><li>A function that searches for a value in a binary search tree.</li><li>If the value is matched in the BST, returns a pointer to the matched node.</li><li>Otherwise, returns `NULL`.</li></ul> |
| [114-bst_remove.c](./114-bst_remove.c) | <ul><li>A function that removes a node from a binary search tree.</li><li>Returns a pointer to the new root node of the tree after deletion.</li><li>If the node to be deleted has two children, it is replaced with its first in-order successor.</li></ul> |
| [115-O](./115-O) | <ul><li>A file containing the average time complexities of binary search tree operations (one answer per line):</li><li>Inserting the value `n`.</li><li>Removing the node with the value `n`.</li><li>Searching for a node in a BST of size `n`.</li></ul> |
| [120-binary_tree_is_avl.c](./120-binary_tree_is_avl.c) | <ul><li>A function that checks if a binary tree is a valid AVL tree.</li><li>If the tree is a valid AVL tree, returns `1`.</li><li>Otherwise, returns `0`.</li></ul>
| [121-avl_insert.c](./121-avl_insert.c) | <ul><li>A function that inserts a value in an AVL tree.</li><li>Returns a value to the inserted node, or `NULL` on failure.</li></ul>
| [122-array_to_avl.c](./122-array_to_avl.c) | <ul><li>A function that builds an AVL tree from an array.</li><li>Returns a pointer to the root node of the created AVL tree, or `NULL` on failure.</li><li>Ignores duplicate values.</li></ul> |
| [123-avl_remove.c](./123-avl_remove.c) | <ul><li>A function that removes a node from an AVL tree</li><li>Returns pointer to the new root node of the tree after removing the desired value, and after rebalancing</li><li>If the node to be deleted has two children, it is replaced with its first in-order successor (not predecessor)</li></ul> |
| [124-sorted_array_to_avl.c](./124-sorted_array_to_avl.c) | <ul><li>A function that builds an AVL tree from an array.</li><li>Ignores duplicate value in the array</li><li>Returns pointer to the root node of the created AVL tree, or `NULL` on failure</li></ul> |
| [125-O](./125-O) | <ul><li>Text file containing the average time complexities of AVL tree operations (one answer per line):</li><li>Inserting the value `n`.</li><li>Removing the node with the value `n`.</li><li>Searching for a node in an AVL tree of size `n`.</li></ul> |
| [130-binary_tree_is_heap.c](./130-binary_tree_is_heap.c) | <ul><li>A function that checks if a binary tree is a valid Max Binary Heap</li><li>Returns `1` if `tree` is a valid Max Binary Heap, and `0` otherwise</li><li>If `tree` is `NULL`, return `0`</li></ul> |
| [131-heap_insert.c](./131-heap_insert.c) | <ul><li>A function that inserts a value in Max Binary Heap</li><li>Returns pointer to the created node, or `NULL` on failure</li><li>Follows a `max Heap` ordering.</li></ul> |
| [132-array_to_heap.c](./132-array_to_heap.c) | <ul><li>A function that builds a Max Binary Heap tree from an array</li><li>Returns pointer to the root node of the created Binary Heap, or NULL on failure</li></ul> |
| [133-heap_extract.c](./133-heap_extract.c) | <ul><li>A function that extracts the root node of a Max Binary Heap</li><li>Returns the `value` stored in the root node and `0` on failure</li></ul> |
| [134-heap_to_sorted_array.c](./134-heap_to_sorted_array.c) | <ul><li>A function that converts a Binary Max Heap to a sorted array of integers</li><li>`size` is assumed a valid address</li><li>Returns  `array` sorted in `descending order`</li></ul> | 
| [135-O](./135-O) | <ul><li>Text file containing the average time complexities of binary heap operations (one answer per line):</li><li>Inserting the value `n`.</li><li>Extracting the root node.</li><li>Searching for a node in a binary heap of size `n`.</li></ul> |

## Authors :black_nib:

* __Mugigayi Amili Hussein__ <[Amili-usain](https://github.com/Amili-usain)>
