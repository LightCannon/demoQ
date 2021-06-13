/********************************************************************************
** Form generated from reading UI file 'demoq.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOQ_H
#define UI_DEMOQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustom_titlebar.h"
#include "qloading_pushbutton.h"
#include "qmarked_lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_demoQClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QCustom_titlebar *title_frame;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *icon_label;
    QLabel *title_label;
    QPushButton *title_x;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QMarked_LineEdit *text_email;
    QMarked_LineEdit *text_password;
    QLoading_PushButton *pushButton;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *demoQClass)
    {
        if (demoQClass->objectName().isEmpty())
            demoQClass->setObjectName(QStringLiteral("demoQClass"));
        demoQClass->resize(834, 673);
        demoQClass->setMinimumSize(QSize(834, 612));
        demoQClass->setMaximumSize(QSize(834, 673));
        QIcon icon;
        icon.addFile(QStringLiteral(":/demoQ/Resources/images/mainicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        demoQClass->setWindowIcon(icon);
        demoQClass->setStyleSheet(QLatin1String("background-color: rgb(45, 93, 163);\n"
"\n"
""));
        centralWidget = new QWidget(demoQClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setStyleSheet(QLatin1String("QLineEdit {\n"
"background-color: rgb(23, 69, 136);\n"
"border-color: rgb(49, 98, 170);\n"
"border-width: 2px; \n"
"border-style: solid;\n"
"border-radius: 6px;\n"
"color:white;\n"
"\n"
"}\n"
"QPushButton{\n"
"color: white;\n"
"background-color: rgb(88, 139, 214);\n"
"border-color:  rgb(88, 139, 214);\n"
"border-width: 2px; \n"
"border-style: solid;\n"
"border-radius: 6px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(116, 148, 195);\n"
"border-color: rgb(116, 148, 195);\n"
"}\n"
"\n"
"QLabel#title_label{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QLabel#icon_label{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QFrame#title_frame{\n"
"background-color: rgb(255, 255, 255);\n"
"border-width: 1px 1px 0px 1px; \n"
"border-color: gray;\n"
"border-style: solid;\n"
"}\n"
"QPushButton#title_x\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"border-width: 0px; \n"
"border-radius: 0px;\n"
"color: gray;\n"
"}\n"
"QPushButton#title_x:hover\n"
"{\n"
"background-color: rgb(232, 17, 35);\n"
"b"
                        "order-width: 0px; \n"
"border-radius: 0px;\n"
"color: white;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        title_frame = new QCustom_titlebar(centralWidget);
        title_frame->setObjectName(QStringLiteral("title_frame"));
        sizePolicy.setHeightForWidth(title_frame->sizePolicy().hasHeightForWidth());
        title_frame->setSizePolicy(sizePolicy);
        title_frame->setMinimumSize(QSize(0, 4));
        title_frame->setMaximumSize(QSize(16777215, 35));
        title_frame->setSizeIncrement(QSize(0, 10));
        title_frame->setBaseSize(QSize(0, 0));
        title_frame->setFrameShape(QFrame::NoFrame);
        title_frame->setFrameShadow(QFrame::Plain);
        gridLayout_4 = new QGridLayout(title_frame);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(8, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(7);
        gridLayout_3->setVerticalSpacing(0);
        icon_label = new QLabel(title_frame);
        icon_label->setObjectName(QStringLiteral("icon_label"));
        icon_label->setMinimumSize(QSize(5, 5));
        icon_label->setMaximumSize(QSize(20, 20));
        icon_label->setPixmap(QPixmap(QString::fromUtf8(":/demoQ/Resources/images/mainicon.ico")));
        icon_label->setScaledContents(true);
        icon_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(icon_label, 0, 0, 1, 1);

        title_label = new QLabel(title_frame);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(title_label->sizePolicy().hasHeightForWidth());
        title_label->setSizePolicy(sizePolicy1);
        title_label->setMinimumSize(QSize(0, 30));
        title_label->setMaximumSize(QSize(16777215, 500));
        QFont font;
        font.setPointSize(9);
        title_label->setFont(font);
        title_label->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(title_label, 0, 1, 1, 1);

        title_x = new QPushButton(title_frame);
        title_x->setObjectName(QStringLiteral("title_x"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(title_x->sizePolicy().hasHeightForWidth());
        title_x->setSizePolicy(sizePolicy2);
        title_x->setMinimumSize(QSize(41, 36));
        title_x->setMaximumSize(QSize(41, 36));

        gridLayout_3->addWidget(title_x, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 1, 1);


        verticalLayout_2->addWidget(title_frame);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(32);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(220, 30, 220, 15);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/demoQ/Resources/images/QUWI.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        text_email = new QMarked_LineEdit(centralWidget);
        text_email->setObjectName(QStringLiteral("text_email"));
        text_email->setMinimumSize(QSize(0, 58));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        text_email->setFont(font1);
        text_email->setStyleSheet(QStringLiteral(""));
        text_email->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(text_email);

        text_password = new QMarked_LineEdit(centralWidget);
        text_password->setObjectName(QStringLiteral("text_password"));
        text_password->setMinimumSize(QSize(0, 58));
        text_password->setFont(font1);
        text_password->setEchoMode(QLineEdit::Password);
        text_password->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(text_password);

        pushButton = new QLoading_PushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 58));
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(24);
        label_2->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        demoQClass->setCentralWidget(centralWidget);

        retranslateUi(demoQClass);

        QMetaObject::connectSlotsByName(demoQClass);
    } // setupUi

    void retranslateUi(QMainWindow *demoQClass)
    {
        demoQClass->setWindowTitle(QApplication::translate("demoQClass", "Quwi 0.1.295", Q_NULLPTR));
        icon_label->setText(QString());
        title_label->setText(QApplication::translate("demoQClass", "Quwi 0.1.295", Q_NULLPTR));
        title_x->setText(QApplication::translate("demoQClass", "\342\234\225", Q_NULLPTR));
        label->setText(QString());
        text_email->setPlaceholderText(QString());
        pushButton->setText(QApplication::translate("demoQClass", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("demoQClass", "<html><head/><body><p><a href=\"https://quwi.com/signup\"><span style=\" color:#688fcf;text-decoration:none;\">Don't have an account? Register for free</span></a></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class demoQClass: public Ui_demoQClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOQ_H
