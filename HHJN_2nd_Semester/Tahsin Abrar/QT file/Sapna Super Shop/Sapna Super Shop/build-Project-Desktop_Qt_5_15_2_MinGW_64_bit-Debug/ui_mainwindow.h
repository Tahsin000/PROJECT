/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionExit;
    QAction *actionInfo;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Page_1;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *CREATE_PRODUCT_page;
    QLabel *Creat_P_lab;
    QPushButton *Back_Create_P;
    QLabel *C_P_P_Logo;
    QLineEdit *C_P_product_no;
    QLineEdit *C_P_product_name;
    QLineEdit *C_P_product_price;
    QLineEdit *C_P_product_price_2;
    QPushButton *CREATE_PRODUCT_Update;
    QWidget *Customer_Page;
    QLabel *label_2;
    QPushButton *Customer_Page_back;
    QLabel *label_5;
    QTableView *Customer_Page_table;
    QLineEdit *Customer_Page_product;
    QLineEdit *Customer_Page_quantity;
    QPushButton *Customer_Page_btn;
    QLabel *Pro;
    QLabel *Customer_Page_text_lab_2;
    QPushButton *Customer_Page_payment;
    QWidget *DISPLAY_ALL_PRODUCTS_page;
    QPushButton *DISPLAY_A_P_back;
    QLabel *DISPLAY_A_P_Title;
    QLabel *LOGO;
    QTreeView *DISPLAY_A_P_table;
    QWidget *Administrator_Page;
    QLabel *Admni_title;
    QPushButton *CREATE_PRODUCT;
    QPushButton *DISPLAY_ALL_PRODUCTS;
    QPushButton *MODIFY_PRODUCT;
    QPushButton *DELETE_PRODUCT;
    QPushButton *Back_admin;
    QLabel *Admni_Logo;
    QPushButton *CUSTOMER_INFO_btn;
    QWidget *Login;
    QLabel *ADMINISTRATOR_title;
    QPushButton *ADMINISTRATOR_back;
    QLineEdit *ADMINISTRATOR_password;
    QPushButton *ADMINISTRATOR_btn;
    QLineEdit *ADMINISTRATOR_username;
    QLabel *Admni_Logo_2;
    QWidget *MODIFY_P_page;
    QLabel *MODIFY_P_page_Title;
    QPushButton *MODIFY_P_page_back;
    QLabel *label_10;
    QLineEdit *MODIFY_P_page_input_discount;
    QLineEdit *MODIFY_P_page_input_price;
    QLineEdit *MODIFY_P_page_input_no;
    QPushButton *MODIFY_P_page_btn;
    QTableView *MODIFY_P_page_table;
    QWidget *DELETE_P_page;
    QLabel *DELETE_P_page_title;
    QPushButton *DELETE_P_page_back;
    QLabel *DELETE_P_page_title_LOGO;
    QPushButton *DELETE_P_page_btn;
    QLineEdit *DELETE_P_page_P_No;
    QTableView *DELETE_P_page_table;
    QWidget *PAMENY;
    QPushButton *PAMENY_page_back;
    QLabel *PAMENY_page_Title;
    QTableView *PAMENY_page_table;
    QLineEdit *PAMENY_page_mobile;
    QPushButton *PAMENY_page_btn;
    QLabel *PAMENY_page_total_input;
    QLabel *PAMENY_page_total;
    QLineEdit *PAMENY_page_name;
    QLabel *DELETE_P_page_title_LOGO_2;
    QWidget *Cash_memo;
    QLabel *Cash_memo_title;
    QPushButton *Cash_memo_back_exit_btn;
    QLabel *Cash_memo_Congratulation;
    QLabel *DELETE_P_page_title_LOGO_3;
    QWidget *CUSTOMER_INFO;
    QPushButton *CUSTOMER_INFO_2;
    QLabel *CUSTOMER_INFO_title;
    QLabel *CUSTOMER_INFO_logo;
    QTreeView *CUSTOMER_INFO_table;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -20, 800, 600));
        Page_1 = new QWidget();
        Page_1->setObjectName(QString::fromUtf8("Page_1"));
        Page_1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        label = new QLabel(Page_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 50, 211, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Fugaz One"));
        font.setPointSize(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Page_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 250, 311, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Fugaz One"));
        font1.setPointSize(25);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#pushButton {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 30px;\n"
" }\n"
"\n"
"\n"
" QPushButton#pushButton:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#pushButton:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 30px;\n"
"	transition: 2s;\n"
" }\n"
""));
        pushButton_2 = new QPushButton(Page_1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 350, 311, 61));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#pushButton_2 {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 30px;\n"
" }\n"
"\n"
"\n"
" QPushButton#pushButton_2:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#pushButton_2:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 30px;\n"
"	transition: 2s;\n"
" }\n"
""));
        pushButton_3 = new QPushButton(Page_1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 440, 311, 61));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#pushButton_3 {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 30px;\n"
