//
//  CustomChildRealmObject.h
//  
//
//  Created by Maximilian Clarke on 1/07/2015.
//
//

#import "Realm.h"

@interface CustomChildRealmObject : RLMObject

@property NSData *imageData;

@end

RLM_ARRAY_TYPE(CustomChildRealmObject)