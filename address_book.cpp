//
//  main.cpp
//  Address Book
//
//  Created by August Rsmnerg-Gomez on 10/17/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "linked_list.h"


/* note that several of my functions do not quite work. Specifically, my delete node function
 is not working properly and this in turn is impacting my sortList function which utilizes
 delete in its definition
*/

int main() {
    // declare the linked list to be constructed
    linked_list book;
    
    // make the linked list null
    book.head = NULL;
    
    // create linked list below
    addressBookEntry contact1 ("first", "last", "address", "uncle", "phone", 12, 15, 2020);
    addressBookEntry contact2 ("foobar", "endbar", "lundy lane", "relative", "4302357890", 10, 19, 2020);
    addressBookEntry contact3 ("august", "namelast", "orchard hill", "relative", "4302357890", 10, 19, 2020);
    addressBookEntry contact4 ("september", "january", "prune lane", "work", "4302357890", 10, 19, 2020);
    addressBookEntry contact5 ("october", "december", "hiawatha", "relative", "4302357890", 11, 19, 2020);
    addressBookEntry contact6 ("november", "march", "lundy lane", "mom", "4302357890", 10, 19, 2020);
    
    
    
    book.addNode(contact1);
    book.addNode(contact2);
    book.addNode(contact3);
    book.addNode(contact4);
    book.addNode(contact5);
    book.addNode(contact6);
    
    
    cout << "test displayInfo function below:" << endl;
    book.displayInfo("first", "last");
    cout << endl;
    
    cout << "test searchRelation function below:" << endl;
    book.searchRelation("mom");
    cout << endl;
    
    cout << "test searchMonth function below:" << endl;
    book.searchMonth(10);
    cout << endl;
    
    
    cout << "test searchLast function below:" << endl;
    bool test = book.searchLast("last");
    cout << test << endl;
    
    
    // it looks like this function might not be implementing as intended
    cout << "test smallest function below:" << endl;
    node *temp = new node;
    addressBookEntry name = addressBookEntry();
    temp = book.smallest();
    name = temp->info;
    cout << name.firstname << endl;

    /* other function tests are not included because I think there are errors in pred
     deleteNode and sortList. Functions are written in header file but have
     errors that are impacting implementation. I think that the concept is there but
     the implementation is incorrect and has some errors */
    
    
    
    return 0;
}
