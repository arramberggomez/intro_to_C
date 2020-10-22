//
//  linked_list.h
//  Address Book
//
//  Created by August Rsmnerg-Gomez on 10/21/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#ifndef linked_list_h
#define linked_list_h
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

// BEGIN DEFINITION OF AN ADDRESS BOOK ENTRY
// an addressBookEntry is very large, take note of the order in which member variables need to be entered
struct addressBookEntry
{
    // member variables... there are ALOT
    string firstname, lastname;
    // address variable is simplified from the example to be one field rather than four
    string address, relation, phone;
    int month, day, year;
     
    addressBookEntry (string = "", string = "", string = "", string = "", string = "", int = 0, int = 0, int =  0);
};

// address book entry constructor
addressBookEntry::addressBookEntry (string f, string l, string a, string r, string p, int m, int d, int y) {
    
    firstname = f;
    lastname = l;
    address = a;
    relation = r;
    phone = p;
    month = m;
    day = d;
    year = y;
}



/* create node for linked list... of type addressBookEntry */
struct node
{
    addressBookEntry info;
    node* link;
};


// create the class linked_list that will contain address book entries
class linked_list
{
public:
    node *head, *tail;
    linked_list() {
        head = NULL;
        tail = NULL;
    }
    
    // function prototype to add node at the end of linked list
    void addNode(addressBookEntry);
    
    /* function prototype to display every member variable of a given node
       node is identified by input of first and last name */
    void displayInfo(string, string);
    
    // function to display name IF relation matches ie* uncle etc
    void searchRelation(string);
    
    // function to display names of people born in the same month
    void searchMonth(int);
    
    //search for a given last name return true if it exists else false
    bool searchLast(string);
    
    // returns pointer to smallest node
    node * smallest();
    
    //function takes a pointer and returns its predecessor (also a pointer)
    // will return NULL if the node entered is the head
    node * pred(node *);
    
    //function takes a linked list sorts it acccording to first name
    void deleteNode(node *);
    
    //function sorts a linked list by first name
    void sortList(linked_list);
    
};

void linked_list::addNode(addressBookEntry n)
{
    node *tmp = new node;
    tmp->info = n;
    tmp->link = NULL;
    
    // if else loop links with existing nodes if they exist
    if(head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->link = tmp;
        tail = tail->link;
    }
}

/* given a first and last name prints whole entry. If no matches, does nothing
   is searching by last name and first name
   could easily make it search by either first name or last name or any other member variable */
void linked_list::displayInfo(string f, string l)
{
    node *tmp = new node;
    tmp = head;
    
    while(tmp != NULL)
    {
        addressBookEntry test = tmp->info;
        if(test.firstname == f && test.lastname == l)
        {
            cout << test.firstname << " " << test.lastname << endl;
            cout << test.address << endl;
            cout << test.month << "-" << test.day << "-" << test.year << endl;
            
            // proceed to next node
            tmp = tmp->link;
        }
        else
        {
            tmp = tmp->link;
        }
    }
}

void linked_list::searchRelation(string r)
{
    node *tmp = new node;
    tmp = head;
    
    // now search the list
    while(tmp != NULL)
    {
        addressBookEntry test = tmp->info;
        
        if(test.relation == r)
        {
            cout << test.firstname << " " << test.lastname << endl;
            tmp = tmp->link;
            
        }
        else
        {
            /* does nothing except iterate loop */
            tmp = tmp->link;
        }
    }
}


void linked_list::searchMonth(int m)
{
    node *tmp = new node;
    tmp = head;
    
    // now search the list
    while(tmp != NULL)
    {
        addressBookEntry test = tmp->info;
        
        if(test.month == m)
        {
            cout << test.firstname << " " << test.lastname << endl;
            tmp = tmp->link;
            
        }
        else
        {
            /* does nothing except iterate loop */
            tmp = tmp->link;
        }
    }
}

/* result of function must be stored in an object to access */
bool linked_list::searchLast(string l)
{
    node *tmp = new node;
    tmp = head;
    bool val = false;
    
    while(tmp != NULL)
    {
        addressBookEntry foo = tmp->info;
        
        if(foo.lastname == l)
        {
            val = !val;
            break;
        }
        else
        {
            tmp = tmp->link;
        }
    }
    return val;
}



node * linked_list::smallest()
{
    node *smallest = new node;      // this will keep track of the smallest pointer
    node *tmp = new node;
    node *oneup = new node;
    tmp = head;
    oneup = tmp->link;
   
    
    while(oneup != NULL)
    {
        addressBookEntry small = tmp->info;
        addressBookEntry large = oneup->info;
        
        /* Eventually make first condition check last name if true. Could combine with either of
         the below statements for brevity but this will make it easier to improve later */
        if(small.firstname == large.firstname)
        {
            smallest = tmp;
            tmp = smallest->link;
            oneup = tmp->link;

        }
        else if(small.firstname > large.firstname)
        {
            smallest = oneup;
            tmp = smallest;
            oneup = smallest->link;
        }
        else
        {
            smallest = tmp;
            tmp = smallest->link;
            oneup = tmp->link;
        }
    }
    return smallest;
}

// is a helper function anyway. Before implementing, we will check if the node = head
node * linked_list::pred(node *place)
{
    node *temp = new node;
    node *pred = new node;
    temp = head->link;
    pred = head;
    
    while(temp != NULL)
    {
        
        if(temp == place)
        {
            break;
        }
        else
        {
            temp = temp->link;
            pred = pred->link;
        }
    }
    return pred;
}



// is not fully working yet
void linked_list::deleteNode(node *del)
{
    node *predec = new node;
    node *temp = new node;
    node *begone = new node;
    
    begone = del;
    
    if(begone == head)
    {
        head = begone->link;
        delete(begone);
    }
    else
    {
        predec = pred(begone);
        temp = predec->link;
        predec->link = temp->link;
        delete(temp);
    }
}



void linked_list::sortList(linked_list l)
{
    linked_list temp;
    temp.head = NULL;
    node *tmp = new node;
    addressBookEntry smallest = addressBookEntry();
    
    while(l.head != NULL)
    {
        tmp = l.smallest();
        smallest = tmp->info;
        temp.addNode(smallest);
        l.deleteNode(tmp);
        l.head = l.head->link;
    }
    l = temp;
}







#endif /* linked_list_h */
