/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>
#include <string>

#include <HashTable.h>

using std::cout;
using std::endl;
using std::string;


//Constructors

HashTable::HashTable(int capacity) {
    this->capacity = capacity;
    this->table = new string [capacity];
    this->size = 0;
}


HashTable::HashTable(const HashTable &ht) {
    this->capacity = ht.capacity;
    this->table = new string[this->capacity];
    this->size = ht.size;
    
    if(ht.size != 0) {
        for (int i = 0; i < ht.capacity; i++) {
            if(ht.table[i] != "") {
                this->table[i] = ht.table[i];
            }
        }
    }
    
    
}


//Methods

int HashTable::getSize() {
    return this->size;
}

int HashTable::getCapacity() {
    return this->capacity;
}

bool HashTable::isEmpty(int pos) {
    if (pos >= this->capacity) return false;
    
    if(this->table[pos] == "") {
        return true;
    }
    
    return false;
}


bool HashTable::isTomb(int pos) {
    if(pos >= this->capacity) return false;
    
    if(this->table[pos].compare("##tomb##") != 0) return false;
    return true;
}


bool HashTable::isAvailable(int pos) {
    if(isEmpty(pos) | isTomb(pos)) return true;
    return false;
}

bool HashTable::conta







