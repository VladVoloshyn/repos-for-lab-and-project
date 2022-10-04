
#include "Trees/Trees.h"
int main() {
    //chooseTree();
    //Створюємо бінарне дерево з нульовою датою
    BinarySearchTree obj(0, 0, 0, 0, 0, 0);
    //Добавляємо декілька вузлів
    obj.append(-7, -7, -7, -7, -7, -7);
    obj.append(-10, -10, -10, -10, -10, -10);
    obj.append(-5, -5, -5, -5, -5, -5);
    obj.append(-4, -4, -4, -4, -4, -4);
    obj.append(6, 6, 6, 6, 6, 6);
    obj.append(4, 4, 4, 4, 4, 4);
    obj.append(4, 4, 4, 4, 4, 4);
    obj.append(7, 7, 7, 7, 7, 7);
    obj.append(32, 32, 32, 32, 32, 32);
    obj.append(341, 341, 341, 341, 341, 341);
    //Виводимо  дерево
    obj.outTree();
    //Видалимо один з вузлів по значенню
    obj.deleteNodeByValue(-7, -7, -7, -7, -7, -7);
    //Виводимо оновлене дерево
    obj.outTree();

    return 0;
}