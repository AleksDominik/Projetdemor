import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "compteur.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    Compteur unCompteur;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueObjetCpt", &unCompteur);


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

/*ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Morpion game")

    MainForm {
        anchors.fill : parent
        id : fondM
    }

}*/


