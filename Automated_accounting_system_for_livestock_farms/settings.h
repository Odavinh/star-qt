#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include<QSettings>
#include<memory>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    bool loadSettins();
    bool saveSettings();

    QString *getDriverDB() const;

    QString *getHostName() const;

    QString *getUserName() const;

    QString *getPasword() const;

    bool getSetingsChangeWindow() const;

    QString *getDatabaseName() const;

    QString *getTableEmploeeName() const;

    QString *getTableStatisticsName() const;

    QByteArray getSettingsGeometryMain() const;

    QByteArray getSettingsGeometyShowBD() const;

    void setSettingsGeometryMain(const QByteArray &value);

    void setSettingsGeometyShowBD(const QByteArray &value);

    QString *getTableAnimalName() const;

private slots:
    void on_ButtonSave_clicked();

    void on_ButtonClose_clicked();

    void on_ButtonStandartSetings_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Settings *ui;

    std::shared_ptr<QString> driverDB;
    std::shared_ptr<QString> hostName;
    std::shared_ptr<QString> userName;
    std::shared_ptr<QString> pasword;

    bool SetingsChangeWindow;

    std::shared_ptr<QString> databaseName;
    std::shared_ptr<QString> tableEmploeeName;
    std::shared_ptr<QString> tableStatisticsName;
    std::shared_ptr<QString> tableAnimalName;

    std::shared_ptr<QSettings> settings;

    QByteArray settingsGeometryMain;
    QByteArray settingsGeometyShowBD;
};

#endif // SETTINGS_H
