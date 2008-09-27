/*
 * orarioview.h
 *
 * Copyright (C) 2007 Riccardo Iaconelli <riccardo@kde.org>
 */
#ifndef ORARIOVIEW_H
#define ORARIOVIEW_H

#include <QtGui/QWidget>

#include "ui_orarioview_base.h"

class QPainter;
class KUrl;

/**
 * This is the main view class for orario.  Most of the non-menu,
 * non-toolbar, and non-statusbar (e.g., non frame) GUI code should go
 * here.
 *
 * @short Main view
 * @author Riccardo Iaconelli <riccardo@kde.org>
 * @version 0.1
 */

class orarioView : public QWidget, public Ui::orarioview_base
{
    Q_OBJECT
public:
    /**
     * Default constructor
     */
    orarioView(QWidget *parent);

    /**
     * Destructor
     */
    virtual ~orarioView();

private:
    Ui::orarioview_base ui_orarioview_base;

signals:
    /**
     * Use this signal to change the content of the statusbar
     */
    void signalChangeStatusbar(const QString& text);

    /**
     * Use this signal to change the content of the caption
     */
    void signalChangeCaption(const QString& text);

private slots:
    void switchColors();
    void settingsChanged();
};

#endif // orarioVIEW_H
