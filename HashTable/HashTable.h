/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HashTable.h
 * Author: JOHN
 *
 * Created on 5 Ιουνίου 2017, 7:28 μμ
 */

#ifndef HASHTABLE_H
#define HASHTABLE_H


class HashTable {
protected:
  unsigned int size;      
  unsigned int capacity;  
  string *table;
  static int getHashCode(const char *str);
  
public:  
  HashTable(int capacity=12);
  HashTable(const HashTable &ht);
  int getSize();
  int getCapacity();
  bool isEmpty(int pos);
  bool isTomb(int pos);
  bool isAvailable(int pos);
  bool contains(const string &s);
  bool contains(const char *s);
  virtual bool add(const string &s);
  virtual bool add(const char *s);
  virtual bool remove(const string &s);
  virtual bool remove(const char *s);  
  void print();
  
  virtual bool operator << (string str);
  virtual bool operator >> (string str);
  HashTable operator+(HashTable &t);
  HashTable &operator+=(HashTable &t);
  HashTable &operator=(const HashTable &t);
 
};



#endif /* HASHTABLE_H */

