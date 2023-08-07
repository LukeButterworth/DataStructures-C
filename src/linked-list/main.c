#include <stdlib.h>
#include <stdint.h>

//Enum Definitions
//This is not an elegant way of defining generics, I've seen methods that use macros
typedef enum {
	LINKED_LIST_INT,
	LINKED_LIST_BOOL,
	LINKED_LIST_CHAR
} DataType;

//Struct Declarations
typedef struct Node Node;
typedef struct LinkedList LinkedList;

//Function Declarations
//Node Functions
Node new_node(void *data);

//LinkedList Functions
LinkedList new_linked_list(DataType type);
void add(LinkedList list, void *value);
void *remove(LinkedList list, int index);
void push(LinkedList list, void *value);
void *pop(LinkedList list);

//Struct Definitions
typedef struct Node {
	void *data;	
	Node *linked_node;
} Node;

typedef struct LinkedList {
	DataType type;
	size_t length;
	Node *initial_node;
	Node *final_node;
} LinkedList;

//Linked List Functions
LinkedList new_linked_list(DataType type) {
	LinkedList list = {
		.type = type,
		.length = 0,
	};

	return list;
}; 

void add(LinkedList list, void *value) {
	DataType type = list.type;
	//we need to perform some type verification here
	switch (list.type)
	{
		case DataType.
	}
	
	Node new_node;

	list.length++;
};

void *remove(LinkedList list, int index) {
};

void push(LinkedList list, void *value) {
	DataType type = list.type;
	list.length++
};

void pop(LinkedList list, void *value) {
};

//Node Functions
