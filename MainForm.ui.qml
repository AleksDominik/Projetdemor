import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1
import QtMultimedia 5.0

Item {
    id : ok
    width: 640
    height: 480

    //Alias des éléments de la page d'accueil
    property alias accueil: accueil

    //Alias des éléments de la page de jeu
    property alias jeu: jeu 
    property alias image : image
    property alias player1: player1
    property alias text1: text1
    property alias player2: player2
    property alias text2: text2
    property alias image1 : image1
    property alias winning : winning
    property alias testA : testA
    property alias grid1 : grid1
    property bool i: true
    property bool essai : false

    // Cet item représente la page du jeu morpion
    Item {

        id: jeu
        anchors.fill: parent
        visible : false

        Image {

            id: image
            fillMode: Image.Stretch
            anchors.fill: parent
            source: "bg.jpg"
        }

        // Création de la grille de jeu
        // La grid est créée en se servant d'un objet repeater qui reproduit à l'indentique notre rectangle
        // Cette reproduction sert à remplir notre grille
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

                        // Tous les tests se font à l'intérieur de notre MouseArea
                        // L'objet Repeater a permisde créer une MouseArea pour chaque exemplaire de notre Rectangle
                        MouseArea {

                            id : clic
                            anchors.fill : parent

                            onClicked : {
                                // On vérifie que nous n'avons pas une condition de fin de partie
                                if(ok.essai===false) {

                                    // L'affectation de l'image est faite sans passer par un signal car nous n'avons créé qu'un seul objet Mpion
                                    // L'utilisation d'un signal modifie toutes nos cases de jeu en même temps
                                    // zone.text contient la position de la case où le clic a été fait
                                    cool.source=vueObjImg.changementdim(zone.text);
                                    ok.i=vueObjImg.quijoue();

                                    // on détermine le joueur dont c'est le tour grace à une varible booléenne
                                    if(i) {
                                        ok.player1.color="#d80c44";
                                        ok.player2.color="#ffffff";
                                    }
                                    else {
                                        ok.player2.color="#d80c44";
                                        ok.player1.color="#ffffff";
                                    }

                                    // test des conditions de fin de partie
                                    ok.essai=vueObjImg.findejeu();

                                }

                                if(ok.essai==true) {

                                    ok.image1.width = 638;
                                    ok.image1.height = 478;
                                    testB.stop();
                                    testC.play();

                                    if(i) {
                                        ok.winning.text = "Victoire joueur 1";
                                        ok.image1.source ="p1.jpg";
                                    }
                                    else {
                                        ok.winning.text = "Victoire joueur 2";
                                        ok.image1.source ="p2.jpg";
                                    }

                                }

                            }

                        }

                    }

                }

            }
        }

        // Player1 et Player2 nous permettent d'annoncer à l'écran le joueur dont c'est le tour
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

        // La fonction audio noud permet de mettre du son en fond de notre application
        Audio {
            id : testC
            source : "winner.mp3"
        }

        // Image1 permet d'afficher l'avatar du joueur qui a remporté la partie
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


        // Text affiche un message qui félicite le vainqueur
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

    // Ecran d'accueil:  de l'application
    Item {
        id: accueil
        anchors.fill: parent
        visible : true

        Rectangle {
            anchors.fill: parent

            Image {
                source: "bg0.jpg"
                anchors.fill: parent
            }

            Text {
                color: "#07223c"
                anchors.centerIn: parent
                text: "Bienvenue dans notre jeu du morpion"
                styleColor: "#9d1414"
                style: Text.Raised
                font.weight: Font.Bold
                font.family: "Times New Roman"
                font.wordSpacing: 8
                font.bold: true
                font.pointSize: 20
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }

            Rectangle {
                anchors.right: parent.right
                anchors.rightMargin: 30
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 20
                height: 50
                color: "#e95cf1"
                radius: 20
                border.color: "#6b0101"
                border.width: 5
                width: 200

                Text {
                    text: "Nouvelle partie"
                    font.underline: false
                    style: Text.Raised
                    font.family: "Tahoma"
                    font.bold: true
                    font.pointSize: 15
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    anchors.fill: parent
                }

                Audio {
                    id : testB
                    source : "jeu.mp3"
                    loops: 100
                }

                MouseArea{
                    anchors.fill: parent;
                    onClicked: {
                        testB.play();
                        jeu.visible=true;
                        accueil.visible=false;
                    }
                }
            }
        }
    }

}



