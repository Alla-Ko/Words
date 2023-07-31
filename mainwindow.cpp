
#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    player = new QMediaPlayer();
    audioOutput = new QAudioOutput();
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(100);
    player->setSource(QUrl("qrc:/new/prefix1/Res/musik.mp3"));
    player->setLoops(QMediaPlayer::Infinite);
    player->play();
    ui->pushButton_10->setStyleSheet("background-color:#bcfa7a");


   // ui->pushButton_10->setBackgroundRole("color:#bcfa7a");

    //масив кнопок
    buttons[0]=ui->pushButton;//А
    buttons[1]=ui->pushButton_2;
    buttons[2]=ui->pushButton_3;
    buttons[3]=ui->pushButton_4;
    buttons[4]=ui->pushButton_5;
    buttons[5]=ui->pushButton_6;
    buttons[6]=ui->pushButton_7;
    buttons[7]=ui->pushButton_8;
    buttons[8]=ui->pushButton_9;
    buttons[9]=ui->pushButton_35;
    buttons[10]=ui->pushButton_38;
    buttons[11]=ui->pushButton_39;
    buttons[12]=ui->pushButton_13;
    buttons[13]=ui->pushButton_41;
    buttons[14]=ui->pushButton_37;
    buttons[15]=ui->pushButton_40;
    buttons[16]=ui->pushButton_17;
    buttons[17]=ui->pushButton_18;
    buttons[18]=ui->pushButton_19;
    buttons[19]=ui->pushButton_20;
    buttons[20]=ui->pushButton_21;
    buttons[21]=ui->pushButton_22;
    buttons[22]=ui->pushButton_23;
    buttons[23]=ui->pushButton_24;
    buttons[24]=ui->pushButton_25;
    buttons[25]=ui->pushButton_26;
    buttons[26]=ui->pushButton_27;
    buttons[27]=ui->pushButton_28;
    buttons[28]=ui->pushButton_29;
    buttons[29]=ui->pushButton_30;
    buttons[30]=ui->pushButton_31;
    buttons[31]=ui->pushButton_32;
    buttons[32]=ui->pushButton_33;
    buttons[33]=ui->pushButton_34;

    for (int i=0;i<34;i++)
    {
        buttons[i]->setEnabled(false);
    }





    myModel= new myTableModel();
    proxyModel = new QSortFilterProxyModel();
    proxyModel->setSourceModel(myModel);
    ui->tableView->setModel(proxyModel);
    //qDebug() <<"загрузили модель в вьюшку";

