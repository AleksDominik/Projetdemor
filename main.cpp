#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "mpion.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Mpion case11, case12, case13, case21, case22, case23, case31, case32, case33;

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("vueObjImg11", &case11);
    engine.rootContext()->setContextProperty("vueObjImg12", &case12);
    engine.rootContext()->setContextProperty("vueObjImg13", &case13);
    engine.rootContext()->setContextProperty("vueObjImg21", &case21);
    engine.rootContext()->setContextProperty("vueObjImg22", &case22);
    engine.rootContext()->setContextProperty("vueObjImg23", &case23);
    engine.rootContext()->setContextProperty("vueObjImg31", &case31);
    engine.rootContext()->setContextProperty("vueObjImg32", &case32);
    engine.rootContext()->setContextProperty("vueObjImg33", &case33);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
