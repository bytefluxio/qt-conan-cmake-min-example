#include <iostream>
#include <QApplication>
#include <QWindow>

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    QWindow window;
    window.show();
    std::cout << "Running." << std::endl;
    return QApplication::exec();
}