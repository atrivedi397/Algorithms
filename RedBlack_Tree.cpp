// Implementation of Red Black Tree (Insertion only)
#include <iostream>

// Main Class
class RedBlackTree{
private:
    // structure of each node in tree
    struct Node{
        int value = 0;
        bool is_red = true;         // color of node
        Node* smaller_nodes = nullptr;
        Node* larger_nodes = nullptr;

        // to find on which side is the parent and its child node
        enum Direction{
            None = 0, Left, Right
        } side = None;
    }* root;                 // pointer for root of tree

    void insert(){

    }

public:
    RedBlackTree() :root(nullptr) {};
    Node* create_redBlack_tree(int* array, short Size) {
        for (short i = 0; i < Size-1; i++){
            auto new_node = new Node;
            new_node->value = array[i];
            auto parent = nullptr;

            if(!root) {
                root = new_node;
                parent = new_node;
            }
            else{
                insert();
            }
        }
    }
};


int main(){

    int arr[] = {1,3.8,4,2,19,15};
    RedBlackTree object;
    auto result = object.create_redBlack_tree(arr, 7);
    return 0;
}