/*
    QList <QString> zapovn;
    zapovn.push_back("ЕЛЕКТРОСТАНЦІЯ");
    zapovn.push_back("КУКУРУДЗА");
    zapovn.push_back("ВЕСЕЛКА");
    zapovn.push_back("ДЕРЕВО");
    zapovn.push_back("СВОБОДА");
    zapovn.push_back("УКРАЇНА");
    zapovn.push_back("ПОДВІР'Я");
    zapovn.push_back("ЗУБ");
    zapovn.push_back("КОЛИБА");
    zapovn.push_back("ВІДРО");
    zapovn.push_back("СТЕРЕОСИСТЕМА");
    zapovn.push_back("КОЛОС");
    zapovn.push_back("НІЧ");
    zapovn.push_back("ЧЕРЕДА");
    zapovn.push_back("АНТАРКТИДА");
    zapovn.push_back("НІМЕЧЧИНА");
    zapovn.push_back("ЄВПАТОРІЯ");
    zapovn.push_back("ЧЕРНІВЦІ");
    zapovn.push_back("КИЇВ");
    zapovn.push_back("УРУГВАЙ");
    zapovn.push_back("КАНАДА");
    zapovn.push_back("ЕВЕРЕСТ");
    zapovn.push_back("ГОВЕРЛА");
    zapovn.push_back("ДНІПРО");
    zapovn.push_back("ДНІСТЕР");
    zapovn.push_back("ПРУТ");
    zapovn.push_back("РОЗУМ");
    zapovn.push_back("ДИТИНА");
    zapovn.push_back("СІМ'Я");
    zapovn.push_back("ЖИРАФ");
    zapovn.push_back("СЛОН");
    zapovn.push_back("КОРОВА");
    zapovn.push_back("ДУБ");
    zapovn.push_back("ГОРОБЕЦЬ");
    zapovn.push_back("НАДЛИШОК");
    zapovn.push_back("ПЕРЕВАГА");
    zapovn.push_back("ПЕРЕМОГА");
    zapovn.push_back("ТОРГІВЛЯ");
    zapovn.push_back("СУМКА");
    zapovn.push_back("ПОРТ");
    zapovn.push_back("ТОРТ");
    zapovn.push_back("РИБА");
    zapovn.push_back("СОВА");
    zapovn.push_back("БОРЩ");
    zapovn.push_back("КРІП");
    zapovn.push_back("КРІТ");
    zapovn.push_back("ТИР");
    zapovn.push_back("РИС");
    zapovn.push_back("СИР");
    zapovn.push_back("КІР");
    zapovn.push_back("КОРА");
    zapovn.push_back("ЯДРО");
    zapovn.push_back("ЖИТТЯ");
    zapovn.push_back("ЧОБІТ");
    zapovn.push_back("ЖІНКА");
    zapovn.push_back("ЧОЛОВІК");
    zapovn.push_back("СОБАКА");
    zapovn.push_back("КІТ");
    zapovn.push_back("КИТ");
    zapovn.push_back("ПАРОПЛАВ");
    zapovn.push_back("ЛЬОДОХІД");
    zapovn.push_back("САМОКАТ");
    zapovn.push_back("ВОДА");
    zapovn.push_back("ЛІД");
    zapovn.push_back("СЛОВО");
    zapovn.push_back("ХВОРОБА");
    zapovn.push_back("РИБАЛКА");
    zapovn.push_back("ТАКСІ");
    zapovn.push_back("САМОКАТ");
    zapovn.push_back("КОРАБЕЛЬ");
    zapovn.push_back("ЛІТАК");
    zapovn.push_back("ВЕРТОЛІТ");
    zapovn.push_back("ДОРОГА");
    zapovn.push_back("ГОРА");
    zapovn.push_back("КАРАВАН");
    zapovn.push_back("ПУСТЕЛЯ");
    zapovn.push_back("ЗОЛОТО");
    zapovn.push_back("СРІБЛО");
    zapovn.push_back("ДІАМАНТ");
    zapovn.push_back("КОЙОТ");
    zapovn.push_back("ДЕЛЬФІН");
    zapovn.push_back("КРАБ");
    zapovn.push_back("СТІНА");
    zapovn.push_back("ДАХ");
    zapovn.push_back("СТЕЛЯ");
    zapovn.push_back("ШАФА");
    zapovn.push_back("ШУХЛЯДА");
    zapovn.push_back("КОВРИК");
    zapovn.push_back("СТІЛ");
    zapovn.push_back("ЛІЖКО");
    zapovn.push_back("КНИГА");
    zapovn.push_back("НАВЧАННЯ");
    zapovn.push_back("ЗОБРАЖЕННЯ");
    zapovn.push_back("ДВЕРІ");
    zapovn.push_back("ВІКНО");
    zapovn.push_back("ПРИНТЕР");
    zapovn.push_back("МОНІТОР");
    zapovn.push_back("ЗДОРОВ'Я");
    zapovn.push_back("ПЕНАЛ");
    zapovn.push_back("РЮКЗАК");
    zapovn.push_back("ОЛІВЕЦЬ");
    zapovn.push_back("ЧАС");
    zapovn.push_back("ВИСТАВА");
    zapovn.push_back("ТРАВА");
    zapovn.push_back("КВІТКА");
    zapovn.push_back("СМАК");
    zapovn.push_back("ЗАПАХ");
    zapovn.push_back("СЕРЦЕ");
    zapovn.push_back("ПЕЧІНКА");
    zapovn.push_back("ПОРОСЯ");
    zapovn.push_back("РОБОТА");
    zapovn.push_back("КУЩ");
    zapovn.push_back("ПОРОДА");
    zapovn.push_back("ПОРАДА");
    zapovn.push_back("ПАРАД");
    zapovn.push_back("ЯЛИНКА");
    zapovn.push_back("ПОХІД");
    zapovn.push_back("ЩУКА");
    zapovn.push_back("МИЛО");
    zapovn.push_back("СІЛЬ");
    zapovn.push_back("КОРІНЬ");
    zapovn.push_back("СУФІКС");
    zapovn.push_back("КІНЕЦЬ");
    zapovn.push_back("ВІДПОВІДАЛЬНІСТЬ");

    qDebug() << zapovn[0];
    QFile file(fileName);


    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("Unable to open file for writing"), file.errorString());
        return;
    }

    QDataStream out(&file);
    for(const QString &con:zapovn)
    {
        out << con;
    }
    file.close();
*/



    Open_file();
    //qDebug() <<"все по відкриттю файлу";

    ui->tableView->verticalHeader()->setVisible(0);
    ui->tableView->horizontalHeader()->setVisible(1);
    ui->tableView->horizontalHeader()->setStyleSheet("font-size: 10px");

    //if(myword.size()>0) ui->tableView->horizontalHeader()->setDefaultSectionSize(ui->tableView->size().width()/myword.size());
    ui->tableView->horizontalHeader()->setDefaultSectionSize(20);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setStretchLastSection( true );



    ui->radioButton_easy->setChecked(1);
    ui->radioButton_sound_on->setChecked(1);
    life=10;
    hearts();
    ui->radioButton_easy->setCheckable(1);
    ui->radioButton_medium->setCheckable(1);
    ui->radioButton_hard->setCheckable(1);
    char_word.clear();

    //myModel->word_table.clear();
    //proxyModel->invalidate();
    life=10;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Open_file()
{
    //читання з файлу
    //QString fileName1=QFileDialog::getOpenFileName(this, "Open File",QStandardPaths::standardLocations(QStandardPaths::DesktopLocation).value(0),"DATA (*.DAT)");
    //QFile file(fileName1);
    QFile file(":/new/prefix1/Res/text.dat");

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(this, tr("Unable to open file"), file.errorString());
        return;
    }

    QList<QString> contacts_open;
    QString contactic;
    QDataStream in(&file);
   // qDebug() <<"відкрили файл";

    while(!in.atEnd())
    {

        in >> contactic;


        contacts_open.push_back(contactic);
        //qDebug() <<contactic.name;

    }
    file.close();

    if (contacts_open.isEmpty()) {
        QMessageBox::information(this, tr("No contacts in file"),
                                 tr("The file you are attempting to open contains no contacts."));
    } else {
        words=contacts_open;
    //qDebug() <<"зробили вектор всіх слів";

        //proxyModel->invalidate();




    }
}

