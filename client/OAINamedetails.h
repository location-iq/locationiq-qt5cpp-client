/**
 * LocationIQ
 * LocationIQ provides flexible enterprise-grade location based solutions. We work with developers, startups and enterprises worldwide serving billions of requests everyday. This page provides an overview of the technical aspects of our API and will help you get started.
 *
 * OpenAPI spec version: 1.0.1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAINamedetails.h
 *
 * 
 */

#ifndef OAINamedetails_H_
#define OAINamedetails_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAINamedetails: public OAIObject {
public:
    OAINamedetails();
    OAINamedetails(QString json);
    ~OAINamedetails();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAINamedetails* fromJson(QString jsonString) override;

    QString* getName();
    void setName(QString* name);


    virtual bool isSet() override;

private:
    QString* name;
    bool m_name_isSet;

};

}

#endif /* OAINamedetails_H_ */
