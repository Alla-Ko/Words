
#include "mytablemodel.h"

myTableModel::myTableModel()
{

}
int myTableModel::rowCount(const QModelIndex &parent) const
{
    return 1; // сделаем фиксированно 5 строк в таблице
    //return contacts.size();
}
int myTableModel::columnCount(const QModelIndex &parent) const
{
    return word_table.size(); // количество колонок сделаем также фиксированным
}

QVariant myTableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();
    if (index.column() >= word_table.size() || index.column() < 0)
        return QVariant();
    if (role == Qt::DisplayRole) {
        QString unswer;
        unswer=word_table[index.column()];
        return QVariant(unswer);
    }
    return QVariant();
}

