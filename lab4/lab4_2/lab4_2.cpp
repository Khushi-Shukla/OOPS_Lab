#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;
#include "books.h"

int books::searchBook(string auth, string titl) {
    for (int i = 0; i < 20; i++) {
        if (author[i] == auth && title[i] == titl)
            return i;
    }
    return -1;
}
void books::displayDetail(int idx) {
    cout << " Title: " << title[idx] << "\n Author: " << author[idx] << "\n Publisher: " << publisher[idx] << "\n Copies Available: " << stock[idx] << "\n Price: " << price[idx] << endl;
}

void books::checkCopyCalcPrice(int idx, int copy) {
    if (stock[idx] < copy) {
        cout << " Required copies not in stock" << endl;
        return;
    }
    else {
        int totalprice = price[idx] * copy;
        cout << " Price of requested book = " << price[idx] << "\n Price of " << copy << " copies = " << totalprice;
    }
}


int main()
{
    books* b = new books();
    char ch='A';
    string auth = "auth", publisher = "publisher", title = "title";
    for (int i = 0; i < 20; i++) {
        b->stock[i] = i + rand() % (50 - 0 + 1) + 0; //generates random number between 0 to 50
        b->author[i] = auth+ ch;
        b->publisher[i] = publisher + ch;
        b->title[i] = title + ch;
        b->price[i]= rand() % (1000 - 100 + 1) + 100; //generates random number between 100 to 1000
        ch++;
    }
    cout << " The details of first 5 books are given below. There are total 20 different types of books stored in the system \n";
    for (int i = 0; i < 5; i++) {
        b->displayDetail(i);
        cout << endl;
    }
    while (true) {
        string auth, titl;
        cout << endl;
        cout << " Enter the title of the book to search: ";
        cin >> titl;
        cout << " Enter the author of the book to search: ";
        cin >> auth;
        int idx = b->searchBook(auth, titl);
        if (idx == -1) {
            cout << " Sorry. The Book is not available" << endl;
            break;
        }
        b->displayDetail(idx);
        int copy;
        cout << " Enter the number of copies you want: ";
        cin >> copy;
        b->checkCopyCalcPrice(idx, copy);
        cout << "\n";
        int isBreak;
        cout << " Press 1 to continue and press 0 to exit\n ";
        cin >> isBreak;
        if (isBreak == 0)
            break;
    }
    
    cout << " Process completed\n";
    return 0;
}
