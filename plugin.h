#ifndef PLUGIN_H
#define PLUGIN_H

#include "generic_interface.h"
#include <QJSEngine>
#include <QDebug>
class Bid : public QObject
{
	Q_OBJECT

	Q_PROPERTY(int intProperty READ intProperty WRITE setIntProperty)
public:
	
	
	Bid(QObject *parent = 0)
	: QObject(parent),
	m_intValue(-1)
	{ }

	int intProperty() const
	{
		return m_intValue;
	}
	void setIntProperty(int value)
	{
		qDebug() << value;
		m_intValue = value;
	}

protected:
	int m_intValue;

};

class Base : public QObject
{
	Q_OBJECT
		
	Q_PROPERTY(Bid * propName READ propName WRITE setpropName)
	Q_PROPERTY(int intProperty READ intProperty WRITE setIntProperty)
	
public:
	Base(QObject *parent = 0)
		:m_propName(new Bid(parent)),
		m_intValue(-1)
	{}
	~Base()
	{
		delete m_propName;
	}

	Bid * propName()
	{
		return m_propName;
	}
	void setpropName(Bid * propName)
	{
		m_propName = propName;
	}

	int intProperty() const
	{
		return m_intValue;
	}
	void setIntProperty(int value)
	{
		qDebug() << value;
		m_intValue = value;
	}

private:
	Bid *m_propName;
	int m_intValue;
};

class Plugin : public Generic_Interface
{
	Q_OBJECT
		
	Q_PROPERTY(int intProperty READ intProperty WRITE setIntProperty)
	
public:
    Plugin();
    void Abstract (QJSEngine *);

	int intProperty() const
	{
		return m_intValue;
	}
	void setIntProperty(int value)
	{
		qDebug() << value;
		m_intValue = value;
	}

	int m_intValue;
};

#endif // PLUGIN_H