" }\n"
"\n"
"\n"
" QPushButton#pushButton_3:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#pushButton_3:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 30px;\n"
"	transition: 2s;\n"
" }\n"
""));
        stackedWidget->addWidget(Page_1);
        CREATE_PRODUCT_page = new QWidget();
        CREATE_PRODUCT_page->setObjectName(QString::fromUtf8("CREATE_PRODUCT_page"));
        CREATE_PRODUCT_page->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        Creat_P_lab = new QLabel(CREATE_PRODUCT_page);
        Creat_P_lab->setObjectName(QString::fromUtf8("Creat_P_lab"));
        Creat_P_lab->setGeometry(QRect(240, 70, 311, 121));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Fugaz One"));
        font2.setPointSize(25);
        Creat_P_lab->setFont(font2);
        Creat_P_lab->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        Creat_P_lab->setAlignment(Qt::AlignCenter);
        Back_Create_P = new QPushButton(CREATE_PRODUCT_page);
        Back_Create_P->setObjectName(QString::fromUtf8("Back_Create_P"));
        Back_Create_P->setGeometry(QRect(30, 40, 90, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Fugaz One"));
        font3.setPointSize(15);
        Back_Create_P->setFont(font3);
        Back_Create_P->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Back_Create_P {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#Back_Create_P:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#Back_Create_P:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        C_P_P_Logo = new QLabel(CREATE_PRODUCT_page);
        C_P_P_Logo->setObjectName(QString::fromUtf8("C_P_P_Logo"));
        C_P_P_Logo->setGeometry(QRect(670, 30, 121, 71));
        C_P_P_Logo->setFont(font);
        C_P_P_Logo->setStyleSheet(QString::fromUtf8(""));
        C_P_P_Logo->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        C_P_P_Logo->setScaledContents(true);
        C_P_P_Logo->setAlignment(Qt::AlignCenter);
        C_P_product_no = new QLineEdit(CREATE_PRODUCT_page);
        C_P_product_no->setObjectName(QString::fromUtf8("C_P_product_no"));
        C_P_product_no->setGeometry(QRect(240, 220, 311, 41));
        QFont font4;
        font4.setPointSize(10);
        C_P_product_no->setFont(font4);
        C_P_product_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        C_P_product_name = new QLineEdit(CREATE_PRODUCT_page);
        C_P_product_name->setObjectName(QString::fromUtf8("C_P_product_name"));
        C_P_product_name->setGeometry(QRect(240, 280, 311, 41));
        C_P_product_name->setFont(font4);
        C_P_product_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        C_P_product_name->setPlaceholderText(QString::fromUtf8("Product Name"));
        C_P_product_price = new QLineEdit(CREATE_PRODUCT_page);
        C_P_product_price->setObjectName(QString::fromUtf8("C_P_product_price"));
        C_P_product_price->setGeometry(QRect(240, 340, 311, 41));
        C_P_product_price->setFont(font4);
        C_P_product_price->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        C_P_product_price->setPlaceholderText(QString::fromUtf8("Product Price"));
        C_P_product_price_2 = new QLineEdit(CREATE_PRODUCT_page);
        C_P_product_price_2->setObjectName(QString::fromUtf8("C_P_product_price_2"));
        C_P_product_price_2->setGeometry(QRect(240, 400, 311, 41));
        C_P_product_price_2->setFont(font4);
        C_P_product_price_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        C_P_product_price_2->setPlaceholderText(QString::fromUtf8("Product Discount"));
        CREATE_PRODUCT_Update = new QPushButton(CREATE_PRODUCT_page);
        CREATE_PRODUCT_Update->setObjectName(QString::fromUtf8("CREATE_PRODUCT_Update"));
        CREATE_PRODUCT_Update->setGeometry(QRect(240, 470, 311, 51));
        CREATE_PRODUCT_Update->setFont(font3);
        CREATE_PRODUCT_Update->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#CREATE_PRODUCT_Update {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#CREATE_PRODUCT_Update:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#CREATE_PRODUCT_Update:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        stackedWidget->addWidget(CREATE_PRODUCT_page);
        Customer_Page = new QWidget();
        Customer_Page->setObjectName(QString::fromUtf8("Customer_Page"));
        Customer_Page->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        label_2 = new QLabel(Customer_Page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 70, 311, 121));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Fugaz One"));
        font5.setPointSize(30);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        label_2->setAlignment(Qt::AlignCenter);
        Customer_Page_back = new QPushButton(Customer_Page);
        Customer_Page_back->setObjectName(QString::fromUtf8("Customer_Page_back"));
        Customer_Page_back->setGeometry(QRect(30, 40, 90, 41));
        Customer_Page_back->setFont(font3);
        Customer_Page_back->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Customer_Page_back {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#Customer_Page_back:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#Customer_Page_back:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        label_5 = new QLabel(Customer_Page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(670, 30, 121, 71));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);
        Customer_Page_table = new QTableView(Customer_Page);
        Customer_Page_table->setObjectName(QString::fromUtf8("Customer_Page_table"));
        Customer_Page_table->setGeometry(QRect(50, 220, 451, 331));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        Customer_Page_table->setFont(font6);
        Customer_Page_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Customer_Page_product = new QLineEdit(Customer_Page);
        Customer_Page_product->setObjectName(QString::fromUtf8("Customer_Page_product"));
        Customer_Page_product->setGeometry(QRect(570, 300, 201, 41));
        Customer_Page_product->setFont(font4);
        Customer_Page_product->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        Customer_Page_quantity = new QLineEdit(Customer_Page);
        Customer_Page_quantity->setObjectName(QString::fromUtf8("Customer_Page_quantity"));
        Customer_Page_quantity->setGeometry(QRect(570, 380, 201, 41));
        Customer_Page_quantity->setFont(font4);
        Customer_Page_quantity->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        Customer_Page_quantity->setPlaceholderText(QString::fromUtf8("Product Quantity"));
        Customer_Page_btn = new QPushButton(Customer_Page);
        Customer_Page_btn->setObjectName(QString::fromUtf8("Customer_Page_btn"));
        Customer_Page_btn->setGeometry(QRect(570, 490, 91, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Fugaz One"));
        font7.setPointSize(8);
        Customer_Page_btn->setFont(font7);
        Customer_Page_btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Customer_Page_btn {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#Customer_Page_btn:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#Customer_Page_btn:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
"\n"
"\n"
"DISPLAY_ALL_PRODUCTS"));
        Pro = new QLabel(Customer_Page);
        Pro->setObjectName(QString::fromUtf8("Pro"));
        Pro->setGeometry(QRect(720, 230, 51, 31));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Fugaz One"));
        font8.setPointSize(12);
        Pro->setFont(font8);
        Pro->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 5px;"));
        Customer_Page_text_lab_2 = new QLabel(Customer_Page);
        Customer_Page_text_lab_2->setObjectName(QString::fromUtf8("Customer_Page_text_lab_2"));
        Customer_Page_text_lab_2->setGeometry(QRect(640, 230, 71, 31));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Fugaz One"));
        font9.setPointSize(10);
        Customer_Page_text_lab_2->setFont(font9);
        Customer_Page_text_lab_2->setLayoutDirection(Qt::LeftToRight);
        Customer_Page_text_lab_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        Customer_Page_text_lab_2->setAlignment(Qt::AlignCenter);
        Customer_Page_payment = new QPushButton(Customer_Page);
        Customer_Page_payment->setObjectName(QString::fromUtf8("Customer_Page_payment"));
        Customer_Page_payment->setGeometry(QRect(680, 490, 91, 41));
        Customer_Page_payment->setFont(font7);
        Customer_Page_payment->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Customer_Page_payment {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#Customer_Page_payment:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#Customer_Page_payment:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
"\n"
"\n"
"DISPLAY_ALL_PRODUCTS"));
        stackedWidget->addWidget(Customer_Page);
        DISPLAY_ALL_PRODUCTS_page = new QWidget();
        DISPLAY_ALL_PRODUCTS_page->setObjectName(QString::fromUtf8("DISPLAY_ALL_PRODUCTS_page"));
        DISPLAY_ALL_PRODUCTS_page->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        DISPLAY_A_P_back = new QPushButton(DISPLAY_ALL_PRODUCTS_page);
        DISPLAY_A_P_back->setObjectName(QString::fromUtf8("DISPLAY_A_P_back"));
        DISPLAY_A_P_back->setGeometry(QRect(30, 40, 90, 41));
        DISPLAY_A_P_back->setFont(font3);
        DISPLAY_A_P_back->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#DISPLAY_A_P_back {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#DISPLAY_A_P_bsck:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#DISPLAY_A_P_back:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        DISPLAY_A_P_Title = new QLabel(DISPLAY_ALL_PRODUCTS_page);
        DISPLAY_A_P_Title->setObjectName(QString::fromUtf8("DISPLAY_A_P_Title"));
        DISPLAY_A_P_Title->setGeometry(QRect(240, 70, 311, 121));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Fugaz One"));
        font10.setPointSize(18);
        DISPLAY_A_P_Title->setFont(font10);
        DISPLAY_A_P_Title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        DISPLAY_A_P_Title->setAlignment(Qt::AlignCenter);
        LOGO = new QLabel(DISPLAY_ALL_PRODUCTS_page);
        LOGO->setObjectName(QString::fromUtf8("LOGO"));
        LOGO->setGeometry(QRect(670, 30, 121, 71));
        LOGO->setFont(font);
        LOGO->setStyleSheet(QString::fromUtf8(""));
        LOGO->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        LOGO->setScaledContents(true);
        LOGO->setAlignment(Qt::AlignCenter);
        DISPLAY_A_P_table = new QTreeView(DISPLAY_ALL_PRODUCTS_page);
        DISPLAY_A_P_table->setObjectName(QString::fromUtf8("DISPLAY_A_P_table"));
        DISPLAY_A_P_table->setGeometry(QRect(180, 230, 431, 311));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Segoe UI"));
        font11.setPointSize(10);
        font11.setBold(true);
        font11.setWeight(75);
        DISPLAY_A_P_table->setFont(font11);
        DISPLAY_A_P_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        stackedWidget->addWidget(DISPLAY_ALL_PRODUCTS_page);
        Administrator_Page = new QWidget();
        Administrator_Page->setObjectName(QString::fromUtf8("Administrator_Page"));
        Administrator_Page->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        Admni_title = new QLabel(Administrator_Page);
        Admni_title->setObjectName(QString::fromUtf8("Admni_title"));
        Admni_title->setGeometry(QRect(240, 70, 311, 121));
        Admni_title->setFont(font2);
        Admni_title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        Admni_title->setAlignment(Qt::AlignCenter);
        CREATE_PRODUCT = new QPushButton(Administrator_Page);
        CREATE_PRODUCT->setObjectName(QString::fromUtf8("CREATE_PRODUCT"));
        CREATE_PRODUCT->setGeometry(QRect(240, 240, 311, 41));
        CREATE_PRODUCT->setFont(font3);
        CREATE_PRODUCT->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#CREATE_PRODUCT {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#CREATE_PRODUCT:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#CREATE_PRODUCT:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        DISPLAY_ALL_PRODUCTS = new QPushButton(Administrator_Page);
        DISPLAY_ALL_PRODUCTS->setObjectName(QString::fromUtf8("DISPLAY_ALL_PRODUCTS"));
        DISPLAY_ALL_PRODUCTS->setGeometry(QRect(240, 300, 311, 41));
        DISPLAY_ALL_PRODUCTS->setFont(font3);
        DISPLAY_ALL_PRODUCTS->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#DISPLAY_ALL_PRODUCTS {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#DISPLAY_ALL_PRODUCTS:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#DISPLAY_ALL_PRODUCTS:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
"\n"
"\n"
"DISPLAY_ALL_PRODUCTS"));
        MODIFY_PRODUCT = new QPushButton(Administrator_Page);
        MODIFY_PRODUCT->setObjectName(QString::fromUtf8("MODIFY_PRODUCT"));
        MODIFY_PRODUCT->setGeometry(QRect(240, 360, 311, 41));
        MODIFY_PRODUCT->setFont(font3);
        MODIFY_PRODUCT->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#MODIFY_PRODUCT {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#MODIFY_PRODUCT:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#MODIFY_PRODUCT:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        DELETE_PRODUCT = new QPushButton(Administrator_Page);
        DELETE_PRODUCT->setObjectName(QString::fromUtf8("DELETE_PRODUCT"));
        DELETE_PRODUCT->setGeometry(QRect(240, 420, 311, 41));
        DELETE_PRODUCT->setFont(font3);
        DELETE_PRODUCT->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#DELETE_PRODUCT {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#DELETE_PRODUCT:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#DELETE_PRODUCT:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        Back_admin = new QPushButton(Administrator_Page);
        Back_admin->setObjectName(QString::fromUtf8("Back_admin"));
        Back_admin->setGeometry(QRect(30, 40, 90, 41));
        Back_admin->setFont(font3);
        Back_admin->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Back_admin {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#Back_admin:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#Back_admin:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        Admni_Logo = new QLabel(Administrator_Page);
        Admni_Logo->setObjectName(QString::fromUtf8("Admni_Logo"));
        Admni_Logo->setGeometry(QRect(670, 30, 121, 71));
        Admni_Logo->setFont(font);
        Admni_Logo->setStyleSheet(QString::fromUtf8(""));
        Admni_Logo->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        Admni_Logo->setScaledContents(true);
        Admni_Logo->setAlignment(Qt::AlignCenter);
        CUSTOMER_INFO_btn = new QPushButton(Administrator_Page);
        CUSTOMER_INFO_btn->setObjectName(QString::fromUtf8("CUSTOMER_INFO_btn"));
        CUSTOMER_INFO_btn->setGeometry(QRect(240, 480, 311, 41));
        CUSTOMER_INFO_btn->setFont(font3);
        CUSTOMER_INFO_btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#CUSTOMER_INFO_btn {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#CUSTOMER_INFO_btn:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#CUSTOMER_INFO_btn:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        stackedWidget->addWidget(Administrator_Page);
        Login = new QWidget();
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        ADMINISTRATOR_title = new QLabel(Login);
        ADMINISTRATOR_title->setObjectName(QString::fromUtf8("ADMINISTRATOR_title"));
        ADMINISTRATOR_title->setGeometry(QRect(240, 70, 311, 121));
        ADMINISTRATOR_title->setFont(font2);
        ADMINISTRATOR_title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        ADMINISTRATOR_title->setAlignment(Qt::AlignCenter);
        ADMINISTRATOR_back = new QPushButton(Login);
        ADMINISTRATOR_back->setObjectName(QString::fromUtf8("ADMINISTRATOR_back"));
        ADMINISTRATOR_back->setGeometry(QRect(30, 40, 90, 41));
        ADMINISTRATOR_back->setFont(font3);
        ADMINISTRATOR_back->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#ADMINISTRATOR_back {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#ADMINISTRATOR_back:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#ADMINISTRATOR_back:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        ADMINISTRATOR_password = new QLineEdit(Login);
        ADMINISTRATOR_password->setObjectName(QString::fromUtf8("ADMINISTRATOR_password"));
        ADMINISTRATOR_password->setGeometry(QRect(240, 340, 311, 51));
        ADMINISTRATOR_password->setFont(font4);
        ADMINISTRATOR_password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        ADMINISTRATOR_password->setEchoMode(QLineEdit::Password);
        ADMINISTRATOR_btn = new QPushButton(Login);
        ADMINISTRATOR_btn->setObjectName(QString::fromUtf8("ADMINISTRATOR_btn"));
        ADMINISTRATOR_btn->setGeometry(QRect(240, 440, 131, 41));
        ADMINISTRATOR_btn->setFont(font3);
        ADMINISTRATOR_btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#ADMINISTRATOR_btn {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#ADMINISTRATOR_btn:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#ADMINISTRATOR_btn:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        ADMINISTRATOR_username = new QLineEdit(Login);
        ADMINISTRATOR_username->setObjectName(QString::fromUtf8("ADMINISTRATOR_username"));
        ADMINISTRATOR_username->setGeometry(QRect(240, 250, 311, 51));
        ADMINISTRATOR_username->setFont(font4);
        ADMINISTRATOR_username->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        Admni_Logo_2 = new QLabel(Login);
        Admni_Logo_2->setObjectName(QString::fromUtf8("Admni_Logo_2"));
        Admni_Logo_2->setGeometry(QRect(670, 30, 121, 71));
        Admni_Logo_2->setFont(font);
        Admni_Logo_2->setStyleSheet(QString::fromUtf8(""));
        Admni_Logo_2->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        Admni_Logo_2->setScaledContents(true);
        Admni_Logo_2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(Login);
        MODIFY_P_page = new QWidget();
        MODIFY_P_page->setObjectName(QString::fromUtf8("MODIFY_P_page"));
        MODIFY_P_page->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        MODIFY_P_page_Title = new QLabel(MODIFY_P_page);
        MODIFY_P_page_Title->setObjectName(QString::fromUtf8("MODIFY_P_page_Title"));
        MODIFY_P_page_Title->setGeometry(QRect(240, 70, 311, 121));
        MODIFY_P_page_Title->setFont(font10);
        MODIFY_P_page_Title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        MODIFY_P_page_Title->setAlignment(Qt::AlignCenter);
        MODIFY_P_page_back = new QPushButton(MODIFY_P_page);
        MODIFY_P_page_back->setObjectName(QString::fromUtf8("MODIFY_P_page_back"));
        MODIFY_P_page_back->setGeometry(QRect(30, 40, 90, 41));
        MODIFY_P_page_back->setFont(font3);
        MODIFY_P_page_back->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#MODIFY_P_page_back {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#MODIFY_P_page_back:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#MODIFY_P_page_back:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        label_10 = new QLabel(MODIFY_P_page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(670, 30, 121, 71));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8(""));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        label_10->setScaledContents(true);
        label_10->setAlignment(Qt::AlignCenter);
        MODIFY_P_page_input_discount = new QLineEdit(MODIFY_P_page);
        MODIFY_P_page_input_discount->setObjectName(QString::fromUtf8("MODIFY_P_page_input_discount"));
        MODIFY_P_page_input_discount->setGeometry(QRect(40, 390, 151, 41));
        MODIFY_P_page_input_discount->setFont(font4);
        MODIFY_P_page_input_discount->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        MODIFY_P_page_input_discount->setPlaceholderText(QString::fromUtf8("Product Discount"));
        MODIFY_P_page_input_price = new QLineEdit(MODIFY_P_page);
        MODIFY_P_page_input_price->setObjectName(QString::fromUtf8("MODIFY_P_page_input_price"));
        MODIFY_P_page_input_price->setGeometry(QRect(40, 340, 151, 41));
        MODIFY_P_page_input_price->setFont(font4);
        MODIFY_P_page_input_price->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        MODIFY_P_page_input_price->setPlaceholderText(QString::fromUtf8("Product Price"));
        MODIFY_P_page_input_no = new QLineEdit(MODIFY_P_page);
        MODIFY_P_page_input_no->setObjectName(QString::fromUtf8("MODIFY_P_page_input_no"));
        MODIFY_P_page_input_no->setGeometry(QRect(40, 240, 151, 41));
        MODIFY_P_page_input_no->setFont(font4);
        MODIFY_P_page_input_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        MODIFY_P_page_btn = new QPushButton(MODIFY_P_page);
        MODIFY_P_page_btn->setObjectName(QString::fromUtf8("MODIFY_P_page_btn"));
        MODIFY_P_page_btn->setGeometry(QRect(40, 460, 91, 41));
        MODIFY_P_page_btn->setFont(font8);
        MODIFY_P_page_btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#MODIFY_P_page_btn {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#MODIFY_P_page_btn:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#MODIFY_P_page_btn:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        MODIFY_P_page_table = new QTableView(MODIFY_P_page);
        MODIFY_P_page_table->setObjectName(QString::fromUtf8("MODIFY_P_page_table"));
        MODIFY_P_page_table->setGeometry(QRect(350, 270, 411, 271));
        MODIFY_P_page_table->setFont(font6);
        MODIFY_P_page_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        stackedWidget->addWidget(MODIFY_P_page);
        DELETE_P_page = new QWidget();
        DELETE_P_page->setObjectName(QString::fromUtf8("DELETE_P_page"));
        DELETE_P_page->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        DELETE_P_page_title = new QLabel(DELETE_P_page);
        DELETE_P_page_title->setObjectName(QString::fromUtf8("DELETE_P_page_title"));
        DELETE_P_page_title->setGeometry(QRect(240, 70, 311, 121));
        DELETE_P_page_title->setFont(font10);
        DELETE_P_page_title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        DELETE_P_page_title->setAlignment(Qt::AlignCenter);
        DELETE_P_page_back = new QPushButton(DELETE_P_page);
        DELETE_P_page_back->setObjectName(QString::fromUtf8("DELETE_P_page_back"));
        DELETE_P_page_back->setGeometry(QRect(30, 40, 90, 41));
        DELETE_P_page_back->setFont(font3);
        DELETE_P_page_back->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#DELETE_P_page_back {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#DELETE_P_page_back:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#DELETE_P_page_back:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        DELETE_P_page_title_LOGO = new QLabel(DELETE_P_page);
        DELETE_P_page_title_LOGO->setObjectName(QString::fromUtf8("DELETE_P_page_title_LOGO"));
        DELETE_P_page_title_LOGO->setGeometry(QRect(670, 30, 121, 71));
        DELETE_P_page_title_LOGO->setFont(font);
        DELETE_P_page_title_LOGO->setStyleSheet(QString::fromUtf8(""));
        DELETE_P_page_title_LOGO->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        DELETE_P_page_title_LOGO->setScaledContents(true);
        DELETE_P_page_title_LOGO->setAlignment(Qt::AlignCenter);
        DELETE_P_page_btn = new QPushButton(DELETE_P_page);
        DELETE_P_page_btn->setObjectName(QString::fromUtf8("DELETE_P_page_btn"));
        DELETE_P_page_btn->setGeometry(QRect(50, 370, 131, 41));
        DELETE_P_page_btn->setFont(font3);
        DELETE_P_page_btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#DELETE_P_page_btn {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#DELETE_P_page_btn:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#DELETE_P_page_btn:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        DELETE_P_page_P_No = new QLineEdit(DELETE_P_page);
        DELETE_P_page_P_No->setObjectName(QString::fromUtf8("DELETE_P_page_P_No"));
        DELETE_P_page_P_No->setGeometry(QRect(50, 280, 251, 51));
        DELETE_P_page_P_No->setFont(font4);
        DELETE_P_page_P_No->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        DELETE_P_page_table = new QTableView(DELETE_P_page);
        DELETE_P_page_table->setObjectName(QString::fromUtf8("DELETE_P_page_table"));
        DELETE_P_page_table->setGeometry(QRect(350, 270, 411, 271));
        QFont font12;
        font12.setPointSize(10);
        font12.setBold(true);
        font12.setItalic(false);
        font12.setWeight(75);
        DELETE_P_page_table->setFont(font12);
        DELETE_P_page_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        stackedWidget->addWidget(DELETE_P_page);
        PAMENY = new QWidget();
        PAMENY->setObjectName(QString::fromUtf8("PAMENY"));
        PAMENY->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        PAMENY_page_back = new QPushButton(PAMENY);
        PAMENY_page_back->setObjectName(QString::fromUtf8("PAMENY_page_back"));
        PAMENY_page_back->setGeometry(QRect(30, 40, 90, 41));
        PAMENY_page_back->setFont(font3);
        PAMENY_page_back->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#PAMENY_page_back {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#PAMENY_page_back:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#PAMENY_page_back:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        PAMENY_page_Title = new QLabel(PAMENY);
        PAMENY_page_Title->setObjectName(QString::fromUtf8("PAMENY_page_Title"));
        PAMENY_page_Title->setGeometry(QRect(240, 70, 311, 121));
        PAMENY_page_Title->setFont(font10);
        PAMENY_page_Title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        PAMENY_page_Title->setAlignment(Qt::AlignCenter);
        PAMENY_page_table = new QTableView(PAMENY);
        PAMENY_page_table->setObjectName(QString::fromUtf8("PAMENY_page_table"));
        PAMENY_page_table->setGeometry(QRect(60, 210, 691, 171));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Segoe UI"));
        font13.setPointSize(12);
        font13.setBold(true);
        font13.setWeight(75);
        PAMENY_page_table->setFont(font13);
        PAMENY_page_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        PAMENY_page_mobile = new QLineEdit(PAMENY);
        PAMENY_page_mobile->setObjectName(QString::fromUtf8("PAMENY_page_mobile"));
        PAMENY_page_mobile->setGeometry(QRect(60, 460, 311, 41));
        PAMENY_page_mobile->setFont(font4);
        PAMENY_page_mobile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        PAMENY_page_btn = new QPushButton(PAMENY);
        PAMENY_page_btn->setObjectName(QString::fromUtf8("PAMENY_page_btn"));
        PAMENY_page_btn->setGeometry(QRect(60, 520, 211, 41));
        PAMENY_page_btn->setFont(font3);
        PAMENY_page_btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#PAMENY_page_btn {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#PAMENY_page_btn:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#PAMENY_page_btn:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        PAMENY_page_total_input = new QLabel(PAMENY);
        PAMENY_page_total_input->setObjectName(QString::fromUtf8("PAMENY_page_total_input"));
        PAMENY_page_total_input->setGeometry(QRect(610, 440, 141, 31));
        PAMENY_page_total_input->setFont(font8);
        PAMENY_page_total_input->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 5px;"));
        PAMENY_page_total = new QLabel(PAMENY);
        PAMENY_page_total->setObjectName(QString::fromUtf8("PAMENY_page_total"));
        PAMENY_page_total->setGeometry(QRect(530, 440, 71, 31));
        PAMENY_page_total->setFont(font9);
        PAMENY_page_total->setLayoutDirection(Qt::LeftToRight);
        PAMENY_page_total->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        PAMENY_page_total->setAlignment(Qt::AlignCenter);
        PAMENY_page_name = new QLineEdit(PAMENY);
        PAMENY_page_name->setObjectName(QString::fromUtf8("PAMENY_page_name"));
        PAMENY_page_name->setGeometry(QRect(60, 400, 311, 41));
        PAMENY_page_name->setFont(font4);
        PAMENY_page_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        DELETE_P_page_title_LOGO_2 = new QLabel(PAMENY);
        DELETE_P_page_title_LOGO_2->setObjectName(QString::fromUtf8("DELETE_P_page_title_LOGO_2"));
        DELETE_P_page_title_LOGO_2->setGeometry(QRect(670, 30, 121, 71));
        DELETE_P_page_title_LOGO_2->setFont(font);
        DELETE_P_page_title_LOGO_2->setStyleSheet(QString::fromUtf8(""));
        DELETE_P_page_title_LOGO_2->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        DELETE_P_page_title_LOGO_2->setScaledContents(true);
        DELETE_P_page_title_LOGO_2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(PAMENY);
        Cash_memo = new QWidget();
        Cash_memo->setObjectName(QString::fromUtf8("Cash_memo"));
        Cash_memo->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        Cash_memo_title = new QLabel(Cash_memo);
        Cash_memo_title->setObjectName(QString::fromUtf8("Cash_memo_title"));
        Cash_memo_title->setGeometry(QRect(240, 70, 311, 121));
        Cash_memo_title->setFont(font10);
        Cash_memo_title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        Cash_memo_title->setAlignment(Qt::AlignCenter);
        Cash_memo_back_exit_btn = new QPushButton(Cash_memo);
        Cash_memo_back_exit_btn->setObjectName(QString::fromUtf8("Cash_memo_back_exit_btn"));
        Cash_memo_back_exit_btn->setGeometry(QRect(360, 370, 90, 41));
        Cash_memo_back_exit_btn->setFont(font3);
        Cash_memo_back_exit_btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Cash_memo_back_exit_btn {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#Cash_memo_back_exit_btn:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#Cash_memo_back_exit_btn:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        Cash_memo_Congratulation = new QLabel(Cash_memo);
        Cash_memo_Congratulation->setObjectName(QString::fromUtf8("Cash_memo_Congratulation"));
        Cash_memo_Congratulation->setGeometry(QRect(100, 220, 561, 121));
        QFont font14;
        font14.setFamily(QString::fromUtf8("Segoe UI"));
        font14.setPointSize(13);
        font14.setBold(true);
        font14.setItalic(false);
        font14.setWeight(75);
        Cash_memo_Congratulation->setFont(font14);
        Cash_memo_Congratulation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        Cash_memo_Congratulation->setAlignment(Qt::AlignCenter);
        DELETE_P_page_title_LOGO_3 = new QLabel(Cash_memo);
        DELETE_P_page_title_LOGO_3->setObjectName(QString::fromUtf8("DELETE_P_page_title_LOGO_3"));
        DELETE_P_page_title_LOGO_3->setGeometry(QRect(670, 30, 121, 71));
        DELETE_P_page_title_LOGO_3->setFont(font);
        DELETE_P_page_title_LOGO_3->setStyleSheet(QString::fromUtf8(""));
        DELETE_P_page_title_LOGO_3->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        DELETE_P_page_title_LOGO_3->setScaledContents(true);
        DELETE_P_page_title_LOGO_3->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(Cash_memo);
        CUSTOMER_INFO = new QWidget();
        CUSTOMER_INFO->setObjectName(QString::fromUtf8("CUSTOMER_INFO"));
        CUSTOMER_INFO->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(67, 205, 103, 255), stop:1 rgba(57, 171, 122, 255));"));
        CUSTOMER_INFO_2 = new QPushButton(CUSTOMER_INFO);
        CUSTOMER_INFO_2->setObjectName(QString::fromUtf8("CUSTOMER_INFO_2"));
        CUSTOMER_INFO_2->setGeometry(QRect(30, 40, 90, 41));
        QFont font15;
        font15.setFamily(QString::fromUtf8("Fugaz One"));
        font15.setPointSize(15);
        font15.setBold(false);
        font15.setWeight(50);
        CUSTOMER_INFO_2->setFont(font15);
        CUSTOMER_INFO_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#CUSTOMER_INFO_2 {\n"
"     background-color:  rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
" }\n"
"\n"
"\n"
" QPushButton#CUSTOMER_INFO_2:pressed {\n"
"     background-color:  rgb(169,169,169) ; \n"
"	color:rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 5px;\n"
"	border-radius: 30px;\n"
" }\n"
" QPushButton#CUSTOMER_INFO_2:hover {\n"
"     background-color: rgb(211,211,211);\n"
"	color: rgb(0, 0, 0);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 20px;\n"
"	transition: 2s;\n"
" }\n"
""));
        CUSTOMER_INFO_title = new QLabel(CUSTOMER_INFO);
        CUSTOMER_INFO_title->setObjectName(QString::fromUtf8("CUSTOMER_INFO_title"));
        CUSTOMER_INFO_title->setGeometry(QRect(240, 70, 311, 121));
        CUSTOMER_INFO_title->setFont(font10);
        CUSTOMER_INFO_title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        CUSTOMER_INFO_title->setAlignment(Qt::AlignCenter);
        CUSTOMER_INFO_logo = new QLabel(CUSTOMER_INFO);
        CUSTOMER_INFO_logo->setObjectName(QString::fromUtf8("CUSTOMER_INFO_logo"));
        CUSTOMER_INFO_logo->setGeometry(QRect(660, 40, 121, 71));
        CUSTOMER_INFO_logo->setFont(font);
        CUSTOMER_INFO_logo->setStyleSheet(QString::fromUtf8(""));
        CUSTOMER_INFO_logo->setPixmap(QPixmap(QString::fromUtf8(":/Resource/IMG/LOGO.png")));
        CUSTOMER_INFO_logo->setScaledContents(true);
        CUSTOMER_INFO_logo->setAlignment(Qt::AlignCenter);
        CUSTOMER_INFO_table = new QTreeView(CUSTOMER_INFO);
        CUSTOMER_INFO_table->setObjectName(QString::fromUtf8("CUSTOMER_INFO_table"));
        CUSTOMER_INFO_table->setGeometry(QRect(170, 220, 431, 311));
        CUSTOMER_INFO_table->setFont(font11);
        CUSTOMER_INFO_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        stackedWidget->addWidget(CUSTOMER_INFO);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(Customer_Page_product, Customer_Page_quantity);
        QWidget::setTabOrder(Customer_Page_quantity, Customer_Page_btn);
        QWidget::setTabOrder(Customer_Page_btn, Customer_Page_payment);
        QWidget::setTabOrder(Customer_Page_payment, Customer_Page_back);
        QWidget::setTabOrder(Customer_Page_back, Customer_Page_table);
        QWidget::setTabOrder(Customer_Page_table, CREATE_PRODUCT);
        QWidget::setTabOrder(CREATE_PRODUCT, DISPLAY_ALL_PRODUCTS);
        QWidget::setTabOrder(DISPLAY_ALL_PRODUCTS, MODIFY_PRODUCT);
        QWidget::setTabOrder(MODIFY_PRODUCT, DELETE_PRODUCT);
        QWidget::setTabOrder(DELETE_PRODUCT, CUSTOMER_INFO_btn);
        QWidget::setTabOrder(CUSTOMER_INFO_btn, Back_admin);
        QWidget::setTabOrder(Back_admin, ADMINISTRATOR_username);
        QWidget::setTabOrder(ADMINISTRATOR_username, ADMINISTRATOR_password);
        QWidget::setTabOrder(ADMINISTRATOR_password, ADMINISTRATOR_btn);
        QWidget::setTabOrder(ADMINISTRATOR_btn, ADMINISTRATOR_back);
        QWidget::setTabOrder(ADMINISTRATOR_back, MODIFY_P_page_input_no);
        QWidget::setTabOrder(MODIFY_P_page_input_no, MODIFY_P_page_input_price);
        QWidget::setTabOrder(MODIFY_P_page_input_price, MODIFY_P_page_input_discount);
        QWidget::setTabOrder(MODIFY_P_page_input_discount, MODIFY_P_page_btn);
        QWidget::setTabOrder(MODIFY_P_page_btn, MODIFY_P_page_back);
        QWidget::setTabOrder(MODIFY_P_page_back, MODIFY_P_page_table);
        QWidget::setTabOrder(MODIFY_P_page_table, DELETE_P_page_P_No);
        QWidget::setTabOrder(DELETE_P_page_P_No, DELETE_P_page_btn);
        QWidget::setTabOrder(DELETE_P_page_btn, DELETE_P_page_back);
        QWidget::setTabOrder(DELETE_P_page_back, DELETE_P_page_table);
        QWidget::setTabOrder(DELETE_P_page_table, PAMENY_page_name);
        QWidget::setTabOrder(PAMENY_page_name, PAMENY_page_mobile);
        QWidget::setTabOrder(PAMENY_page_mobile, PAMENY_page_btn);
        QWidget::setTabOrder(PAMENY_page_btn, PAMENY_page_back);
        QWidget::setTabOrder(PAMENY_page_back, Cash_memo_back_exit_btn);
        QWidget::setTabOrder(Cash_memo_back_exit_btn, C_P_product_no);
        QWidget::setTabOrder(C_P_product_no, C_P_product_name);
        QWidget::setTabOrder(C_P_product_name, C_P_product_price);
        QWidget::setTabOrder(C_P_product_price, C_P_product_price_2);
        QWidget::setTabOrder(C_P_product_price_2, CREATE_PRODUCT_Update);
        QWidget::setTabOrder(CREATE_PRODUCT_Update, Back_Create_P);
        QWidget::setTabOrder(Back_Create_P, PAMENY_page_table);
        QWidget::setTabOrder(PAMENY_page_table, DISPLAY_A_P_table);
        QWidget::setTabOrder(DISPLAY_A_P_table, DISPLAY_A_P_back);
        QWidget::setTabOrder(DISPLAY_A_P_back, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton);
        QWidget::setTabOrder(pushButton, CUSTOMER_INFO_table);
        QWidget::setTabOrder(CUSTOMER_INFO_table, CUSTOMER_INFO_2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionHelp);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionInfo);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Customer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Administrator", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Creat_P_lab->setText(QCoreApplication::translate("MainWindow", "CREATE PRODUCT\n"
