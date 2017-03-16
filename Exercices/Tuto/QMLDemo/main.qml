import QtQuick 2.7
import QtQuick.Window 2.0
Window {
    id: window
    visible: true
    width: 500
    height: 200

Rectangle{
    id:page
    width:500; height:200
    color:"lightgray"

    Text{
        id:helloText
        text:"Hello World!  2012"
        font.pointSize:24; font.bold:true
        y:30;
        anchors.horizontalCenter:page.horizontalCenter
    }
}
}
