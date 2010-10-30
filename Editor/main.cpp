/*
    BlazeShow Editor - Modular LED Animations
    Copyright 2010 Projects and Stuff, LLC

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.


    Projects and Stuff, LLC
    Website: http://www.projectsandstuff.com
    Support: support@projectsandstuff.com
*/

#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainWindow mainWin;
    mainWin.setGeometry(50,100,1200,800);
    mainWin.show();

    return application.exec();
}