"PAGE", nullptr));
        Back_Create_P->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        C_P_P_Logo->setText(QString());
        C_P_product_no->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Product No", nullptr));
        CREATE_PRODUCT_Update->setText(QCoreApplication::translate("MainWindow", "CREATE PRODUCT", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CUSTOMER", nullptr));
        Customer_Page_back->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        label_5->setText(QString());
        Customer_Page_product->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Product No", nullptr));
        Customer_Page_btn->setText(QCoreApplication::translate("MainWindow", "ADD TO CART", nullptr));
        Pro->setText(QString());
        Customer_Page_text_lab_2->setText(QCoreApplication::translate("MainWindow", "Selected", nullptr));
        Customer_Page_payment->setText(QCoreApplication::translate("MainWindow", "PAYMENT", nullptr));
        DISPLAY_A_P_back->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        DISPLAY_A_P_Title->setText(QCoreApplication::translate("MainWindow", "DISPLAY ALL PRODUCTS", nullptr));
        LOGO->setText(QString());
        Admni_title->setText(QCoreApplication::translate("MainWindow", "ADMINISTRATOR", nullptr));
        CREATE_PRODUCT->setText(QCoreApplication::translate("MainWindow", "CREATE PRODUCT", nullptr));
        DISPLAY_ALL_PRODUCTS->setText(QCoreApplication::translate("MainWindow", "DISPLAY ALL PRODUCTS", nullptr));
        MODIFY_PRODUCT->setText(QCoreApplication::translate("MainWindow", "MODIFY PRODUCT", nullptr));
        DELETE_PRODUCT->setText(QCoreApplication::translate("MainWindow", "DELETE PRODUCT", nullptr));
        Back_admin->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        Admni_Logo->setText(QString());
        CUSTOMER_INFO_btn->setText(QCoreApplication::translate("MainWindow", "CUSTOMER INFO", nullptr));
        ADMINISTRATOR_title->setText(QCoreApplication::translate("MainWindow", "ADMINISTRATOR", nullptr));
        ADMINISTRATOR_back->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        ADMINISTRATOR_password->setText(QString());
        ADMINISTRATOR_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        ADMINISTRATOR_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        ADMINISTRATOR_username->setText(QString());
        ADMINISTRATOR_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter User Name", nullptr));
        Admni_Logo_2->setText(QString());
        MODIFY_P_page_Title->setText(QCoreApplication::translate("MainWindow", "MODIFY PRODUCT", nullptr));
        MODIFY_P_page_back->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        label_10->setText(QString());
        MODIFY_P_page_input_no->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Product No", nullptr));
        MODIFY_P_page_btn->setText(QCoreApplication::translate("MainWindow", "UPDATE", nullptr));
        DELETE_P_page_title->setText(QCoreApplication::translate("MainWindow", "DELETE PRODUCT", nullptr));
        DELETE_P_page_back->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        DELETE_P_page_title_LOGO->setText(QString());
        DELETE_P_page_btn->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
        DELETE_P_page_P_No->setText(QString());
        DELETE_P_page_P_No->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Product no :", nullptr));
        PAMENY_page_back->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        PAMENY_page_Title->setText(QCoreApplication::translate("MainWindow", "PAYMENT", nullptr));
        PAMENY_page_mobile->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Mobile no", nullptr));
        PAMENY_page_btn->setText(QCoreApplication::translate("MainWindow", "Purchase product", nullptr));
        PAMENY_page_total_input->setText(QString());
        PAMENY_page_total->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
        PAMENY_page_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your name", nullptr));
        DELETE_P_page_title_LOGO_2->setText(QString());
        Cash_memo_title->setText(QCoreApplication::translate("MainWindow", "CASH MEMO", nullptr));
        Cash_memo_back_exit_btn->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Cash_memo_Congratulation->setText(QString());
        DELETE_P_page_title_LOGO_3->setText(QString());
        CUSTOMER_INFO_2->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        CUSTOMER_INFO_title->setText(QCoreApplication::translate("MainWindow", "CUSTOMER INFO", nullptr));
        CUSTOMER_INFO_logo->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
