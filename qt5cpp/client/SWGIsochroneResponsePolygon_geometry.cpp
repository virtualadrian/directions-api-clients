/**
 * GraphHopper Directions API
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGIsochroneResponsePolygon_geometry.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGIsochroneResponsePolygon_geometry::SWGIsochroneResponsePolygon_geometry(QString* json) {
    init();
    this->fromJson(*json);
}

SWGIsochroneResponsePolygon_geometry::SWGIsochroneResponsePolygon_geometry() {
    init();
}

SWGIsochroneResponsePolygon_geometry::~SWGIsochroneResponsePolygon_geometry() {
    this->cleanup();
}

void
SWGIsochroneResponsePolygon_geometry::init() {
    type = new QString("");
    coordinates = new SWGResponseCoordinatesArray();
}

void
SWGIsochroneResponsePolygon_geometry::cleanup() {
    
    if(type != nullptr) {
        delete type;
    }

    if(coordinates != nullptr) {
        delete coordinates;
    }
}

SWGIsochroneResponsePolygon_geometry*
SWGIsochroneResponsePolygon_geometry::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGIsochroneResponsePolygon_geometry::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&coordinates, pJson["coordinates"], "SWGResponseCoordinatesArray", "SWGResponseCoordinatesArray");
}

QString
SWGIsochroneResponsePolygon_geometry::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGIsochroneResponsePolygon_geometry::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("coordinates"), coordinates, obj, QString("SWGResponseCoordinatesArray"));

    return obj;
}

QString*
SWGIsochroneResponsePolygon_geometry::getType() {
    return type;
}
void
SWGIsochroneResponsePolygon_geometry::setType(QString* type) {
    this->type = type;
}

SWGResponseCoordinatesArray*
SWGIsochroneResponsePolygon_geometry::getCoordinates() {
    return coordinates;
}
void
SWGIsochroneResponsePolygon_geometry::setCoordinates(SWGResponseCoordinatesArray* coordinates) {
    this->coordinates = coordinates;
}



} /* namespace Swagger */

