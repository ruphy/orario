/*
 * orario.h
 *
 * Copyright (C) 2008 Riccardo Iaconelli <riccardo@kde.org>
 */
#ifndef ORARIO_H
#define ORARIO_H


#include <kxmlguiwindow.h>

#include "ui_prefs_base.h"

class orarioView;
class QPrinter;
class KToggleAction;
class KUrl;

/**
 * This class serves as the main window for orario.  It handles the
 * menus, toolbars, and status bars.
 *
 * @short Main window class
 * @author Riccardo Iaconelli <riccardo@kde.org>
 * @version 0.1
 */
class orario : public KXmlGuiWindow
{
    Q_OBJECT
public:
    /**
     * Default Constructor
     */
    orario();

    /**
     * Default Destructor
     */
    virtual ~orario();

private slots:
    void fileNew();
    void optionsPreferences();

private:
    void setupActions();

private:
    Ui::prefs_base ui_prefs_base ;
    orarioView *m_view;

    QPrinter   *m_printer;
    KToggleAction *m_toolbarAction;
    KToggleAction *m_statusbarAction;
};

#endif // _ORARIO_H_