void MainWindow::on_radioButton_medium_clicked()

{
    myModel->word_table.clear();
    char_word.clear();
    proxyModel->invalidate();
    life=8;
    hearts();
}


void MainWindow::on_radioButton_easy_clicked()
{
    myModel->word_table.clear();
    char_word.clear();
    proxyModel->invalidate();
    life=10;
    hearts();
}


void MainWindow::on_radioButton_hard_clicked()
{
    myModel->word_table.clear();
    char_word.clear();
    proxyModel->invalidate();
    life=5;
    hearts();
}


void MainWindow::on_pushButton_10_clicked()
{
//початок гри
    for (int i=0;i<34;i++)
    {
    buttons[i]->setStyleSheet("color:black");
    buttons[i]->setEnabled(true);
    }

    if (ui->radioButton_easy->isChecked())life=10;
    if (ui->radioButton_medium->isChecked())life=8;
    if (ui->radioButton_hard->isChecked())life=5;
    hearts();
    int r=rand()%words.size();
    myword=words[r];
    qDebug() <<myword;
    myModel->word_table.clear();
    char_word.clear();
    const QChar a ('?');
    for(int i=0;i<myword.size();i++)
    {
        char_word.push_back(myword.at(i));
        //qDebug() <<myword.at(i);
        myModel->word_table.push_back(a);
    }
    ui->tableView->verticalHeader()->setVisible(0);
    ui->tableView->horizontalHeader()->setVisible(1);
    ui->tableView->horizontalHeader()->setStyleSheet("font-size: 10px");

    //if(myword.size()>0) ui->tableView->horizontalHeader()->setDefaultSectionSize(ui->tableView->size().width()/myword.size());
    ui->tableView->horizontalHeader()->setDefaultSectionSize(20);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setStretchLastSection( true );

    proxyModel->invalidate();

}
bool MainWindow::iswin()
{
    if (char_word==myModel->word_table&&life>0)
    {
        return true;
    }
    return false;
}
void MainWindow::hearts()
{
    if (life==10)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(1);
        ui->label_heart4->setVisible(1);
        ui->label_heart5->setVisible(1);
        ui->label_heart6->setVisible(1);
        ui->label_heart7->setVisible(1);
        ui->label_heart8->setVisible(1);
        ui->label_heart9->setVisible(1);
        ui->label_heart10->setVisible(1);
    }
    if (life==9)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(1);
        ui->label_heart4->setVisible(1);
        ui->label_heart5->setVisible(1);
        ui->label_heart6->setVisible(1);
        ui->label_heart7->setVisible(1);
        ui->label_heart8->setVisible(1);
        ui->label_heart9->setVisible(1);
        ui->label_heart10->setVisible(0);
    }
    if (life==8)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(1);
        ui->label_heart4->setVisible(1);
        ui->label_heart5->setVisible(1);
        ui->label_heart6->setVisible(1);
        ui->label_heart7->setVisible(1);
        ui->label_heart8->setVisible(1);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }
    if (life==7)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(1);
        ui->label_heart4->setVisible(1);
        ui->label_heart5->setVisible(1);
        ui->label_heart6->setVisible(1);
        ui->label_heart7->setVisible(1);
        ui->label_heart8->setVisible(0);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }
    if (life==6)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(1);
        ui->label_heart4->setVisible(1);
        ui->label_heart5->setVisible(1);
        ui->label_heart6->setVisible(1);
        ui->label_heart7->setVisible(0);
        ui->label_heart8->setVisible(0);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }
    if (life==5)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(1);
        ui->label_heart4->setVisible(1);
        ui->label_heart5->setVisible(1);
        ui->label_heart6->setVisible(0);
        ui->label_heart7->setVisible(0);
        ui->label_heart8->setVisible(0);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }
    if (life==4)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(1);
        ui->label_heart4->setVisible(1);
        ui->label_heart5->setVisible(0);
        ui->label_heart6->setVisible(0);
        ui->label_heart7->setVisible(0);
        ui->label_heart8->setVisible(0);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }
    if (life==3)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(1);
        ui->label_heart4->setVisible(0);
        ui->label_heart5->setVisible(0);
        ui->label_heart6->setVisible(0);
        ui->label_heart7->setVisible(0);
        ui->label_heart8->setVisible(0);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }
    if (life==2)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(1);
        ui->label_heart3->setVisible(0);
        ui->label_heart4->setVisible(0);
        ui->label_heart5->setVisible(0);
        ui->label_heart6->setVisible(0);
        ui->label_heart7->setVisible(0);
        ui->label_heart8->setVisible(0);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }
    if (life==1)
    {
        ui->label_heart1->setVisible(1);
        ui->label_heart2->setVisible(0);
        ui->label_heart3->setVisible(0);
        ui->label_heart4->setVisible(0);
        ui->label_heart5->setVisible(0);
        ui->label_heart6->setVisible(0);
        ui->label_heart7->setVisible(0);
        ui->label_heart8->setVisible(0);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }
    if (life==0)
    {
        ui->label_heart1->setVisible(0);
        ui->label_heart2->setVisible(0);
        ui->label_heart3->setVisible(0);
        ui->label_heart4->setVisible(0);
        ui->label_heart5->setVisible(0);
        ui->label_heart6->setVisible(0);
        ui->label_heart7->setVisible(0);
        ui->label_heart8->setVisible(0);
        ui->label_heart9->setVisible(0);
        ui->label_heart10->setVisible(0);
    }

}

