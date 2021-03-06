/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QWSPROPERTY_QWS_H
#define QWSPROPERTY_QWS_H

#include <QtCore/qglobal.h>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Gui)

/*********************************************************************
 *
 * Class: QWSPropertyManager
 *
 *********************************************************************/

#ifndef QT_NO_QWS_PROPERTIES

class QWSPropertyManager
{
public:
    enum Mode {
        PropReplace = 0,
        PropPrepend,
        PropAppend
    };

    // pre-defined properties
    enum Atom {
        PropSelection = 0
    };

    QWSPropertyManager();
    ~QWSPropertyManager();

    bool setProperty(int winId, int property, int mode, const char *data, int len);
    bool hasProperty(int winId, int property);
    bool removeProperty(int winId, int property);
    bool addProperty(int winId, int property);
    bool getProperty(int winId, int property, const char *&data, int &len);
    bool removeProperties(int winId);

private:
    class Data;
    Data* d;
};

#endif // QT_NO_QWS_PROPERTIES

QT_END_NAMESPACE

QT_END_HEADER

#endif // QWSPROPERTY_QWS_H
