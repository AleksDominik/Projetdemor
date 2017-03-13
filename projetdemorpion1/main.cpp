import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Morpion game")

    MainForm {
        anchors.fill : parent
        id : fondM
    }

}
