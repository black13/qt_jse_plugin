#include <QJSEngine>
#include <QQmlEngine>
#include <QDebug>
#include "plugin.h"

Plugin::Plugin()
{

}

void Plugin::Abstract(QJSEngine * _eng)
{
    qDebug() << "this will do the work of registering the classes with engine";
	
	_eng->globalObject().setProperty("plugin", _eng->newQObject(this));
	QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}

//#include "plugin.moc"