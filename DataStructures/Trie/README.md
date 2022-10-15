Trie: This data structure also known as digital trie or prefix trie, it's basically a search tree.
Where the nodes can represent letters of the alphabet. So it can be use as a dictionary where you can find words in a logarithmic time by using this structure instead of an array of words. 

Implementations:
There are two ways to implement this structure, the trie array and the trie map. Both of them have it's own advantages.

Trie Array
In this case we use an array of arrays, where every position in the array represents a letter of the alphabet, and every one of "cells" have another array/vector where it's storage the other letters of the alphabet which in turn contains more arrays till it reaches an end of a word.

struct node {
    char currentCharacter;       
    bool isWord;
   //  int priority = 0;            
    struct node *children[27];
    node() {
        isWord = false;
    }
}*trie; 

Trie Map
In this case we use a map, where every key represent a letter of the alphabet and every value represent another map, that has the same structure, this way we don't have to create an entire alphabet in every node, we just have to create the necesary ones to create the words.

struct node
{
    map<char, node*> mapero;
    string company;
    bool isWord;                
} *trie;

As we can see, a trie array it's going to require more space memory to create an array of 27 lenght in every node, but the access to it's nodes it's going to be faster

On the other hand we have the trie map which doesn't require to create the entire alphabet in every node, but the search method it's going to be a little bit slower.

![Trie](https://simpledevcode.files.wordpress.com/2018/12/trie02.gif)