void MainWindow:: mybutton(QString l, int butt)
{
    QChar letter=l.at(0);
    //qDebug() <<letter;
    int lich=0;
    if(!iswin()||life>0)
    {
        for(int i=0;i<char_word.size();i++)
        {
            if(char_word[i]==letter)
            {
                myModel->word_table[i]=letter;
                lich++;
            }
        }
        proxyModel->invalidate();
        if (lich>0)buttons[butt]->setStyleSheet("color:blue");
        if(iswin())
        {
            QMessageBox::information(this, tr("Перемога"),
                                     tr("Ви вгадали слово!!!"));
            for (int i=0;i<34;i++)
            {
                buttons[i]->setEnabled(false);
            }
        }
        if (lich==0)
        {
            buttons[butt]->setStyleSheet("color:red");
            if(life>1)
            {
                QMessageBox::information(this, tr("Неправильна буква"),
                                         tr("Ви втрачаєте одне життя"));
            }
            if (life==1)
            {
                QMessageBox::information(this, tr("Неправильна буква"),
                                         tr("Це було останнє життя! Ви програли!"));
                for (int i=0;i<34;i++)
                {
                    buttons[i]->setEnabled(false);
                }

                myModel->word_table=char_word;
                proxyModel->invalidate();
            }
            life--;
            hearts();
        }

    }
}
void MainWindow::on_pushButton_clicked()
{
    QString l="А";
    mybutton(l,0);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString l="Б";
    mybutton(l,1);
}


void MainWindow::on_pushButton_3_clicked()
{
    QString l="В";
    mybutton(l,2);
}


void MainWindow::on_pushButton_4_clicked()
{

    QString l="Г";
    mybutton(l,3);
}



