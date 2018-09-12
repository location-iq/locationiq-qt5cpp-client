/**
 * LocationIQ
 * LocationIQ provides flexible enterprise-grade location based solutions. We work with developers, startups and enterprises worldwide serving billions of requests everyday. This page provides an overview of the technical aspects of our API and will help you get started.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIReverseApi.h"
#include "OAIHelpers.h"
#include "OAIModelFactory.h"
#include "OAIQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIReverseApi::OAIReverseApi() {}

OAIReverseApi::~OAIReverseApi() {}

OAIReverseApi::OAIReverseApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAIReverseApi::reverse(OAINumber* lat, OAINumber* lon, QString* format, qint32 normalizecity, qint32 addressdetails, QString* accept_language, qint32 namedetails, qint32 extratags) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/reverse.php");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lat"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lat)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lon"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lon)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("format"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(format)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("normalizecity"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(normalizecity)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("addressdetails"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(addressdetails)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accept-language"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accept_language)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("namedetails"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(namedetails)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("extratags"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(extratags)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIReverseApi::reverseCallback);

    worker->execute(&input);
}

void
OAIReverseApi::reverseCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAILocation* output = static_cast<OAILocation*>(create(json, QString("OAILocation")));
    auto wrapper = new OAIQObjectWrapper<OAILocation*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit reverseSignal(output);
    } else {
        emit reverseSignalE(output, error_type, error_str);
        emit reverseSignalEFull(worker, error_type, error_str);
    }
}


}