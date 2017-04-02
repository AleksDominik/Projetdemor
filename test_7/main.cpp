#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "mpion.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Mpion case1;

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("vueObjImg11", &case1
                                             );

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    QObject::connect(&case1, SIGNAL(imgChanged()),
                        &case1, SLOT(testermat()));
    QObject::connect(&case1, SIGNAL(imgChanged()),
                        &case1, SLOT(testermat()));

    return app.exec();
}
