/** \file
 */

#ifndef DIRECTORYDATABASE_H
#define DIRECTORYDATABASE_H

#include <QString>
#include <QStringList>
#include <QObject>

#include "databaseconnection.h"

class DirectoryDatabase : public QObject
{
    Q_OBJECT

private:
    QString dir, dir_config, path_database;

    DatabaseConnection* conn_;

public:

    ///
    /// \brief Constructor
    /// \param dir books directory
    /// \param parent
    ///
    explicit DirectoryDatabase(QString dir, QObject *parent = 0);
    ~DirectoryDatabase();

    ///
    /// \brief Initialize the database
    ///
    void initDatabase();

    ///
    /// \brief Load all books under the directory to the database.
    ///
    /// This command create a new thread to do the job so the UI thread
    /// won't be locked.
    ///
    void loadAllBooksIntoDatabase();

    ///
    /// \brief Get all tags list from the database
    /// \return All tags list
    ///
    QStringList getTags();

    ///
    /// \brief Get all files list belonging to a tag from the database
    /// \param tag
    /// \return
    ///
    QStringList getFiles(const QString& tag);

    ///
    /// \brief Add a tag into the database
    /// \param tag tag to be added
    ///
    void addTag(QString tag);

    ///
    /// \brief Remove a tag from the database
    /// \param tag
    ///
    void removeTag(QString tag);

    ///
    /// \brief If the tag in the database.
    /// \param tag
    /// \return true - yes, false - no
    ///
    bool hasTag(const QString& tag);
};

#endif // DIRECTORYDATABASE_H
