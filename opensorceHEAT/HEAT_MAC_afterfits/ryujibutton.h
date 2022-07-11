#ifndef RYUJIBUTTON_H
#define RYUJIBUTTON_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class RyujiButtonData;

class RyujiButton : public QObject
{
    Q_OBJECT
public:
    explicit RyujiButton(QObject *parent = nullptr);
    RyujiButton(const RyujiButton &);
    RyujiButton &operator=(const RyujiButton &);
    ~RyujiButton();

signals:


private:
    QSharedDataPointer<RyujiButtonData> data;
};

#endif // RYUJIBUTTON_H
