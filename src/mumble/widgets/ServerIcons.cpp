#include "ServerIcons.h"
#include <QIcon>
#include <QDebug>

ServerIconsWidget::ServerIconsWidget(QWidget* parent)
    : QListWidget(parent)
{
    setViewMode(QListView::IconMode);
    setIconSize(QSize(32, 32));
    setGridSize(QSize(48, 48));
    setSelectionMode(QAbstractItemView::MultiSelection);
    setMovement(QListView::Static);

    for (int i = 0; i < 20; ++i)
        addItem(new QListWidgetItem(QIcon("://rec.svg"), ""));

    qDebug() << "Icons created";
}

ServerIconsWidget::~ServerIconsWidget()
{
    qDebug() << "Icons destroyed";
}
