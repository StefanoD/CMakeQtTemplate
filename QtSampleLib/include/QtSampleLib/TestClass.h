#pragma once

#include <QObject>
#include <QString>
#include <QVector>

class TestClass : public QObject {
Q_OBJECT
public:
    TestClass();
    
    QVector<QString> vector{"Hello ", "World", "!"};
};