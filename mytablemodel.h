
#ifndef MYTABLEMODEL_H
#define MYTABLEMODEL_H
#include <QModelIndex>



class myTableModel:public QAbstractTableModel
{
private:


    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
   // QVariant headerData(int section, Qt::Orientation orientation, int role) const;
public:
    myTableModel();
    int rowCount(const QModelIndex &parent) const;
    QList <QChar> word_table;
};

#endif // MYTABLEMODEL_H
