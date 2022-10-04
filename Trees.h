#pragma once

#include <iostream>
#include <vector>
#include <string>
#define COUNT 10
////////////////////////////////Tree////////////////////////////////////////

//Структура даних Дерево
class Tree {
private:
    //Внутрішній клас дитина(вузол)
    class Node {
    public:
        //Поля класу
        int ID;
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
        //Список листків
        std::vector<Node*> leaves;
        Node(int year, int month, int day, int hour, int minute, int second);
    };
    //Кількість вузлів
    int count;
    //Корінний вузол
    Node* root;
public:
    Tree(int year, int month, int day, int hour, int minute, int second);
    ~Tree();
    //Отримати корінний вузол
    Node* getRoot();
    //Добавити внутрішній клас до основного
    void append(int year, int month, int day, int hour, int minute, int second);
    //Встановити айді 
    void setId(Node* current);
    //Вивести основний клас
    void outputTree(Node* current, int temp = 0);
    //Стандартний вивід
    void defaultOutput();
    //Видалити внутрішній клас Вузол
    Node* deleteNode();
    //Видалити основний клас
    void deleteTree(Node* current);
    //Вивести вузол
    void printNode(Node* current);
    //Видалити вузол по індексу
    void deleteNodeByIndex(int index);
    //Видалити вузол по значенні
    void deleteNodeByValue(int value);
    //Знайти вузол по значенні
    void searchNodeByValue(int value);
    //Отримати 
    Node* getParent(Node* current);
    void preOrder();

};

///////////////////////////////////////////////////////////////////////////////

//=============================BinaryTree====================================

//Бінарне дерево з доповненими функціями
class BinaryTree {
private:
    class Node {
    public:
        int id;
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
        Node* left;
        Node* right;
        Node(int year, int month, int day, int hour, int minute, int second);
    };
    Node* root;
    int count;
public:
    BinaryTree(int year, int month, int day, int hour, int minute, int second);
    ~BinaryTree();
    Node* getRoot();
    void setId(Node* current);
    void append(int year, int month, int day, int hour, int minute, int second);
    Node* deleteNode();
    void deleteTree();
    //Допоміжна функція для виводу дерева у двовимірному форматі
    void output2dTreeUtil(Node* current, int space);
    //Вивід дерева у двовимірному форматі
    void output2dTree(Node* current);
    void outTree();
    void printNode(Node* current);
    //Допоміжна функція для виводу дерева у двовимірному форматі
    void print2DUtil(Node* current, int space);
    //Перевірка значень
    bool checkValues(Node* current, int year, int month, int day, int hour, int minute, int second);
    //Перевірка на рівність 
    bool checkEqual(Node* current, int year, int month, int day, int hour, int minute, int second);
    //Перевірка двох вузлів одного дерева
    bool check2Nodes(Node* current, Node* newNode);
    //Перевірка на рівність
    bool checkEqual(Node* current, Node* newNode);
    //Отримати батька даного вузла
    Node* getParent(Node* current, Node* tree);
    //Not completed
    void deleteNodeByValue(int year, int month, int day, int hour, int minute, int second);
    void deleteNodeByIndex(int index);
    void searchNodeByValue(int year, int month, int day, int hour, int minute, int second);
    void preOrder();

};

//===========================================================================

/////////////////////////////////BinarySearchTree////////////////////////////

//Клас бінарного пошуку дерева
class BinarySearchTree {
private:
    class Node {
    public:
        int id;
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
        Node* left;
        Node* right;
        Node(int year, int month, int day, int hour, int minute, int second);
    };
    Node* root;
    int count;
public:
    BinarySearchTree(int year, int month, int day, int hour, int minute, int second);
    ~BinarySearchTree();
    void setId(Node* current);
    bool checkValues(Node* current, int year, int month, int day, int hour, int minute, int second);
    bool checkEqual(Node* current, int year, int month, int day, int hour, int minute, int second);
    bool check2Nodes(Node* current, Node* newNode);
    bool checkEqual(Node* current, Node* newNode);
    void append(int year, int month, int day, int hour, int minute, int second);
    void output2dTreeUtil(Node* current, int space);
    void output2dTree(Node* current);
    void print2DUtil(Node* current, int space);
    void outTree();
    void printNode(Node* current);
    Node* deleteNode();
    void deleteTree();
    //Not completed
    void deleteNodeByValue(int year, int month, int day, int hour, int minute, int second);
    void deleteNodeByIndex(int index);
    void searchNodeByValue(int year, int month, int day, int hour, int minute, int second);
    Node* getParent(Node* tree, Node* current);
    void preOrder(Node* node);
};

///////////////////////////////////////////////////////////////////////////////
