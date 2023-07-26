#pragma once
class books {
private:
    void updatePrice(int idx, float val);
public:
    static int successtrans, failedtrans;
    int stock[20];
    string author[20], title[20], publisher[20];
    float price[20];
    int searchBook(string auth, string titl);
    void displayDetail(int idx);
    void checkCopyCalcPrice(int idx, int copy);
    void changePrice(int idx, float val);
    void updateStock(int idx, int copy);
   
};