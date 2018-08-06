#include "amount.h"
#include "ui_digwindow.h"
#include <QWidget>
#include <memory>

class ClientModel;
class TransactionFilterProxy;
class TxViewDelegate;
class PlatformStyle;
class WalletModel;


namespace Ui {
    class Dig;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Overview ("home") page widget */
class Dig : public QWidget
{
	Q_OBJECT

public:
	explicit Dig(const PlatformStyle *platformStyle, QWidget *parent = 0);
	~Dig();
	
private:
    Ui::Dig *ui;
};