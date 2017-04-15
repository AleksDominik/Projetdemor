#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "mpion.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Création d'un objet Mpion
    Mpion kase;

    // Création du pointeur qui permettra les modifications dans le QML
    engine.rootContext()->setContextProperty("vueObjImg", &kase);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
