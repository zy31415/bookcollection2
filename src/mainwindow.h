#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>

#include "programconfigfile.h"
#include "currentdirectoryconfigurer.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString getCurrentDirectory();

private:
    Ui::MainWindow *ui;
    ProgramConfigFile* configFile_;

    CurrentDirectoryConfigurer* configCurrentDir_;


    QString getSelectedTag();

    void addPathIntoTreeWidget(QStringList filename);



private slots:
    void on_action_About_triggered();
    void on_actionOpenDirectory_triggered();
    void on_action_Settings_triggered();
    void onCurrentDirectoryChange();
    void on_listWidgetTags_itemSelectionChanged();
    void on_pushButtonAddTag_clicked();
    void on_pushButtonRemoveTag_clicked();
};

#endif // MAINWINDOW_H
