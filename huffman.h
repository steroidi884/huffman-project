#ifndef HUFFMAN_H
#define HUFFMAN_H

#include "structures.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Create a list of occurences
 * 
 * @param none
 * @return the list of occurences 
 */
Element_occur* list_occurence()
/**
 * @brief Create a huffman tree object.
 * 
 * @param occurrencesList 
 * @return Tree 
 */
Tree create_huffman_tree(List * occurrencesList);

/**
 * @brief A recursive function used by createDico to print the huffman tree in a file.
 * 
 * @param tree 
 * @param file 
 * @param chars 
 */
void printDico(Node * tree, FILE * file, char * chars);

/**
 * @brief Print a huffman tree in dico.txt.
 * 
 * @param huffmanTree 
 * @return 0 if error, 1 if all is good
 */
int createDico(Tree huffmanTree);

/**
 * @brief Function that translates a text into a binary sequence based on a Huffman dictionary
 * The function has no parameters because we open and close the file in the function
 * The function take a letter of the text, find her binary sequence and print the binary sequence in a file
 */
void translate_texte_with_huffman();


/**
 * @brief Compresses a file with the huffman tree
 * The function uses all the function used before to compress a file with the huffman tree
 * @param none
 * @return none
 */
void compress_file_with_huffman();

/**
 * @brief Decompresses a file with the huffman tree
 * The function uses the huffman tree and the compressed file to decompress the text
 * @param Tree/Node*
 * @return none
 */
void decompress_text_with_huffman(Node*);

#endif /* HUFFMAN_H */
