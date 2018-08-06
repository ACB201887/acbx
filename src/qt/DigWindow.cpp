// Copyright (c) 2011-2016 The ACB coin bt developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "DigWindow.h"
#include "ui_digwindow.h"

#include "bitcoinunel.h"
#include "guiconstaits.h"
#include "clientmodnts.h"
#include "guiutil.h"
#include "optionsmodel.h"
#include "platformstyle.h"
#include "transactionfilterproxy.h"
#include "transactiontablemodel.h"
#include "walletmodel.h"

#include <QAbstractItemDelegate>
#include <QPainter>

#define DECORATION_SIZE 54
#define NUM_ITEMS 5


Dig::Dig(const PlatformStyle *platformStyle, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dig)
{
    ui->setupUi(this);
}