
#include <QWidget>

class OrarioWidget : public QWidget
{
    Q_OBJECT
    public:
        OrarioWidget(QWidget *p = 0);
        
    public Q_SLOTS:
        void addHomeworks();

};
