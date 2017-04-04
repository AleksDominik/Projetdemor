#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "mpion.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Mpion kase;
    engine.rootContext()->setContextProperty("vueObjImg", &kase);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
