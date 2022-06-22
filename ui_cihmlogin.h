/********************************************************************************
** Form generated from reading UI file 'cihmlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIHMLOGIN_H
#define UI_CIHMLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_CIhmLogin
{
public:
    QLineEdit *leLogin;
    QLineEdit *lePassword;
    QLineEdit *lePort;
    QLineEdit *leIp;
    QFrame *frame;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QRadioButton *radioButton;
    QDialogButtonBox *buttonBox;
    QFrame *frame_2;
    QFrame *frame_3;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QDialog *CIhmLogin)
    {
        if (CIhmLogin->objectName().isEmpty())
            CIhmLogin->setObjectName(QString::fromUtf8("CIhmLogin"));
        CIhmLogin->setWindowModality(Qt::WindowModal);
        CIhmLogin->resize(521, 491);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Images/Logo2.png"), QSize(), QIcon::Normal, QIcon::Off);
        CIhmLogin->setWindowIcon(icon);
        CIhmLogin->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        CIhmLogin->setModal(true);
        leLogin = new QLineEdit(CIhmLogin);
        leLogin->setObjectName(QString::fromUtf8("leLogin"));
        leLogin->setEnabled(true);
        leLogin->setGeometry(QRect(182, 290, 251, 32));
        leLogin->setStyleSheet(QString::fromUtf8("font: 12 14pt \"Source Serif Pro ExtraLight\";\n"
"background-color:  rgb(255, 249, 242);"));
        leLogin->setInputMethodHints(Qt::ImhNone);
        leLogin->setFrame(true);
        lePassword = new QLineEdit(CIhmLogin);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setGeometry(QRect(182, 330, 251, 32));
        lePassword->setStyleSheet(QString::fromUtf8("font: 12 14pt \"Source Serif Pro ExtraLight\";\n"
"background-color:  rgb(255, 249, 242);"));
        lePassword->setEchoMode(QLineEdit::Password);
        lePort = new QLineEdit(CIhmLogin);
        lePort->setObjectName(QString::fromUtf8("lePort"));
        lePort->setGeometry(QRect(182, 250, 251, 32));
        lePort->setStyleSheet(QString::fromUtf8("font: 12 14pt \"Source Serif Pro ExtraLight\";\n"
"border-color: rgb(7, 255, 247);\n"
"background-color:  rgb(255, 249, 242);"));
        leIp = new QLineEdit(CIhmLogin);
        leIp->setObjectName(QString::fromUtf8("leIp"));
        leIp->setGeometry(QRect(182, 210, 251, 32));
        leIp->setStyleSheet(QString::fromUtf8("font: 12 14pt \"Source Serif Pro ExtraLight\";\n"
"background-color:  rgb(255, 249, 242);"));
        frame = new QFrame(CIhmLogin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 150, 461, 301));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 207, 194);\n"
"selection-background-color: rgb(238, 238, 238);\n"
"color: rgb(255, 255, 255);\n"
"selection-color: rgb(173, 142, 121);\n"
"font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(51, 184, 81, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 12 14pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 104, 58, 18));
        label_3->setStyleSheet(QString::fromUtf8("font: 12 14pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 64, 91, 18));
        label_2->setStyleSheet(QString::fromUtf8("font: 12 14pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 140, 61, 31));
        label->setStyleSheet(QString::fromUtf8("font: 12 14pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);"));
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(330, 247, 105, 22));
        radioButton->setStyleSheet(QString::fromUtf8("\n"
"font: 75 12pt \"Noto Sans\";\n"
"color: rgb(134, 107, 77);"));
        radioButton->setCheckable(false);
        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-20, 240, 341, 32));
        buttonBox->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(134, 107, 77);\n"
"selection-background-color: rgb(238, 238, 238);\n"
"color: rgb(255, 255, 255);\n"
"selection-color: rgb(173, 142, 121);\n"
""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame_2 = new QFrame(CIhmLogin);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 521, 491));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 107, 77);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 501, 471));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 20, 121, 101));
        label_4->setPixmap(QPixmap(QString::fromUtf8("Images/logoLAB.png")));
        label_4->setScaledContents(true);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 20, 131, 91));
        label_6->setPixmap(QPixmap(QString::fromUtf8("Images/Logo2.png")));
        label_6->setScaledContents(true);
        frame_2->raise();
        frame->raise();
        leLogin->raise();
        lePassword->raise();
        lePort->raise();
        leIp->raise();

        retranslateUi(CIhmLogin);

        QMetaObject::connectSlotsByName(CIhmLogin);
    } // setupUi

    void retranslateUi(QDialog *CIhmLogin)
    {
        CIhmLogin->setWindowTitle(QApplication::translate("CIhmLogin", "Client SmartCity v1.2", nullptr));
        leLogin->setText(QApplication::translate("CIhmLogin", "root", nullptr));
        lePassword->setText(QApplication::translate("CIhmLogin", "admin", nullptr));
        lePort->setText(QApplication::translate("CIhmLogin", "2222", nullptr));
        leIp->setText(QApplication::translate("CIhmLogin", "192.168.4.3", nullptr));
        label_5->setText(QApplication::translate("CIhmLogin", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Password:</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("CIhmLogin", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Port :</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("CIhmLogin", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Adresse IP:</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("CIhmLogin", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Login :</span></p></body></html>", nullptr));
        radioButton->setText(QApplication::translate("CIhmLogin", "?", nullptr));
        label_4->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CIhmLogin: public Ui_CIhmLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIHMLOGIN_H