void MainWindow::on_pushButton_5_clicked()
{
  QString l="Ґ";
  mybutton(l,4);
}


void MainWindow::on_pushButton_6_clicked()
{
    QString l="Д";
    mybutton(l,5);
}


void MainWindow::on_pushButton_7_clicked()
{
    QString l="Е";
    mybutton(l,6);
}


void MainWindow::on_pushButton_8_clicked()
{
    QString l="Є";
    mybutton(l,7);
}


void MainWindow::on_pushButton_9_clicked()
{
    QString l="Ж";
    mybutton(l,8);
}


void MainWindow::on_pushButton_35_clicked()
{
    QString l="З";
    mybutton(l,9);
}


void MainWindow::on_pushButton_38_clicked()
{
    QString l="И";
        mybutton(l,10);
}


void MainWindow::on_pushButton_39_clicked()
{
    QString l="І";
    mybutton(l,11);
}


void MainWindow::on_pushButton_13_clicked()
{
    QString l="Ї";
    mybutton(l,12);
}


void MainWindow::on_pushButton_41_clicked()
{
    QString l="Й";
    mybutton(l,13);
}


void MainWindow::on_pushButton_37_clicked()
{
    QString l="К";
    mybutton(l,14);
}


void MainWindow::on_pushButton_40_clicked()
{
    QString l="Л";
    mybutton(l,15);
}

void MainWindow::on_pushButton_17_clicked()
{
    QString l="М";
    mybutton(l,16);
}


void MainWindow::on_pushButton_18_clicked()
{
    //Н
    QString l="Н";
    mybutton(l,17);
}


void MainWindow::on_pushButton_19_clicked()
{
    //О
    QString l="О";
    mybutton(l,18);
}


void MainWindow::on_pushButton_20_clicked()
{
    //П
    QString l="П";
    mybutton(l,19);
}


void MainWindow::on_pushButton_21_clicked()
{
    //Р
    QString l="Р";
    mybutton(l,20);
}


void MainWindow::on_pushButton_22_clicked()
{
    //С
    QString l="С";
    mybutton(l,21);
}


void MainWindow::on_pushButton_23_clicked()
{
    //Т
    QString l="Т";
    mybutton(l,22);
}


void MainWindow::on_pushButton_24_clicked()
{
    //У
    QString l="У";
    mybutton(l,23);
}


void MainWindow::on_pushButton_25_clicked()
{
    //Ф
    QString l="Ф";
    mybutton(l,24);
}


void MainWindow::on_pushButton_26_clicked()
{
    //Х
    QString l="Х";
    mybutton(l,25);
}


void MainWindow::on_pushButton_27_clicked()
{
    //Ц
    QString l="Ц";
    mybutton(l,26);
}


void MainWindow::on_pushButton_28_clicked()
{
    //Ч
    QString l="Ч";
    mybutton(l,27);
}


void MainWindow::on_pushButton_29_clicked()
{
    //Ш
    QString l="Ш";
    mybutton(l,28);
}


void MainWindow::on_pushButton_30_clicked()
{
    //Щ
    QString l="Щ";
    mybutton(l,29);
}


void MainWindow::on_pushButton_31_clicked()
{
    //Ь
    QString l="Ь";
    mybutton(l,30);
}


void MainWindow::on_pushButton_32_clicked()
{
    //Ю
    QString l="Ю";
    mybutton(l,31);
}


void MainWindow::on_pushButton_33_clicked()
{
    //Я
    QString l="Я";
    mybutton(l,32);
}


void MainWindow::on_pushButton_34_clicked()
{
    //'
    QString l="'";
    mybutton(l,33);
}


void MainWindow::on_radioButton_sound_on_clicked()
{
    player->play();
}


void MainWindow::on_radioButton_sound_off_clicked()
{
    player->stop();
}


void MainWindow::on_action_3_triggered()
{
    QMessageBox::information(this, tr("Інформація"),
                             tr("Натискайте старт гри і вгадуйте слова по буквах"));
}


void MainWindow::on_action_triggered()
{
    on_pushButton_10_clicked();
}


void MainWindow::on_action_2_triggered()
{
    switch( QMessageBox::question(
        this,
        tr("Вийти"),
        tr("Ви впевнені?"),

        QMessageBox::Yes |
            QMessageBox::Cancel ) )
    {
    case QMessageBox::Yes:
        QApplication::quit();
        break;
    case QMessageBox::Cancel:
        break;
    default:
        break;
    }
}

