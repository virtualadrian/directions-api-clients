# WWW::SwaggerClient::Object::Route

## Load the model package
```perl
use WWW::SwaggerClient::Object::Route;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**vehicle_id** | **string** | id of vehicle that operates route | [optional] 
**distance** | **int** | distance of route in meter | [optional] 
**transport_time** | **int** | transport time of route in ms | [optional] 
**completion_time** | **int** | completion time of route in ms | [optional] 
**waiting_time** | **int** | waiting time of route in ms | [optional] 
**activities** | [**ARRAY[Activity]**](Activity.md) | array of activities | [optional] 
**points** | [**ARRAY[RoutePoint]**](RoutePoint.md) | array of route planning points | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


