#include "utilities.h"


bool utilities::w = false;

void utilities::warningRange() {
    QMessageBox::critical(nullptr,"Неверный диапазон","Требование:\n *тип данных: int\n *больше нуля\n *без повторений");
}
void utilities::warningRepeat() {
    QMessageBox::critical(nullptr,"Повторение узла","Требование:\n *тип данных: int\n *больше нуля\n *без повторений");
    w = true;
}
void utilities:: draw(int x,int y, int widthNode  , int heightNode, QGraphicsScene* scene ){
    QGraphicsEllipseItem* ellipse = new QGraphicsEllipseItem(x,y,widthNode,heightNode);
    QLinearGradient gradient(x, y, x + widthNode, y + heightNode);
    gradient.setColorAt(0, QColor(211, 211, 211, 100));
    gradient.setColorAt(1, QColor(211, 211, 211, 255));
    QBrush brush(gradient);
    QPen pen(Qt::green);

    ellipse->setBrush(brush);
    ellipse->setPen(pen);
    scene->addItem(ellipse);
}

