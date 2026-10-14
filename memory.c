#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//structure definitions and definition of hash table node
//data store krne vala box

typedef struct KeyValueNode {
    char *key;  //name of key
    void *value;  //value(any type of data)
    size_t value_size;  //how many bytes is a value
    struct KeyValueNode *next; //pointer to next node
} KeyValueNode; // thats the name of the struct

//memory store
//box ko rkhne vala board

typedef struct {
    KeyValueNode **buckets; //double pointer/ holds al the buckets/array of our hash table
    size_t capacity; //total size of hash table
    size_t count; //total number of keys cuurently stored in hash table
} MemoryStore;  // thats the name of the struct

