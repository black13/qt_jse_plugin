#ifndef GENERIC_INTERFACE_H
#define GENERIC_INTERFACE_H

#include <QObject>
#include <QJSEngine>
class Generic_Interface : public QObject
{
    Q_OBJECT
public:
    explicit Generic_Interface(QObject *parent = 0);
    virtual void Abstract (QJSEngine *) = 0;
signals:

public slots:
};

#endif // GENERIC_INTERFACE_H
