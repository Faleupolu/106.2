#include "filemanager.h"

#include <QFile>
#include <QTextStream>

FileManager::FileManager()
{

}

void FileManager::WriteFile(QString fileName, QVector<QString> fileContent){
    fileName.append(".csv");
    QFile file(fileName);
    file.open(QIODevice::ReadWrite | QIODevice::Append);

    if(!file.isOpen()){
        qDebug("NoFileFound");
        return;
    }

    QTextStream stream(&file);
    for(int i = 0; i < fileContent.size(); i++){
        stream << fileContent.at(i);
        if(i !=fileContent.size()-1){
            stream << ",";
        }
        else{
            stream << "\n";
        }
    }
    file.close();
    if(!file.isOpen()){
            qDebug("File Closed - Write");
    }


}

bool FileManager::CheckValidUser(QString username, QString fileName){
    nameFound = false;
    QVector<QVector<QString>> content = ReadFile(fileName, 3);

    for(int i = 0; i < content.size(); i++){
        if(content.at(i).at(0) == username){
            nameFound = true;
            return false;
        }
        else{
            continue;
        }
    }
    if(!nameFound){
        return true;
    }
    return false;
}


QVector<QVector<QString>> FileManager::ReadFile(QString fileName, int numCols){
    fileName.append(".csv");
    QVector<QVector<QString>> columns;
    QVector<QString> rows;

    QFile file(fileName);
    file.open(QIODevice::ReadOnly);

    if(!file.isOpen()){
        qDebug("No File was Found");
        return columns;
    }

    QTextStream stream(&file);


    //TO AMMEND:
    while(!stream.atEnd()){
        QString str = stream.readLine();
        rows.append(str.split(","));

        for(int i = 0; i < numCols; i++){
            if(i == numCols-1){
                qDebug("Reached iteration 3");
                columns.append(rows);
                qDebug(qUtf8Printable(str));
                qDebug(qUtf8Printable(QString::number(rows.size())));
                rows.clear();
            }
        }
    }
    return columns;
}
