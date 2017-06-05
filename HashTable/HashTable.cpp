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


