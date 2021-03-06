//
// VehicleType.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class VehicleType: JSONEncodable {
    public enum Profile: String { 
        case Car = "car"
        case Bike = "bike"
        case Foot = "foot"
        case Mtb = "mtb"
        case Motorcycle = "motorcycle"
        case Racingbike = "racingbike"
        case Truck = "truck"
        case SmallTruck = "small_truck"
    }
    /** Unique identifier for the vehicle type */
    public var typeId: String?
    /** Profile of vehicle type */
    public var profile: Profile?
    /** array of capacity dimensions */
    public var capacity: [Int32]?
    /** speed_factor of vehicle type */
    public var speedFactor: Double?
    /** service time factor of vehicle type */
    public var serviceTimeFactor: Double?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["type_id"] = self.typeId
        nillableDictionary["profile"] = self.profile?.rawValue
        nillableDictionary["capacity"] = self.capacity?.encodeToJSON()
        nillableDictionary["speed_factor"] = self.speedFactor
        nillableDictionary["service_time_factor"] = self.serviceTimeFactor
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
