/*
Author: Karni Singh 
Date : 11/02/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//define tree structure
typedef struct tree_node{
    struct Tree_node* right;
    struct Tree_node* left;
    int value;
    int key;
}Tree;

//define tree structure's functions
void insert(struct tree_node **tree, struct tree_node* new){
    if(*tree == NULL){
        *tree = new;
        (*tree)->left = NULL;
        (*tree)->right = NULL;
    }else{
        if(new->key < (*tree)->key) insert(&(*tree)->left, new);
        else if (new->key>(*tree)->key) insert(&(*tree)->right, new);
        else printf("\n|CHIAVE DUPLICATA|\n");
        
    }
        
}

struct tree_node * find_by_key(struct tree_node *tree, int key){
    if (tree == NULL) return NULL;
    else{
        if(key<tree->key) return find_by_key(tree->left, key);
        else if (key>tree->key) return find_by_key(tree->right, key);
        else return tree;
    }
}

void in_order_view(struct tree_node * tree){
    if(tree != NULL){
        in_order_view(tree->left);
        printf("|%d|\t->\t%d" , tree->key, tree->value);
        in_order_view(tree->right);
    }
}



void main(){
    Tree * albero;

    albero = (Tree*) malloc(sizeof(Tree));

    albero->key = 100;
    albero->value =  100;
    albero->left =  NULL;
    albero->right =  NULL;

    Tree *nodo =  (Tree*) malloc(sizeof(Tree));
    nodo->key = 50;
    nodo->value = 50;
    nodo->left =  NULL;
    nodo->right =  NULL;

    insert(&albero,nodo)
    



}