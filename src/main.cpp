#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget w;
    w.setWindowTitle("Hello world!");
    w.setFixedSize(800, 600);
    w.show();
    return QApplication::exec();
}
