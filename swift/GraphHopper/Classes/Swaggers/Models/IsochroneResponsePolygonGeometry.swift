//
// IsochroneResponsePolygonGeometry.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class IsochroneResponsePolygonGeometry: JSONEncodable {
    public var type: String?
    public var coordinates: ResponseCoordinatesArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["type"] = self.type
        nillableDictionary["coordinates"] = self.coordinates?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
