/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface SLDatabase : NSObject {

	NSString* _modelPath;
	NSString* _storePath;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;

}
-(BOOL)save:(id*)arg1 ;
-(id)initWithStoreName:(id)arg1 modelPath:(id)arg2 ;
-(void)_setUpManagedObjectContext;
-(id)_persistentStoreCoordinator;
-(id)_managedObjectModel;
-(void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)newObjectForEntityNamed:(id)arg1 ;
@end
