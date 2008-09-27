/*
 * orarioview.cpp
 *
 * Copyright (C) 2008 Riccardo Iaconelli <riccardo@kde.org>
 */
#include "orarioview.h"
#include "settings.h"

#include <klocale.h>
#include <QtGui/QLabel>

orarioView::orarioView(QWidget *)
{
    ui_orarioview_base.setupUi(this);
    settingsChanged();
    setAutoFillBackground(true);
}

orarioView::~orarioView()
{

}

void orarioView::switchColors()
{
    // switch the foreground/background colors of the label
    QColor color = Settings::col_background();
    Settings::setCol_background( Settings::col_foreground() );
    Settings::setCol_foreground( color );

    settingsChanged();
}

void orarioView::settingsChanged()
{
    QPalette pal;
    pal.setColor( QPalette::Window, Settings::col_background());
    pal.setColor( QPalette::WindowText, Settings::col_foreground());
    ui_orarioview_base.kcfg_sillyLabel->setPalette( pal );

    // i18n : internationalization
    ui_orarioview_base.kcfg_sillyLabel->setText( i18n("This project is %1 days old",Settings::val_time()) );
    emit signalChangeStatusbar( i18n("Settings changed") );
}

#include "orarioview.moc"
