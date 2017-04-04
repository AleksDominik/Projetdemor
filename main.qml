import QtQuick 2.5
import QtQuick.Controls 1.4

ApplicationWindow {
    id: page
    visible: true
    width: 640
    height: 480

    property alias image : image
    property alias image1 : image1
    property alias winning : winning
    property alias text1: text1
    property alias text2: text2
    property alias player2: player2
    property alias player1: player1
    title: qsTr("Morpion Game")

    property alias testA : testA
    property alias grid1 : grid1
    property alias test : test
    property bool i: true
    property bool essai : false

    Image {
        id: image
        fillMode: Image.Stretch
        anchors.fill: parent
        source: "bg.jpg"
    }

    Rectangle {

        id : testA
        width: 300
        height: 300
        color: "#00000000"
        radius: 150
        border.width: 5
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter


        Grid {

            id : grid1
            spacing: 15
            anchors.rightMargin: 15
            anchors.leftMargin: 15
            anchors.bottomMargin: 15
            anchors.topMargin: 15
            anchors.fill: parent
            rows : 3
            columns : 3

            Repeater {

                id: test
                anchors.fill: parent
                transformOrigin: Item.Center
                model : 9

                Rectangle {
                    id: rectangle
                    width : 80
                    height : 80
                    radius: 1
                    transformOrigin: Item.Center
                    border.color: "#952a2a"
                    scale: 1
                    border.width: 2

                    Image {
                        id : cool
                        anchors.fill : parent
                        source : "p0.jpg"
                    }


                    Text {
                        id : zone
                        color: "#00000000"
                        text : index
                        verticalAlignment: Text.AlignVCenter
                        horizontalAlignment: Text.AlignHCenter
                        anchors.fill: parent
                    }

                    MouseArea {
                        id : clic
                        anchors.fill : parent
                        onClicked : {
                            if(page.essai===false) {
                                cool.source=vueObjImg.changementdim(zone.text);
                                page.i=vueObjImg.quijoue();
                                if(i) {
                                    page.player1.color="#d80c44";
                                    page.player2.color="#ffffff";
                                }
                                else {
                                    page.player2.color="#d80c44";
                                    page.player1.color="#ffffff";
                                }
                                page.essai=vueObjImg.findejeu();
                            }
                            if(page.essai==true) {
                                page.winning.text = "Fin de la partie";
                                page.image1.width = 638;
                                page.image1.height = 478;
                                if(i)
                                    page.image1.source ="p1.jpg";
                                else
                                    page.image1.source ="p2.jpg";
                            }
                        }
                    }
                }
            }
        }


    }




    Rectangle {
        id: player1
        width: 100
        height: 50
        color: "#ffffff"
        radius: 20
        border.width: 2
        anchors.left: parent.left
        anchors.leftMargin: 50
        anchors.verticalCenter: parent.verticalCenter



        Text {
            id: text1
            color: "#d80c44"
            text: qsTr("Joueur 1")
            font.family: "Tahoma"
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 18
        }
    }



    Rectangle {
        id: player2
        x: 8
        y: 6
        width: 100
        height: 50
        color: "#d80c44"
        radius: 20
        anchors.right: parent.right
        anchors.rightMargin: 50
        border.width: 2
        anchors.verticalCenter: parent.verticalCenter

        Text {
            id: text2
            color: "#d80c44"
            text: qsTr("Joueur 2")
            font.family: "Tahoma"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            anchors.fill: parent
            font.bold: true
            font.pixelSize: 18
        }
    }


    Image {
        id: image1
        x: -7
        y: 3
        width: 30
        height: 30
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 1
        anchors.horizontalCenter: parent.horizontalCenter
        fillMode: Image.Stretch
    }

    Text {
        id: winning
        x: 281
        width: 250
        height: 40
        color: "#0845a5"
        font.family: "Times New Roman"
        style: Text.Outline
        font.letterSpacing: 5
        textFormat: Text.AutoText
        font.bold: true
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 30
        font.pixelSize: 29
    }
}

