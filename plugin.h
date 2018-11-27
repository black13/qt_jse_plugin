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
		
	Q_PROPERTY(int intProperty READ intProperty WRITE setIntProperty)

public:
	Base(QObject *parent = 0)
		:m_intValue(-1)
	{}
	~Base()
	{
		
	}

	int intProperty() const
	{
		qDebug() << "from base"; 
		return m_intValue;
	}
	void setIntProperty(int value)
	{
		qDebug() << "from base"; 
		m_intValue = value;
	}	
public slots:
	void write()
	{
    	qDebug() << "this will write out the message content to some place!";
	}

private:
	int m_intValue;
};

class Plugin : public Generic_Interface
{
	Q_OBJECT
		
	Q_PROPERTY(int intProperty READ intProperty WRITE setIntProperty)
	Q_PROPERTY(Base * base READ base WRITE setbase)

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
	Base * base()
	{
		return m_base;
	}
	void setbase(Base * propName)
	{
		m_base = propName;
	}
private:
	Base *m_base;
	int m_intValue;
	
};

#endif // PLUGIN_H
