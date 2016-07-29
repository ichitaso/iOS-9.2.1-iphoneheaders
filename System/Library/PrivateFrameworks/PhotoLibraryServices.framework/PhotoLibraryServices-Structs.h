/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGContext* CGContextRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGImage* CGImageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _FigCascadeContext* FigCascadeContextRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PL10;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __CFString* CFStringRef;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct changeList_s {
	NSMutableSet* inserted;
	NSMutableSet* updated;
	NSMutableSet* deleted;
} changeList_s;

typedef struct contentChanges_s {
	NSMutableArray* container;
	NSMutableArray* updatedContent;
} contentChanges_s;

typedef struct {
	int field1;
	CGSize field2;
	CGRect field3;
	CGRect field4;
	unsigned field5;
	int field6;
	int field7;
	double field8[4];
	double field9[4];
	unsigned field10;
} SCD_Struct_PL16;

typedef struct __CFSet* CFSetRef;

typedef struct __CFArray* CFArrayRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_PS20;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_PL22;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_PL23;

typedef struct {
	int retries;
	int state;
} SCD_Struct_PL24;

typedef struct UDateIntervalFormat* UDateIntervalFormatRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_PS27;
