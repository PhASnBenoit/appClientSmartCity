/********************************************************************************
** Form generated from reading UI file 'cihm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIHM_H
#define UI_CIHM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CIhm
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *LampadaireLabel;
    QLabel *lampOff1;
    QLabel *fondLampLabel;
    QFrame *frame;
    QLabel *LumiereLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb100;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pb50;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbOffLamp;
    QLabel *label_10;
    QPushButton *pbRecupLamp;
    QPushButton *pbTestLamps;
    QFrame *frame_7;
    QTextEdit *teLamp;
    QPushButton *pbClear_5;
    QLabel *comLabel1;
    QLabel *lampOff2;
    QLabel *lampOff3;
    QLabel *lamp50_1;
    QLabel *lamp50_2;
    QLabel *lamp50_3;
    QLabel *lamp100_1;
    QLabel *lamp100_2;
    QLabel *lamp100_3;
    QFrame *frame_8;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *page_2;
    QLabel *barriereLabel;
    QLabel *fondBarrireLabel;
    QLabel *parkingLabel;
    QFrame *frame_6;
    QTextEdit *teParking;
    QPushButton *pbClear_4;
    QLabel *comLabel2;
    QFrame *frame_9;
    QPushButton *pbFermerB_2;
    QPushButton *pbFermerB;
    QPushButton *pbOuvrirB;
    QLabel *exitBarriereLabel;
    QLabel *entreeBarriereLabel;
    QPushButton *pbOuvrirB_2;
    QLabel *label_11;
    QPushButton *pbTestParking;
    QLabel *label_12;
    QPushButton *pbLecRFID;
    QLabel *lBarriereR;
    QLabel *lBarriereV;
    QLabel *lBarriere1;
    QLabel *lBarriereR2;
    QLabel *lBarriereV2;
    QLabel *lBarriere2;
    QTableWidget *tableWidget;
    QFrame *frame_10;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QPushButton *pbAfficheur;
    QLabel *label_7;
    QLabel *lVoiture1;
    QLabel *lVoiture2;
    QLabel *lVoiture3;
    QLabel *lVoiture4;
    QLabel *lVoiture5;
    QLabel *lVoiture6;
    QLabel *lVoiture7;
    QLabel *lVoiture8;
    QPushButton *pbLirePLaces;
    QWidget *page_3;
    QLabel *label_4;
    QFrame *frame_2;
    QPushButton *pbAuto;
    QPushButton *pbVert;
    QPushButton *pbRouge;
    QPushButton *pbOrange;
    QPushButton *pbOC;
    QLabel *label_27;
    QComboBox *comboBox_2;
    QPushButton *pbEteint;
    QFrame *frame_3;
    QLabel *label_3;
    QLabel *feux2Vert;
    QLabel *feuxVert;
    QLabel *feuxOff;
    QLabel *feuxRouge;
    QLabel *feuxOrange;
    QLabel *feux2Off;
    QLabel *feux2Rouge;
    QLabel *feux2Orange;
    QPushButton *pbTestInter;
    QFrame *frame_5;
    QTextEdit *teInter;
    QPushButton *pbClear_3;
    QLabel *comLabel3;
    QLabel *label_26;
    QFrame *frame_11;
    QWidget *page_4;
    QLabel *aboLabel;
    QTableWidget *table;
    QPushButton *pbAdd;
    QPushButton *pbDelete;
    QPushButton *pbMoins;
    QPushButton *pbPlus;
    QLineEdit *leAbo;
    QLineEdit *leAbo2;
    QLineEdit *leAbo3;
    QLabel *labSmartCity;
    QLineEdit *AppelLineEdit;
    QLabel *cameraLabel;
    QLabel *logoLycee;
    QFrame *frame_4;
    QLabel *AppelLabel;
    QLabel *lAppelR;
    QLabel *lAppel;
    QPushButton *pbTestAppel;
    QComboBox *comboBox;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QMainWindow *CIhm)
    {
        if (CIhm->objectName().isEmpty())
            CIhm->setObjectName(QString::fromUtf8("CIhm"));
        CIhm->resize(1488, 745);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Images/Logo2.png"), QSize(), QIcon::Normal, QIcon::Off);
        CIhm->setWindowIcon(icon);
        CIhm->setAutoFillBackground(false);
        CIhm->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(CIhm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(470, 90, 1011, 641));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(6, 10, 1001, 621));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        LampadaireLabel = new QLabel(page);
        LampadaireLabel->setObjectName(QString::fromUtf8("LampadaireLabel"));
        LampadaireLabel->setGeometry(QRect(20, 0, 841, 61));
        LampadaireLabel->setStyleSheet(QString::fromUtf8("font: 12 24pt \"Source Serif Pro ExtraLight\";"));
        lampOff1 = new QLabel(page);
        lampOff1->setObjectName(QString::fromUtf8("lampOff1"));
        lampOff1->setGeometry(QRect(300, 240, 51, 191));
        lampOff1->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire.png")));
        lampOff1->setScaledContents(true);
        fondLampLabel = new QLabel(page);
        fondLampLabel->setObjectName(QString::fromUtf8("fondLampLabel"));
        fondLampLabel->setGeometry(QRect(210, 260, 481, 351));
        fondLampLabel->setPixmap(QPixmap(QString::fromUtf8("Images/Route.jpg")));
        fondLampLabel->setScaledContents(true);
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(9, 75, 181, 531));
        frame->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        LumiereLabel = new QLabel(frame);
        LumiereLabel->setObjectName(QString::fromUtf8("LumiereLabel"));
        LumiereLabel->setGeometry(QRect(10, 180, 161, 47));
        LumiereLabel->setMinimumSize(QSize(0, 20));
        LumiereLabel->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(25, 230, 131, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pb100 = new QPushButton(verticalLayoutWidget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setMinimumSize(QSize(40, 20));
        pb100->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 235, 121);\n"
"border-color: rgb(255, 227, 111);\n"
"font: 12 14pt \"Source Serif Pro ExtraLight\";"));

        horizontalLayout->addWidget(pb100);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pb50 = new QPushButton(verticalLayoutWidget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 193);\n"
"border-color: rgb(255, 227, 111);\n"
"font: 12 14pt \"Source Serif Pro ExtraLight\";"));

        horizontalLayout_2->addWidget(pb50);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbOffLamp = new QPushButton(verticalLayoutWidget);
        pbOffLamp->setObjectName(QString::fromUtf8("pbOffLamp"));
        pbOffLamp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 254, 240);\n"
"border-color: rgb(175, 41, 41);\n"
"font: 12 14pt \"Source Serif Pro ExtraLight\";"));

        horizontalLayout_3->addWidget(pbOffLamp);


        verticalLayout->addLayout(horizontalLayout_3);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 40, 162, 51));
        label_10->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        pbRecupLamp = new QPushButton(frame);
        pbRecupLamp->setObjectName(QString::fromUtf8("pbRecupLamp"));
        pbRecupLamp->setGeometry(QRect(10, 96, 162, 39));
        pbRecupLamp->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(225, 207, 194);\n"
"font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        pbTestLamps = new QPushButton(frame);
        pbTestLamps->setObjectName(QString::fromUtf8("pbTestLamps"));
        pbTestLamps->setGeometry(QRect(10, 140, 162, 39));
        pbTestLamps->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(225, 207, 194);\n"
"font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        frame_7 = new QFrame(page);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(710, 70, 281, 541));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 207, 194);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        teLamp = new QTextEdit(frame_7);
        teLamp->setObjectName(QString::fromUtf8("teLamp"));
        teLamp->setEnabled(true);
        teLamp->setGeometry(QRect(20, 94, 241, 421));
        teLamp->setMinimumSize(QSize(200, 360));
        teLamp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 244);\n"
"font: 75 13pt \"Source Serif Pro ExtraLight\";\n"
"\n"
"\n"
"\n"
""));
        teLamp->setReadOnly(true);
        pbClear_5 = new QPushButton(frame_7);
        pbClear_5->setObjectName(QString::fromUtf8("pbClear_5"));
        pbClear_5->setGeometry(QRect(90, 50, 101, 34));
        pbClear_5->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);\n"
"font: 12 14pt \"Source Serif Pro ExtraLight\";"));
        comLabel1 = new QLabel(page);
        comLabel1->setObjectName(QString::fromUtf8("comLabel1"));
        comLabel1->setGeometry(QRect(680, 82, 341, 31));
        comLabel1->setMinimumSize(QSize(50, 20));
        comLabel1->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        lampOff2 = new QLabel(page);
        lampOff2->setObjectName(QString::fromUtf8("lampOff2"));
        lampOff2->setGeometry(QRect(420, 240, 51, 191));
        lampOff2->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire.png")));
        lampOff2->setScaledContents(true);
        lampOff3 = new QLabel(page);
        lampOff3->setObjectName(QString::fromUtf8("lampOff3"));
        lampOff3->setGeometry(QRect(540, 240, 51, 191));
        lampOff3->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire.png")));
        lampOff3->setScaledContents(true);
        lamp50_1 = new QLabel(page);
        lamp50_1->setObjectName(QString::fromUtf8("lamp50_1"));
        lamp50_1->setGeometry(QRect(300, 240, 51, 191));
        lamp50_1->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire50.png")));
        lamp50_1->setScaledContents(true);
        lamp50_2 = new QLabel(page);
        lamp50_2->setObjectName(QString::fromUtf8("lamp50_2"));
        lamp50_2->setGeometry(QRect(420, 240, 51, 191));
        lamp50_2->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire50.png")));
        lamp50_2->setScaledContents(true);
        lamp50_3 = new QLabel(page);
        lamp50_3->setObjectName(QString::fromUtf8("lamp50_3"));
        lamp50_3->setGeometry(QRect(540, 240, 51, 191));
        lamp50_3->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire50.png")));
        lamp50_3->setScaledContents(true);
        lamp100_1 = new QLabel(page);
        lamp100_1->setObjectName(QString::fromUtf8("lamp100_1"));
        lamp100_1->setGeometry(QRect(300, 240, 51, 191));
        lamp100_1->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire100.png")));
        lamp100_1->setScaledContents(true);
        lamp100_2 = new QLabel(page);
        lamp100_2->setObjectName(QString::fromUtf8("lamp100_2"));
        lamp100_2->setGeometry(QRect(420, 240, 51, 191));
        lamp100_2->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire100.png")));
        lamp100_2->setScaledContents(true);
        lamp100_3 = new QLabel(page);
        lamp100_3->setObjectName(QString::fromUtf8("lamp100_3"));
        lamp100_3->setGeometry(QRect(540, 240, 51, 191));
        lamp100_3->setPixmap(QPixmap(QString::fromUtf8("Images/lampadaire100.png")));
        lamp100_3->setScaledContents(true);
        frame_8 = new QFrame(page);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(4, 70, 191, 541));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 207, 194);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalSlider_2 = new QSlider(page);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(250, 110, 431, 20));
        horizontalSlider_2->setContextMenuPolicy(Qt::NoContextMenu);
        horizontalSlider_2->setAutoFillBackground(false);
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        horizontalSlider_2->setInputMethodHints(Qt::ImhNone);
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(32);
        horizontalSlider_2->setPageStep(1);
        horizontalSlider_2->setValue(1);
        horizontalSlider_2->setTracking(true);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setInvertedAppearance(false);
        horizontalSlider_2->setInvertedControls(false);
        horizontalSlider_2->setTickPosition(QSlider::TicksBothSides);
        horizontalSlider_2->setTickInterval(1);
        horizontalSlider = new QSlider(page);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(250, 170, 431, 20));
        horizontalSlider->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(32);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);
        horizontalSlider->setTickInterval(1);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 70, 171, 31));
        label->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(214, 106, 58, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(219, 166, 58, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 200, 21, 18));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(440, 190, 21, 21));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(440, 130, 21, 21));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        LampadaireLabel->raise();
        fondLampLabel->raise();
        lampOff1->raise();
        frame_7->raise();
        comLabel1->raise();
        lampOff2->raise();
        lampOff3->raise();
        lamp50_1->raise();
        lamp50_2->raise();
        lamp50_3->raise();
        lamp100_1->raise();
        lamp100_2->raise();
        lamp100_3->raise();
        frame_8->raise();
        frame->raise();
        horizontalSlider_2->raise();
        horizontalSlider->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        label_8->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        barriereLabel = new QLabel(page_2);
        barriereLabel->setObjectName(QString::fromUtf8("barriereLabel"));
        barriereLabel->setGeometry(QRect(510, 220, 91, 81));
        barriereLabel->setPixmap(QPixmap(QString::fromUtf8("Images/barriere.png")));
        barriereLabel->setScaledContents(true);
        fondBarrireLabel = new QLabel(page_2);
        fondBarrireLabel->setObjectName(QString::fromUtf8("fondBarrireLabel"));
        fondBarrireLabel->setGeometry(QRect(250, 210, 431, 171));
        fondBarrireLabel->setPixmap(QPixmap(QString::fromUtf8("Images/parking.jpg")));
        fondBarrireLabel->setScaledContents(true);
        parkingLabel = new QLabel(page_2);
        parkingLabel->setObjectName(QString::fromUtf8("parkingLabel"));
        parkingLabel->setGeometry(QRect(0, 0, 839, 61));
        parkingLabel->setStyleSheet(QString::fromUtf8("font: 12 24pt \"Source Serif Pro ExtraLight\";"));
        frame_6 = new QFrame(page_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(710, 70, 281, 541));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 207, 194);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        teParking = new QTextEdit(frame_6);
        teParking->setObjectName(QString::fromUtf8("teParking"));
        teParking->setGeometry(QRect(20, 94, 241, 421));
        teParking->setMinimumSize(QSize(200, 360));
        teParking->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 244);\n"
"\n"
"font: 12 13pt \"Source Serif Pro ExtraLight\";"));
        teParking->setReadOnly(true);
        pbClear_4 = new QPushButton(frame_6);
        pbClear_4->setObjectName(QString::fromUtf8("pbClear_4"));
        pbClear_4->setGeometry(QRect(90, 50, 101, 34));
        pbClear_4->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);\n"
"font: 12 14pt \"Source Serif Pro ExtraLight\";"));
        comLabel2 = new QLabel(page_2);
        comLabel2->setObjectName(QString::fromUtf8("comLabel2"));
        comLabel2->setGeometry(QRect(715, 77, 271, 41));
        comLabel2->setMinimumSize(QSize(50, 20));
        comLabel2->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        frame_9 = new QFrame(page_2);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(9, 70, 181, 531));
        frame_9->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        pbFermerB_2 = new QPushButton(frame_9);
        pbFermerB_2->setObjectName(QString::fromUtf8("pbFermerB_2"));
        pbFermerB_2->setEnabled(true);
        pbFermerB_2->setGeometry(QRect(20, 460, 84, 34));
        pbFermerB_2->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);"));
        pbFermerB = new QPushButton(frame_9);
        pbFermerB->setObjectName(QString::fromUtf8("pbFermerB"));
        pbFermerB->setGeometry(QRect(20, 310, 84, 34));
        pbFermerB->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);"));
        pbOuvrirB = new QPushButton(frame_9);
        pbOuvrirB->setObjectName(QString::fromUtf8("pbOuvrirB"));
        pbOuvrirB->setGeometry(QRect(20, 260, 84, 34));
        pbOuvrirB->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);"));
        exitBarriereLabel = new QLabel(frame_9);
        exitBarriereLabel->setObjectName(QString::fromUtf8("exitBarriereLabel"));
        exitBarriereLabel->setGeometry(QRect(7, 360, 169, 47));
        exitBarriereLabel->setMinimumSize(QSize(0, 20));
        exitBarriereLabel->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        entreeBarriereLabel = new QLabel(frame_9);
        entreeBarriereLabel->setObjectName(QString::fromUtf8("entreeBarriereLabel"));
        entreeBarriereLabel->setGeometry(QRect(6, 209, 169, 47));
        entreeBarriereLabel->setMinimumSize(QSize(0, 20));
        entreeBarriereLabel->setStyleSheet(QString::fromUtf8("font: 15pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);\n"
""));
        pbOuvrirB_2 = new QPushButton(frame_9);
        pbOuvrirB_2->setObjectName(QString::fromUtf8("pbOuvrirB_2"));
        pbOuvrirB_2->setGeometry(QRect(20, 410, 84, 34));
        pbOuvrirB_2->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);"));
        label_11 = new QLabel(frame_9);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(15, 20, 149, 41));
        label_11->setStyleSheet(QString::fromUtf8("font: 15pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);\n"
""));
        pbTestParking = new QPushButton(frame_9);
        pbTestParking->setObjectName(QString::fromUtf8("pbTestParking"));
        pbTestParking->setGeometry(QRect(16, 60, 149, 39));
        pbTestParking->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);"));
        label_12 = new QLabel(frame_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(15, 110, 149, 41));
        label_12->setStyleSheet(QString::fromUtf8("font: 15pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);\n"
""));
        pbLecRFID = new QPushButton(frame_9);
        pbLecRFID->setObjectName(QString::fromUtf8("pbLecRFID"));
        pbLecRFID->setGeometry(QRect(16, 150, 149, 39));
        pbLecRFID->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);"));
        lBarriereR = new QLabel(frame_9);
        lBarriereR->setObjectName(QString::fromUtf8("lBarriereR"));
        lBarriereR->setEnabled(true);
        lBarriereR->setGeometry(QRect(117, 278, 51, 51));
        lBarriereR->setPixmap(QPixmap(QString::fromUtf8("Images/ledRed.png")));
        lBarriereR->setScaledContents(true);
        lBarriereV = new QLabel(frame_9);
        lBarriereV->setObjectName(QString::fromUtf8("lBarriereV"));
        lBarriereV->setEnabled(true);
        lBarriereV->setGeometry(QRect(117, 278, 51, 51));
        lBarriereV->setPixmap(QPixmap(QString::fromUtf8("Images/ledGreen.png")));
        lBarriereV->setScaledContents(true);
        lBarriere1 = new QLabel(frame_9);
        lBarriere1->setObjectName(QString::fromUtf8("lBarriere1"));
        lBarriere1->setGeometry(QRect(117, 278, 51, 51));
        lBarriere1->setPixmap(QPixmap(QString::fromUtf8("Images/ledOff.png")));
        lBarriere1->setScaledContents(true);
        lBarriereR2 = new QLabel(frame_9);
        lBarriereR2->setObjectName(QString::fromUtf8("lBarriereR2"));
        lBarriereR2->setEnabled(true);
        lBarriereR2->setGeometry(QRect(117, 428, 51, 51));
        lBarriereR2->setPixmap(QPixmap(QString::fromUtf8("Images/ledRed.png")));
        lBarriereR2->setScaledContents(true);
        lBarriereV2 = new QLabel(frame_9);
        lBarriereV2->setObjectName(QString::fromUtf8("lBarriereV2"));
        lBarriereV2->setEnabled(true);
        lBarriereV2->setGeometry(QRect(117, 428, 51, 51));
        lBarriereV2->setPixmap(QPixmap(QString::fromUtf8("Images/ledGreen.png")));
        lBarriereV2->setScaledContents(true);
        lBarriere2 = new QLabel(frame_9);
        lBarriere2->setObjectName(QString::fromUtf8("lBarriere2"));
        lBarriere2->setGeometry(QRect(117, 428, 51, 51));
        lBarriere2->setPixmap(QPixmap(QString::fromUtf8("Images/ledOff.png")));
        lBarriere2->setScaledContents(true);
        tableWidget = new QTableWidget(frame_9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(160, 260, 256, 192));
        pbFermerB_2->raise();
        pbFermerB->raise();
        pbOuvrirB->raise();
        exitBarriereLabel->raise();
        entreeBarriereLabel->raise();
        pbOuvrirB_2->raise();
        label_11->raise();
        pbTestParking->raise();
        label_12->raise();
        pbLecRFID->raise();
        lBarriere2->raise();
        lBarriere1->raise();
        lBarriereV2->raise();
        lBarriereV->raise();
        lBarriereR->raise();
        lBarriereR2->raise();
        tableWidget->raise();
        frame_10 = new QFrame(page_2);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(4, 66, 191, 541));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 207, 194);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(260, 90, 391, 32));
        lineEdit_3->setMaxLength(16);
        lineEdit_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_3->setClearButtonEnabled(true);
        lineEdit_4 = new QLineEdit(page_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 130, 391, 32));
        lineEdit_4->setMaxLength(16);
        lineEdit_4->setClearButtonEnabled(true);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 50, 211, 41));
        label_6->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);\n"
""));
        pbAfficheur = new QPushButton(page_2);
        pbAfficheur->setObjectName(QString::fromUtf8("pbAfficheur"));
        pbAfficheur->setGeometry(QRect(370, 170, 161, 34));
        pbAfficheur->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 390, 431, 231));
        label_7->setPixmap(QPixmap(QString::fromUtf8("Images/parking2.JPG")));
        label_7->setScaledContents(true);
        lVoiture1 = new QLabel(page_2);
        lVoiture1->setObjectName(QString::fromUtf8("lVoiture1"));
        lVoiture1->setGeometry(QRect(570, 390, 81, 41));
        lVoiture1->setPixmap(QPixmap(QString::fromUtf8("Images/voiture.png")));
        lVoiture1->setScaledContents(true);
        lVoiture2 = new QLabel(page_2);
        lVoiture2->setObjectName(QString::fromUtf8("lVoiture2"));
        lVoiture2->setGeometry(QRect(570, 450, 81, 41));
        lVoiture2->setPixmap(QPixmap(QString::fromUtf8("Images/voiture.png")));
        lVoiture2->setScaledContents(true);
        lVoiture3 = new QLabel(page_2);
        lVoiture3->setObjectName(QString::fromUtf8("lVoiture3"));
        lVoiture3->setGeometry(QRect(580, 510, 81, 41));
        lVoiture3->setPixmap(QPixmap(QString::fromUtf8("Images/voiture.png")));
        lVoiture3->setScaledContents(true);
        lVoiture4 = new QLabel(page_2);
        lVoiture4->setObjectName(QString::fromUtf8("lVoiture4"));
        lVoiture4->setGeometry(QRect(580, 570, 81, 41));
        lVoiture4->setPixmap(QPixmap(QString::fromUtf8("Images/voiture.png")));
        lVoiture4->setScaledContents(true);
        lVoiture5 = new QLabel(page_2);
        lVoiture5->setObjectName(QString::fromUtf8("lVoiture5"));
        lVoiture5->setGeometry(QRect(255, 570, 81, 41));
        lVoiture5->setPixmap(QPixmap(QString::fromUtf8("Images/voiture.png")));
        lVoiture5->setScaledContents(true);
        lVoiture6 = new QLabel(page_2);
        lVoiture6->setObjectName(QString::fromUtf8("lVoiture6"));
        lVoiture6->setGeometry(QRect(260, 509, 81, 41));
        lVoiture6->setPixmap(QPixmap(QString::fromUtf8("Images/voiture.png")));
        lVoiture6->setScaledContents(true);
        lVoiture7 = new QLabel(page_2);
        lVoiture7->setObjectName(QString::fromUtf8("lVoiture7"));
        lVoiture7->setGeometry(QRect(260, 450, 81, 41));
        lVoiture7->setPixmap(QPixmap(QString::fromUtf8("Images/voiture.png")));
        lVoiture7->setScaledContents(true);
        lVoiture8 = new QLabel(page_2);
        lVoiture8->setObjectName(QString::fromUtf8("lVoiture8"));
        lVoiture8->setGeometry(QRect(263, 397, 81, 40));
        lVoiture8->setPixmap(QPixmap(QString::fromUtf8("Images/voiture.png")));
        lVoiture8->setScaledContents(true);
        pbLirePLaces = new QPushButton(page_2);
        pbLirePLaces->setObjectName(QString::fromUtf8("pbLirePLaces"));
        pbLirePLaces->setGeometry(QRect(380, 400, 161, 34));
        pbLirePLaces->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);"));
        stackedWidget->addWidget(page_2);
        frame_10->raise();
        fondBarrireLabel->raise();
        barriereLabel->raise();
        parkingLabel->raise();
        frame_6->raise();
        comLabel2->raise();
        frame_9->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        label_6->raise();
        pbAfficheur->raise();
        label_7->raise();
        lVoiture1->raise();
        lVoiture2->raise();
        lVoiture3->raise();
        lVoiture4->raise();
        lVoiture5->raise();
        lVoiture6->raise();
        lVoiture7->raise();
        lVoiture8->raise();
        pbLirePLaces->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 841, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 12 24pt \"Source Serif Pro ExtraLight\";"));
        frame_2 = new QFrame(page_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(15, 74, 181, 531));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pbAuto = new QPushButton(frame_2);
        pbAuto->setObjectName(QString::fromUtf8("pbAuto"));
        pbAuto->setGeometry(QRect(35, 56, 111, 51));
        pbAuto->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 236, 170);\n"
"border-color: rgb(0, 139, 9);"));
        pbVert = new QPushButton(frame_2);
        pbVert->setObjectName(QString::fromUtf8("pbVert"));
        pbVert->setGeometry(QRect(25, 354, 131, 41));
        pbVert->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 236, 170);\n"
"border-color: rgb(0, 139, 9);"));
        pbRouge = new QPushButton(frame_2);
        pbRouge->setObjectName(QString::fromUtf8("pbRouge"));
        pbRouge->setGeometry(QRect(26, 466, 131, 41));
        pbRouge->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 149, 149);\n"
"border-color: rgb(108, 0, 0);"));
        pbOrange = new QPushButton(frame_2);
        pbOrange->setObjectName(QString::fromUtf8("pbOrange"));
        pbOrange->setGeometry(QRect(26, 410, 131, 41));
        pbOrange->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 166, 84);"));
        pbOC = new QPushButton(frame_2);
        pbOC->setObjectName(QString::fromUtf8("pbOC"));
        pbOC->setGeometry(QRect(23, 123, 131, 51));
        pbOC->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 166, 84);"));
        label_27 = new QLabel(frame_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 200, 161, 31));
        label_27->setStyleSheet(QString::fromUtf8("font: 15pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);"));
        comboBox_2 = new QComboBox(frame_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 246, 141, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(134, 107, 77, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(238, 238, 238, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush3(QColor(173, 142, 121, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush3);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        comboBox_2->setPalette(palette);
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 107, 77);\n"
"selection-background-color: rgb(238, 238, 238);\n"
"color: rgb(255, 255, 255);\n"
"selection-color: rgb(173, 142, 121);\n"
"font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        pbEteint = new QPushButton(frame_2);
        pbEteint->setObjectName(QString::fromUtf8("pbEteint"));
        pbEteint->setGeometry(QRect(27, 300, 131, 41));
        frame_3 = new QFrame(page_3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(220, 70, 471, 541));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 207, 194);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(14, 90, 441, 411));
        label_3->setPixmap(QPixmap(QString::fromUtf8("Images/intersection.jpg")));
        label_3->setScaledContents(true);
        feux2Vert = new QLabel(frame_3);
        feux2Vert->setObjectName(QString::fromUtf8("feux2Vert"));
        feux2Vert->setGeometry(QRect(290, 400, 31, 81));
        feux2Vert->setPixmap(QPixmap(QString::fromUtf8("Images/feuxGreen.png")));
        feux2Vert->setScaledContents(true);
        feuxVert = new QLabel(frame_3);
        feuxVert->setObjectName(QString::fromUtf8("feuxVert"));
        feuxVert->setGeometry(QRect(40, 350, 91, 31));
        feuxVert->setPixmap(QPixmap(QString::fromUtf8("Images/feuxGreen copy.png")));
        feuxVert->setScaledContents(true);
        feuxOff = new QLabel(frame_3);
        feuxOff->setObjectName(QString::fromUtf8("feuxOff"));
        feuxOff->setGeometry(QRect(40, 348, 91, 31));
        feuxOff->setPixmap(QPixmap(QString::fromUtf8("Images/feuxOff copy copy.png")));
        feuxOff->setScaledContents(true);
        feuxRouge = new QLabel(frame_3);
        feuxRouge->setObjectName(QString::fromUtf8("feuxRouge"));
        feuxRouge->setGeometry(QRect(40, 350, 91, 31));
        feuxRouge->setPixmap(QPixmap(QString::fromUtf8("Images/feuxRed copy.png")));
        feuxRouge->setScaledContents(true);
        feuxOrange = new QLabel(frame_3);
        feuxOrange->setObjectName(QString::fromUtf8("feuxOrange"));
        feuxOrange->setGeometry(QRect(40, 350, 91, 31));
        feuxOrange->setPixmap(QPixmap(QString::fromUtf8("Images/feuxYellow copy.png")));
        feuxOrange->setScaledContents(true);
        feux2Off = new QLabel(frame_3);
        feux2Off->setObjectName(QString::fromUtf8("feux2Off"));
        feux2Off->setGeometry(QRect(290, 400, 31, 81));
        feux2Off->setPixmap(QPixmap(QString::fromUtf8("Images/feuxOff copy.png")));
        feux2Off->setScaledContents(true);
        feux2Rouge = new QLabel(frame_3);
        feux2Rouge->setObjectName(QString::fromUtf8("feux2Rouge"));
        feux2Rouge->setGeometry(QRect(290, 400, 31, 81));
        feux2Rouge->setPixmap(QPixmap(QString::fromUtf8("Images/feuxRed.png")));
        feux2Rouge->setScaledContents(true);
        feux2Orange = new QLabel(frame_3);
        feux2Orange->setObjectName(QString::fromUtf8("feux2Orange"));
        feux2Orange->setGeometry(QRect(290, 400, 31, 81));
        feux2Orange->setPixmap(QPixmap(QString::fromUtf8("Images/feuxYellow.png")));
        feux2Orange->setScaledContents(true);
        pbTestInter = new QPushButton(frame_3);
        pbTestInter->setObjectName(QString::fromUtf8("pbTestInter"));
        pbTestInter->setGeometry(QRect(160, 30, 151, 34));
        pbTestInter->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 107, 77);\n"
"selection-background-color: rgb(238, 238, 238);\n"
"color: rgb(255, 255, 255);\n"
"selection-color: rgb(173, 142, 121);\n"
"font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(710, 70, 281, 541));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 207, 194);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        teInter = new QTextEdit(frame_5);
        teInter->setObjectName(QString::fromUtf8("teInter"));
        teInter->setGeometry(QRect(20, 94, 241, 421));
        teInter->setMinimumSize(QSize(200, 360));
        teInter->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 244);\n"
"font: 12 13pt \"Source Serif Pro ExtraLight\";\n"
""));
        teInter->setReadOnly(true);
        pbClear_3 = new QPushButton(frame_5);
        pbClear_3->setObjectName(QString::fromUtf8("pbClear_3"));
        pbClear_3->setGeometry(QRect(90, 50, 101, 34));
        pbClear_3->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);\n"
"font: 12 14pt \"Source Serif Pro ExtraLight\";"));
        comLabel3 = new QLabel(page_3);
        comLabel3->setObjectName(QString::fromUtf8("comLabel3"));
        comLabel3->setGeometry(QRect(715, 81, 271, 31));
        comLabel3->setMinimumSize(QSize(50, 20));
        comLabel3->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        label_26 = new QLabel(page_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(4, 82, 201, 41));
        label_26->setStyleSheet(QString::fromUtf8("font: 15pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);"));
        frame_11 = new QFrame(page_3);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(10, 69, 191, 541));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 207, 194);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_3);
        frame_11->raise();
        frame_5->raise();
        frame_2->raise();
        frame_3->raise();
        label_4->raise();
        comLabel3->raise();
        label_26->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        aboLabel = new QLabel(page_4);
        aboLabel->setObjectName(QString::fromUtf8("aboLabel"));
        aboLabel->setGeometry(QRect(10, 0, 841, 61));
        aboLabel->setStyleSheet(QString::fromUtf8("font: 12 24pt \"Source Serif Pro ExtraLight\";"));
        table = new QTableWidget(page_4);
        if (table->columnCount() < 3)
            table->setColumnCount(3);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (table->rowCount() < 7)
            table->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setVerticalHeaderItem(6, __qtablewidgetitem9);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(170, 70, 791, 421));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy);
        table->setMinimumSize(QSize(200, 0));
        table->setSizeIncrement(QSize(500, 0));
        table->setBaseSize(QSize(500, 0));
        table->setMouseTracking(false);
        table->setTabletTracking(false);
        table->setAutoFillBackground(false);
        table->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(225, 207, 194);\n"
"gridline-color: rgb(111, 88, 59);\n"
"\n"
"alternate-background-color: rgb(255, 249, 242);\n"
"font: 15pt \"Source Serif Pro ExtraLight\";\n"
"color: rgb(134, 107, 77);\n"
""));
        table->setFrameShape(QFrame::Panel);
        table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        table->setAutoScroll(true);
        table->setProperty("showDropIndicator", QVariant(true));
        table->setDragDropOverwriteMode(false);
        table->setDragDropMode(QAbstractItemView::NoDragDrop);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::MultiSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setIconSize(QSize(200, 100));
        table->setTextElideMode(Qt::ElideNone);
        table->setShowGrid(true);
        table->setGridStyle(Qt::SolidLine);
        table->setSortingEnabled(true);
        table->setWordWrap(true);
        table->setCornerButtonEnabled(true);
        table->horizontalHeader()->setCascadingSectionResizes(true);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table->horizontalHeader()->setStretchLastSection(true);
        table->verticalHeader()->setCascadingSectionResizes(false);
        table->verticalHeader()->setHighlightSections(true);
        table->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        table->verticalHeader()->setStretchLastSection(false);
        pbAdd = new QPushButton(page_4);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        pbAdd->setGeometry(QRect(410, 550, 151, 41));
        pbAdd->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);\n"
"font: 12 14pt \"Source Serif Pro ExtraLight\";"));
        pbDelete = new QPushButton(page_4);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        pbDelete->setGeometry(QRect(25, 250, 111, 41));
        pbDelete->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);\n"
"font: 12 14pt \"Source Serif Pro ExtraLight\";"));
        pbMoins = new QPushButton(page_4);
        pbMoins->setObjectName(QString::fromUtf8("pbMoins"));
        pbMoins->setGeometry(QRect(172, 89, 21, 16));
        pbMoins->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);\n"
"font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        pbPlus = new QPushButton(page_4);
        pbPlus->setObjectName(QString::fromUtf8("pbPlus"));
        pbPlus->setGeometry(QRect(172, 72, 21, 16));
        pbPlus->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 249, 242);\n"
"font: 12 12pt \"Source Serif Pro ExtraLight\";"));
        leAbo = new QLineEdit(page_4);
        leAbo->setObjectName(QString::fromUtf8("leAbo"));
        leAbo->setGeometry(QRect(180, 500, 111, 41));
        leAbo2 = new QLineEdit(page_4);
        leAbo2->setObjectName(QString::fromUtf8("leAbo2"));
        leAbo2->setGeometry(QRect(300, 500, 113, 41));
        leAbo3 = new QLineEdit(page_4);
        leAbo3->setObjectName(QString::fromUtf8("leAbo3"));
        leAbo3->setGeometry(QRect(420, 500, 531, 41));
        stackedWidget->addWidget(page_4);
        labSmartCity = new QLabel(centralwidget);
        labSmartCity->setObjectName(QString::fromUtf8("labSmartCity"));
        labSmartCity->setGeometry(QRect(654, 0, 141, 91));
        labSmartCity->setPixmap(QPixmap(QString::fromUtf8("Images/Logo2.png")));
        labSmartCity->setScaledContents(true);
        AppelLineEdit = new QLineEdit(centralwidget);
        AppelLineEdit->setObjectName(QString::fromUtf8("AppelLineEdit"));
        AppelLineEdit->setGeometry(QRect(10, 90, 451, 641));
        AppelLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 107, 77);\n"
""));
        cameraLabel = new QLabel(centralwidget);
        cameraLabel->setObjectName(QString::fromUtf8("cameraLabel"));
        cameraLabel->setGeometry(QRect(172, 90, 131, 71));
        cameraLabel->setStyleSheet(QString::fromUtf8("font: 12 24pt \"Source Serif Pro ExtraLight\";"));
        logoLycee = new QLabel(centralwidget);
        logoLycee->setObjectName(QString::fromUtf8("logoLycee"));
        logoLycee->setGeometry(QRect(508, 0, 101, 91));
        logoLycee->setPixmap(QPixmap(QString::fromUtf8("Images/logoLAB.png")));
        logoLycee->setScaledContents(true);
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(47, 506, 371, 201));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 239, 239);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        AppelLabel = new QLabel(centralwidget);
        AppelLabel->setObjectName(QString::fromUtf8("AppelLabel"));
        AppelLabel->setGeometry(QRect(50, 520, 361, 41));
        AppelLabel->setStyleSheet(QString::fromUtf8("font: 12 24pt \"Source Serif Pro ExtraLight\";"));
        lAppelR = new QLabel(centralwidget);
        lAppelR->setObjectName(QString::fromUtf8("lAppelR"));
        lAppelR->setEnabled(true);
        lAppelR->setGeometry(QRect(200, 570, 58, 61));
        lAppelR->setPixmap(QPixmap(QString::fromUtf8("Images/ledRed.png")));
        lAppelR->setScaledContents(true);
        lAppel = new QLabel(centralwidget);
        lAppel->setObjectName(QString::fromUtf8("lAppel"));
        lAppel->setEnabled(false);
        lAppel->setGeometry(QRect(200, 570, 58, 61));
        lAppel->setPixmap(QPixmap(QString::fromUtf8("Images/ledOff.png")));
        lAppel->setScaledContents(true);
        pbTestAppel = new QPushButton(centralwidget);
        pbTestAppel->setObjectName(QString::fromUtf8("pbTestAppel"));
        pbTestAppel->setGeometry(QRect(180, 640, 101, 34));
        pbTestAppel->setStyleSheet(QString::fromUtf8("font: 12 12pt \"Source Serif Pro ExtraLight\";\n"
"background-color: rgb(225, 207, 194);\n"
""));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1190, 30, 291, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush7(QColor(129, 129, 129, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush7);
        QBrush brush8(QColor(235, 214, 204, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush8);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        comboBox->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Serif Pro ExtraLight"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(1);
        comboBox->setFont(font1);
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 107, 77);\n"
"selection-background-color: rgb(238, 238, 238);\n"
"color: rgb(255, 255, 255);\n"
"selection-color: rgb(173, 142, 121);\n"
"font: 12 15pt \"Source Serif Pro ExtraLight\";\n"
"selection-color: rgb(129, 129, 129);"));
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(290, 330, 171, 41));
        CIhm->setCentralWidget(centralwidget);
        AppelLineEdit->raise();
        frame_4->raise();
        groupBox->raise();
        labSmartCity->raise();
        cameraLabel->raise();
        logoLycee->raise();
        AppelLabel->raise();
        lAppel->raise();
        lAppelR->raise();
        pbTestAppel->raise();
        comboBox->raise();
        commandLinkButton->raise();
        QWidget::setTabOrder(pbOffLamp, pb100);
        QWidget::setTabOrder(pb100, comboBox);
        QWidget::setTabOrder(comboBox, pb50);

        retranslateUi(CIhm);
        QObject::connect(pbClear_5, SIGNAL(clicked()), teLamp, SLOT(clear()));
        QObject::connect(pbClear_4, SIGNAL(clicked()), teParking, SLOT(clear()));
        QObject::connect(pbClear_3, SIGNAL(clicked()), teInter, SLOT(clear()));
        QObject::connect(table, SIGNAL(currentCellChanged(int,int,int,int)), pbDelete, SLOT(click()));
        QObject::connect(comboBox, SIGNAL(activated(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CIhm);
    } // setupUi

    void retranslateUi(QMainWindow *CIhm)
    {
        CIhm->setWindowTitle(QApplication::translate("CIhm", "Client SmartCity v1.2", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("CIhm", "<html><head/><body><p><span style=\" font-size:20pt;\">Gestion Maquette</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QString());
        LampadaireLabel->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#8f0606;\">~ Gestion des lampadaires ~</span></p></body></html>", nullptr));
        lampOff1->setText(QString());
        fondLampLabel->setText(QString());
        LumiereLabel->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\303\211clairage:</span></p></body></html>", nullptr));
        pb100->setText(QApplication::translate("CIhm", "100%", nullptr));
        pb50->setText(QApplication::translate("CIhm", "50%", nullptr));
        pbOffLamp->setText(QApplication::translate("CIhm", "OFF", nullptr));
        label_10->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\303\211tat de l'\303\251clairage</span></p></body></html>", nullptr));
        pbRecupLamp->setText(QApplication::translate("CIhm", "R\303\251cup\303\251rer", nullptr));
        pbTestLamps->setText(QApplication::translate("CIhm", "Test d\303\251fauts", nullptr));
        pbClear_5->setText(QApplication::translate("CIhm", "Effacer", nullptr));
        comLabel1->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\">&gt;<span style=\" font-weight:600;\"> Communication avec la maquette </span>&lt;</p></body></html>", nullptr));
        lampOff2->setText(QString());
        lampOff3->setText(QString());
        lamp50_1->setText(QString());
        lamp50_2->setText(QString());
        lamp50_3->setText(QString());
        lamp100_1->setText(QString());
        lamp100_2->setText(QString());
        lamp100_3->setText(QString());
        label->setText(QApplication::translate("CIhm", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Selection des cartes</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("CIhm", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">De:</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("CIhm", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\303\200:</span></p></body></html>", nullptr));
        label_8->setText(QString());
        lineEdit->setText(QApplication::translate("CIhm", "1", nullptr));
        lineEdit_2->setText(QApplication::translate("CIhm", "1", nullptr));
        barriereLabel->setText(QString());
        fondBarrireLabel->setText(QString());
        parkingLabel->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#7d0707;\">~ Gestion du Parking ~</span></p></body></html>", nullptr));
        pbClear_4->setText(QApplication::translate("CIhm", "Effacer", nullptr));
        comLabel2->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\">&gt; <span style=\" font-weight:600;\">Communication avec la maquette </span>&lt;</p></body></html>", nullptr));
        pbFermerB_2->setText(QApplication::translate("CIhm", "Fermer", nullptr));
        pbFermerB->setText(QApplication::translate("CIhm", "Fermer", nullptr));
        pbOuvrirB->setText(QApplication::translate("CIhm", "Ouvrir", nullptr));
        exitBarriereLabel->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#866b4d;\">Barri\303\250re Sortie</span></p></body></html>", nullptr));
        entreeBarriereLabel->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#866b4d;\">Barri\303\250re Entr\303\251e</span></p></body></html>", nullptr));
        pbOuvrirB_2->setText(QApplication::translate("CIhm", "Ouvrir", nullptr));
        label_11->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\303\211tat des barri\303\250res</span></p></body></html>", nullptr));
        pbTestParking->setText(QApplication::translate("CIhm", "TEST", nullptr));
        label_12->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Lecture RFID</span></p></body></html>", nullptr));
        pbLecRFID->setText(QApplication::translate("CIhm", "TEST", nullptr));
        lBarriereR->setText(QString());
        lBarriereV->setText(QString());
        lBarriere1->setText(QString());
        lBarriereR2->setText(QString());
        lBarriereV2->setText(QString());
        lBarriere2->setText(QString());
        lineEdit_3->setText(QApplication::translate("CIhm", "Ligne superieure", nullptr));
        lineEdit_4->setText(QApplication::translate("CIhm", "Ligne inferieure", nullptr));
        label_6->setText(QApplication::translate("CIhm", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Afficheur du parking</span></p></body></html>", nullptr));
        pbAfficheur->setText(QApplication::translate("CIhm", "Envoyer", nullptr));
        label_7->setText(QString());
        lVoiture1->setText(QString());
        lVoiture2->setText(QString());
        lVoiture3->setText(QString());
        lVoiture4->setText(QString());
        lVoiture5->setText(QString());
        lVoiture6->setText(QString());
        lVoiture7->setText(QString());
        lVoiture8->setText(QString());
        pbLirePLaces->setText(QApplication::translate("CIhm", "Lire places", nullptr));
        label_4->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#730404;\">~ Gestion de l'intersection ~</span></p></body></html>", nullptr));
        pbAuto->setText(QApplication::translate("CIhm", "Automatique", nullptr));
        pbVert->setText(QApplication::translate("CIhm", "Vert", nullptr));
        pbRouge->setText(QApplication::translate("CIhm", "Rouge", nullptr));
        pbOrange->setText(QApplication::translate("CIhm", "Orange", nullptr));
        pbOC->setText(QApplication::translate("CIhm", "Orange Clignotant", nullptr));
        label_27->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#866b4d;\">Mode Manuel</span></p></body></html>", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("CIhm", "Axe vertical", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("CIhm", "Axe horizontal", nullptr));

        pbEteint->setText(QApplication::translate("CIhm", "\303\211teint", nullptr));
        label_3->setText(QString());
        feux2Vert->setText(QString());
        feuxVert->setText(QString());
        feuxOff->setText(QString());
        feuxRouge->setText(QString());
        feuxOrange->setText(QString());
        feux2Off->setText(QString());
        feux2Rouge->setText(QString());
        feux2Orange->setText(QString());
        pbTestInter->setText(QApplication::translate("CIhm", "TEST Appel Pi\303\251ton", nullptr));
        pbClear_3->setText(QApplication::translate("CIhm", "Effacer", nullptr));
        comLabel3->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\">&gt; <span style=\" font-weight:600;\">Communication avec la maquette </span>&lt;</p></body></html>", nullptr));
        label_26->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#866b4d;\">Mode</span></p></body></html>", nullptr));
        aboLabel->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#550000;\">~ Gestion des Abonn\303\251s ~</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CIhm", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CIhm", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CIhm", "Adresse Carte", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("CIhm", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("CIhm", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("CIhm", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("CIhm", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("CIhm", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("CIhm", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("CIhm", "7", nullptr));
        pbAdd->setText(QApplication::translate("CIhm", "Ajouter", nullptr));
        pbDelete->setText(QApplication::translate("CIhm", "Supprimer", nullptr));
        pbMoins->setText(QApplication::translate("CIhm", "-", nullptr));
        pbPlus->setText(QApplication::translate("CIhm", "+", nullptr));
        labSmartCity->setText(QString());
        cameraLabel->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">Cam\303\251ra</span></p></body></html>", nullptr));
        logoLycee->setText(QString());
        AppelLabel->setText(QApplication::translate("CIhm", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#000000;\">Appel d'Urgence</span></p></body></html>", nullptr));
        lAppelR->setText(QString());
        lAppel->setText(QString());
        pbTestAppel->setText(QApplication::translate("CIhm", "TEST", nullptr));
        comboBox->setItemText(0, QApplication::translate("CIhm", "\303\211clairage", nullptr));
        comboBox->setItemText(1, QApplication::translate("CIhm", "Parking", nullptr));
        comboBox->setItemText(2, QApplication::translate("CIhm", "Intersection", nullptr));
        comboBox->setItemText(3, QApplication::translate("CIhm", "Gestion Abonn\303\251s", nullptr));

        commandLinkButton->setText(QApplication::translate("CIhm", "CommandLinkButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CIhm: public Ui_CIhm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIHM_H
