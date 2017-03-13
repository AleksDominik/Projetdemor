import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    id: fondM
    width: 640
    height: 480
    property alias fondM: fondM
    property alias rectTopLeft: rectTopLeft
    property alias mouseArea5: mouseArea5
    property alias rectTopRight: rectTopRight
    property alias mouseArea6: mouseArea6
    property alias rectBottomLeft: rectBottomLeft
    property alias mouseArea7: mouseArea7
    property alias rectCenter1: rectCenter1
    property alias mouseArea8: mouseArea8
    property alias mouseArea2: mouseArea2
    property alias rectCenterR: rectCenterR
    property alias mouseArea1: mouseArea1
    property alias rectCenterL: rectCenterL
    property alias mouseArea: mouseArea
    property alias rectCenter: rectCenter
    property alias image: image

    Image {
        id: image
        x: 96
        y: 68
        width: 620
        height: 460
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        source: "IMG_0763(1).JPG"

        Rectangle {
            id: rectCenter
            x: 280
            y: 200
            width: 80
            height: 80
            color: "#00000000"
            border.color: "#0e0c0c"
            border.width: 5
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter

            MouseArea {
                id: mouseArea
                width: 80
                height: 80
            }
        }

        Rectangle {
            id: rectCenterL
            x: 190
            y: 195
            width: 80
            height: 80
            color: "#00000000"
            MouseArea {
                id: mouseArea1
                width: 80
                height: 80
            }
            border.color: "#0e0c0c"
            anchors.verticalCenter: parent.verticalCenter
            border.width: 5
        }

        Rectangle {
            id: rectCenterR
            x: 350
            y: 194
            width: 80
            height: 80
            color: "#00000000"
            MouseArea {
                id: mouseArea2
                width: 80
                height: 80
            }
            border.color: "#0e0c0c"
            anchors.verticalCenter: parent.verticalCenter
            border.width: 5
        }

        Rectangle {
            id: rectBottomCenter
            x: 3
            y: 270
            width: 80
            height: 80
            color: "#00000000"
            MouseArea {
                id: mouseArea3
                width: 80
                height: 80
            }
            anchors.horizontalCenter: parent.horizontalCenter
            border.color: "#0e0c0c"
            border.width: 5
        }

        Rectangle {
            id: rectTopCenter
            x: 284
            y: 110
            width: 80
            height: 80
            color: "#00000000"
            MouseArea {
                id: mouseArea4
                width: 80
                height: 80
            }
            anchors.horizontalCenter: parent.horizontalCenter
            border.color: "#0e0c0c"
            border.width: 5
        }

        Rectangle {
            id: rectTopLeft
            x: 190
            y: 520
            width: 80
            height: 80
            color: "#00000000"
            anchors.left: parent.left
            anchors.leftMargin: 190
            anchors.top: parent.top
            anchors.topMargin: 110
            MouseArea {
                id: mouseArea5
                width: 80
                height: 80
            }
            border.color: "#0e0c0c"
            border.width: 5
        }

        Rectangle {
            id: rectTopRight
            x: 279
            width: 80
            height: 80
            color: "#00000000"
            anchors.right: parent.right
            anchors.rightMargin: 190
            anchors.top: parent.top
            anchors.topMargin: 110
            MouseArea {
                id: mouseArea6
                width: 80
                height: 80
            }
            border.color: "#0e0c0c"
            border.width: 5
        }

        Rectangle {
            id: rectBottomLeft
            y: 207
            width: 80
            height: 80
            color: "#00000000"
            anchors.left: parent.left
            anchors.leftMargin: 190
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 110
            MouseArea {
                id: mouseArea7
                width: 80
                height: 80
            }
            border.color: "#0e0c0c"
            border.width: 5
        }

        Rectangle {
            id: rectCenter1
            x: 281
            y: 201
            width: 80
            height: 80
            color: "#00000000"
            anchors.right: parent.right
            anchors.rightMargin: 190
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 110
            MouseArea {
                id: mouseArea8
                width: 80
                height: 80
            }
            border.color: "#0e0c0c"
            border.width: 5
        }
    }
}
