import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    id: page
    width: 640
    height: 480
    property alias rectangle: rectangle
    property alias mouseArea: mouseArea
    property alias page: page

    Rectangle {
        id: rectangle
        width: 200
        height: 200
        color: "#160000"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter


        Image {
            id: image
            anchors.fill: parent
            source: vueObjImg.imgQML

            MouseArea {
                id: mouseArea
                x: 0
                y: 0
                anchors.fill: parent

                onClicked: {
                    vueObjImg.changement();
                }
            }
        }
    }
}
