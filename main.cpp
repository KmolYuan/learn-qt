#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget w;
    QLabel l("Hello world!", &w);
    w.setWindowTitle("My Window");
    w.setFixedSize(800, 600);
    w.show();
    return QApplication::exec();
}
