#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "mpion.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Mpion tentative;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueObjImg", &tentative);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
