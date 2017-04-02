import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    id: page
    width: 480
    height: 320
    property alias img22: img22
    property alias mA33: mA33
    property alias img33: img33
    property alias rect33: rect33
    property alias mA31: mA31
    property alias img31: img31
    property alias rect31: rect31
    property alias mA32: mA32
    property alias img32: img32
    property alias rect32: rect32
    property alias mA13: mA13
    property alias img13: img13
    property alias rect13: rect13
    property alias mA12: mA12
    property alias mA11: mA11
    property alias img11: img11
    property alias img12: img12
    property alias mA23: mA23
    property alias img23: img23
    property alias mA21: mA21
    property alias img21: img21
    property alias mA22: mA22
    property alias rect11: rect11
    property alias rect12: rect12
    property alias rect23: rect23
    property alias rect21: rect21
    property alias rect22: rect22
    property alias page: page

    Rectangle {
        id: rect22
        width: 80
        height: 80
        color: "#160000"
        radius: 0
        border.color: "#600404"
        border.width: 2
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        Image {
            id: img22
            clip: false
            anchors.fill: parent
            source: "index.jpg"

            MouseArea {
                id: mA22
                x: 0
                y: 0
                anchors.fill: parent

                onClicked: {
                    img22.source= vueObjImg11.changementdim(1,1);
                      }
            }
        }
    }

    Rectangle {
        id: rect21
        y: 1
        width: 80
        height: 80
        color: "#160000"
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 100
        Image {
            id: img21
            MouseArea {
                id: mA21
                x: 0
                y: 0
                anchors.fill: parent
                onClicked: {
                    img21.source= vueObjImg11.changementdim(1,0);
                }
            }
            anchors.fill: parent
            source:"index.jpg"
        }
    }

    Rectangle {
        id: rect23
        x: -1
        y: -7
        width: 80
        height: 80
        color: "#160000"
        anchors.right: parent.right
        anchors.rightMargin: 100
        Image {
            id: img23
            anchors.fill: parent
            MouseArea {
                id: mA23
                x: 0
                y: 0
                anchors.fill: parent
                onClicked: {
                   img23.source= vueObjImg11.changementdim(1,2);
                }
            }
            source: "index.jpg"
        }
        anchors.verticalCenter: parent.verticalCenter
    }

    Rectangle {
        id: rect12
        x: -4
        width: 80
        height: 80
        color: "#160000"
        anchors.top: parent.top
        anchors.topMargin: 20
        Image {
            id: img12
            anchors.fill: parent
            MouseArea {
                id: mA12
                x: 0
                y: 0
                anchors.fill: parent
                onClicked: {
                   img12.source= vueObjImg11.changementdim(0,1); //vueObjImg12.changement();
                }
            }
            source: "index.jpg"
        }
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Rectangle {
        id: rect11
        width: 80
        height: 80
        color: "#160000"
        anchors.top: parent.top
        anchors.topMargin: 20
        anchors.left: parent.left
        anchors.leftMargin: 100
        Image {
            id: img11
            anchors.fill: parent
            MouseArea {
                id: mA11
                x: 0
                y: 0
                anchors.fill: parent
                onClicked: {
                    img11.source= vueObjImg11.changementdim(0,0);//vueObjImg11.changement();
                }
            }
            source: "index.jpg"
        }
    }

    Rectangle {
        id: rect13
        x: -5
        width: 80
        height: 80
        color: "#160000"
        anchors.top: parent.top
        anchors.topMargin: 20
        anchors.right: parent.right
        anchors.rightMargin: 100
        Image {
            id: img13
            anchors.fill: parent
            MouseArea {
                id: mA13
                x: 0
                y: 0
                anchors.fill: parent
                onClicked: {
                 img13.source= vueObjImg11.changementdim(0,2);//   vueObjImg13.changement();
                }
            }
            source:"index.jpg"
        }
    }

    Rectangle {
        id: rect32
        x: -8
        y: 1
        width: 80
        height: 80
        color: "#160000"
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        Image {
            id: img32
            anchors.fill: parent
            MouseArea {
                id: mA32
                anchors.fill: parent
                onClicked: {
                  img32.source= vueObjImg11.changementdim(2,1);//  vueObjImg32.changement();
                }
            }
            source: "index.jpg"
        }
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Rectangle {
        id: rect31
        y: -1
        width: 80
        height: 80
        color: "#160000"
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        Image {
            id: img31
            anchors.fill: parent
            MouseArea {
                id: mA31
                anchors.fill: parent
                onClicked: {
                    img31.source= vueObjImg11.changementdim(2,0);//vueObjImg31.changement();
                }
            }
            source: "index.jpg"
        }
    }

    Rectangle {
        id: rect33
        x: -1
        y: -4
        width: 80
        height: 80
        color: "#160000"
        anchors.right: parent.right
        anchors.rightMargin: 100
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        Image {
            id: img33
            anchors.fill: parent
            MouseArea {
                id: mA33
                x: 0
                y: 0
                anchors.fill: parent
                onClicked: {
                   img33.source= vueObjImg11.changementdim(2,2);// vueObjImg33.changement();
                }
            }
            source: "index.jpg"
        }
    }
}
