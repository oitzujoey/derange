#include <iostream>
#include <QApplication>
#include "config.h"
#include "editor.h"

int main(int argc, char *argv[]) {
	std::cout << "Hello, world!" << std::endl;
	
	QApplication EditorApp(argc, argv);
	Notepad Editor;
	Editor.show();
	
	return EditorApp.exec();
}
