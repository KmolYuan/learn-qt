//
// Created by foxy on 2020/2/23.
//

#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include "ui_main_window.h"

class MainWindow : public QMainWindow {
    Q_OBJECT
    Ui::MainWindow ui{};

   public:
    explicit MainWindow(QWidget *parent = nullptr) {
        ui.setupUi(this);
    }
};

#endif  // MAIN_WINDOW_H
