# Binary Trees

---
## Project Details

### Description
![image](https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png)
Project completed for [Holberton School](https://github.com/holbertonschool/)

### What students should learn from this project
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

#### Environment 
Ubuntu 14.04 LTS

## Table of Contents
* [**Project Requirements**](#project-requirements)
* [**Project BreakDown**](#project-breakdown)
* [**Authors**](#authors)


### Project Requirements
#### Requirements for Python scripts
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
- The prototypes of all your functions should be included in your header file called binary_trees.h
- Don’t forget to push your header file
- All your header files should be include guarded

### Data Structures
```C
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
```C
Binary Search Tree

typedef struct binary_tree_s bst_t;


AVL Tree

typedef struct binary_tree_s avl_t;

Max Binary Heap

typedef struct binary_tree_s heap_t;
```
### Print function
To match the examples in the tasks, you are given [this function](https://github.com/holbertonschool/0x1C.c)
This function is used only for visualisation purpose. You don't have to push it to your repo. It may not be used during the correction
### Project BreakDown
<h4 class="task">
    0. New node
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that creates a binary tree node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the parent node of the node to create</li>
<li>And <code>value</code> is the value to put in the new node</li>
<li>When created, a node does not have any child</li>
<li>Your function must return a pointer to the new node, or <code>NULL</code> on failure</li>
</ul>


<h4 class="task">
    1. Insert left
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that inserts a node as the left-child of another node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the left-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li>
<li>If <code>parent</code> already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.</li>
</ul>


<h4 class="task">
    2. Insert right
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that inserts a node as the right-child of another node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the right-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li>
<li>If <code>parent</code> already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.</li>
</ul>


<h4 class="task">
    3. Delete
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that deletes an entire binary tree</p><ul>
<li>Prototype: <code>void binary_tree_delete(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to delete</li>
</ul>


<h4 class="task">
    4. Is leaf
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a node is a leaf</p><ul>
<li>Prototype: <code>int binary_tree_is_leaf(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a leaf, and <code>0</code> otherwise</li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>


<h4 class="task">
    5. Is root
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a given node is a root</p><ul>
<li>Prototype: <code>int binary_tree_is_root(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a root, and <code>0</code> otherwise</li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>


<h4 class="task">
    6. Pre-order traversal
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that goes through a binary tree using pre-order traversal</p><ul>
<li>Prototype: <code>void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
</ul>


<h4 class="task">
    7. In-order traversal
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that goes through a binary tree using in-order traversal</p><ul>
<li>Prototype: <code>void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
</ul>


<h4 class="task">
    8. Post-order traversal
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that goes through a binary tree using post-order traversal</p><ul>
<li>Prototype: <code>void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
</ul>


<h4 class="task">
    9. Height
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that measures the height of a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_height(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the height of</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    10. Depth
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that measures the depth of a node in a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_depth(const binary_tree_t *node);</code></li>
<li>Where <code>tree</code> is a pointer to the node to measure the depth of</li>
<li>If <code>node</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    11. Size
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that measures the size of a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_size(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the size of</li>
</ul>


<h4 class="task">
    12. Leaves
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that counts the leaves in a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_leaves(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the leaves in</li>
<li>A <code>NULL</code> pointer is not a leaf</li>
</ul>


<h4 class="task">
    13. Nodes
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that counts the nodes with at least 1 child in a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_nodes(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the nodes in</li>
<li>A <code>NULL</code> pointer is not a node</li>
</ul>


<h4 class="task">
    14. Balance factor
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that measures the balance factor of a binary tree</p><ul>
<li>Prototype: <code>int binary_tree_balance(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the balance factor of</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>


<h4 class="task">
    15. Is full
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a binary tree is full</p><ul>
<li>Prototype: <code>int binary_tree_is_full(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    16. Is perfect
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a binary tree is perfect</p><ul>
<li>Prototype: <code>int binary_tree_is_perfect(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    17. Sibling
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that finds the sibling of a node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_sibling(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the sibling of</li>
<li>Your function must return a pointer to the sibling node</li>
<li>If <code>node</code> has no sibling, return <code>NULL</code></li>
</ul>


<h4 class="task">
    18. Uncle
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that finds the uncle of a node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_uncle(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the uncle of</li>
<li>Your function must return a pointer to the uncle node</li>
<li>If <code>node</code> has no uncle, return <code>NULL</code></li>
</ul>


## Authors
* **Andres Vasquez** [LinkedIn](https://www.linkedin.com/in/andres-felipe-vasquez-chica-4b3b81183/)
* **Felipe Vargas** [LinkedIn](https://www.linkedin.com/in/felipe-vargas-9a6592206/) 
