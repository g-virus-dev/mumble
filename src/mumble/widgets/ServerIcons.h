#ifndef SERVER_ICONS_H
#define SERVER_ICONS_H

#include <QListWidget>

class ServerIconsWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit ServerIconsWidget(QWidget* parent = nullptr);
    ~ServerIconsWidget();
};

#endif // SERVER_ICONS_H
