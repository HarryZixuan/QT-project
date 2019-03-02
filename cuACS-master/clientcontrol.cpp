#include "clientcontrol.h"

#include <QDebug>

ClientControl::ClientControl()
{
    _view = new ClientWindow(*this);

}

ClientControl::~ClientControl(){
}

void ClientControl::close(){
    _view->close();
    qDebug() << "Window closed";
}

void ClientControl::show(){
    _view->show();
    qDebug() << "Window opened";
}

void ClientControl::displayViewAnimalWindow(int col){
    ManageAnimalControl m;
    m.hideSubmitButton();
    m.updateAnimalDetailsFromDB(col);
    m.show();
}