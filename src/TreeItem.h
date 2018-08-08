//
// Created by oguz on 08.08.2018.
//

#ifndef MAPSPY_TREEITEM_H
#define MAPSPY_TREEITEM_H


#include <QtCore/QVariant>

class TreeItem {

public:
    explicit TreeItem(const QList<QVariant> &data, TreeItem *parentItem = 0);
    ~TreeItem();

    void appendChild(TreeItem *child);

    TreeItem *child(int row);
    int childCount() const;
    int columnCount() const;
    QVariant data(int column) const;
    int row() const;
    TreeItem *parentItem();

private:
    QList<TreeItem*> m_childItems;
    QList<QVariant> m_itemData;
    TreeItem *m_parentItem;
};


#endif //MAPSPY_TREEITEM_H
