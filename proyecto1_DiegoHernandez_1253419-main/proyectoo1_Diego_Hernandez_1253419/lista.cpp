#include "lista.h"

lista::lista() {
	start = nullptr;
	end = nullptr;
	count == 0;
};

//Insert Operations
void lista::InsertAtStart(int value) {
	nodo* new_node = new nodo();
	new_node->value = value;

	if (isEmpty()) { //The list is empty
		start = new_node;
		end = new_node;
	}
	else { //The list is not empty
		new_node->next = start;
		start = new_node;
	}
	count++;
}


void lista::InsertAtEnd(int value) {
	nodo* new_node = new nodo();
	new_node->value = value;

	if (isEmpty()) { //The list is empty
		start = new_node;
		end = new_node;
	}
	else { //The list is not empty
		end->next = new_node;
		end = new_node;
	}
	count++;
}

void lista::InsertAtPosition(int value, int position) {
	nodo* new_node = new nodo();
	new_node->value = value;

	if (isEmpty() || (position == 0)) { //The list is empty
		InsertAtStart(value);
	}
	else { //The list is not empty
		if (position >= count) {
			InsertAtStart(value);
		}
		else { //Position in the middle
			nodo* pretemp = start;
			nodo* temp = start->next;
			int index = 1;
			while ((temp) && (index < position)) {
				pretemp = temp;
				temp = temp->next;
				index++;
			}
			new_node->next = temp;
			pretemp->next = new_node;
		}
	}
	count++;
}

//Extract operation
nodo* lista::ExtractAtStart() {
	nodo* temp = start;
	if (!isEmpty()) {
		start = start->next;
		if (count == 1) {
			end = start;
		}
		count--;
	}
	return temp;
}


nodo* lista::ExtractAtEnd() {
	nodo* temp = end;
	if (!isEmpty()) {
		if (count == 1) {
			end = end->next;
			start = end;
		}
		else {
			nodo* pretemp = start;
			temp = pretemp->next;
			while (temp != end) {
				pretemp = temp;
				temp = pretemp->next;
			}
			pretemp->next = temp->next;
			end = pretemp;
		}
		count--;
	}
	return temp;
}

nodo* lista::ExtractAtPosition(int position) {
	nodo* temp = start;
	if (!isEmpty()) {
		if ((count == 1) || (position == 0)) {
			return ExtractAtStart();
		}
		else {
			if (position >= count) {
				return ExtractAtEnd();
			}
			else {
				nodo* pretemp = start;
				temp = pretemp->next;
				int index = 1;
				while ((temp) && (index < position)) {
					pretemp = temp;
					temp = pretemp->next;
					index++;
				}
				pretemp->next = temp->next;
				count--;
			}
		}
	}
	return temp;
}

//Operacion de busqueda
nodo* lista::GetNode(int value) {
	nodo* temp = start;
	while ((temp) && (temp->value != value)) {
		temp = temp->next;
	}
	return temp;
}

int lista::GetValue(int position) {
	if ((position >= 0) && (position < count)) {
		nodo* temp = start;
		int index = 0;
		while ((temp) && (index < position)) {
			temp = temp->next;
			index++;
		}
		return temp->value;
	}
	return -1;
}

bool lista::isEmpty() {
	return count == 0;
}