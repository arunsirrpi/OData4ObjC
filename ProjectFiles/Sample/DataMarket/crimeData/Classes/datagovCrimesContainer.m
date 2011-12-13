/**
*
*Copyright 2010 OuterCurve Foundation
*
*Licensed under the Apache License, Version 2.0 (the "License");
*you may not use this file except in compliance with the License.
*You may obtain a copy of the License at
*
*http://www.apache.org/licenses/LICENSE-2.0
*
*Unless required by applicable law or agreed to in writing, software
*distributed under the License is distributed on an "AS IS" BASIS,
*WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*See the License for the specific language governing permissions and
*limitations under the License.
*/
/**
* This code was generated by the tool 'odatagen'.
* Runtime Version:1.0
*
* Changes to this file may cause incorrect behavior and will be lost if
* the code is regenerated.
*/
#import "datagovCrimesContainer.h"

 
/**
 * Container interface datagovCrimesContainer, Namespace: data.gov.Crimes
 */
@implementation datagovCrimesContainer 

	@synthesize m_OData_etag;

	@synthesize m_CityCrime;
/**
 * The initializer for datagovCrimesContainer accepting service URI
 */
- (id) init
{
	NSString* tmpuri =[[NSString alloc]initWithString:DEFAULT_SERVICE_URL];
	self=[self initWithUri:tmpuri credential:nil];
	[tmpuri release];
	return self;
}

- (id) initWithUri:(NSString*)anUri credential:(id)acredential
{
	NSString* tmpuri=nil;
	if([anUri length]==0)
	{
	 	tmpuri = DEFAULT_SERVICE_URL;
	}
	else
	{
		tmpuri =[NSString stringWithString:anUri];
	}
	if(![tmpuri hasSuffix:@"/"])
	{
		tmpuri=[tmpuri stringByAppendingString:@"/"];
	}

	if(self=[super initWithUri:tmpuri credentials:acredential dataServiceVersion:DataServiceVersion])
	{
		[super setServiceNamespace:@"data.gov.Crimes"];

		NSMutableArray* tempEntities=[[NSMutableArray alloc]init];
		
		[tempEntities addObject:@"CityCrime"];

		if([tempEntities count] > 0 )
		{
			[super setEntitiesWithArray:tempEntities];
		}
		[tempEntities release];

		NSMutableArray* tempEntitiySetKey=[[NSMutableArray alloc]init];
		
		[tempEntitiySetKey addObject:@"citycrime"];

		NSMutableArray* tempEntitiyTypeobj=[[NSMutableArray alloc]init];
		
		[tempEntitiyTypeobj addObject:@"CityCrime"];

		if( ( [tempEntitiySetKey count] > 0 ) && ( [tempEntitiyTypeobj count] > 0 ) )
		{
			[super setEntitySet2TypeWithObject:tempEntitiyTypeobj forKey:tempEntitiySetKey];

		}

		[tempEntitiySetKey release];
		[ tempEntitiyTypeobj release];

		NSMutableArray* tempEntitiyTypeKey=[[NSMutableArray alloc]init];
		
		[tempEntitiyTypeKey addObject:@"citycrime"];
		NSMutableArray* tempEntitySetObj=[[NSMutableArray alloc]init];
		
		[tempEntitySetObj addObject:@"CityCrime"];

		if( ( [tempEntitiyTypeKey count] > 0 ) && ( [tempEntitySetObj count] > 0 ) )
		{
			[super setEntityType2SetWithObject:tempEntitySetObj forKey:tempEntitiyTypeKey];

		}
    	[tempEntitiyTypeKey release];
		[tempEntitySetObj release];

		NSMutableArray* foreignKeys=[[NSMutableArray alloc]init];		

		NSMutableArray *arrOfDictionaries=[[NSMutableArray alloc]initWithCapacity:[foreignKeys count]];
		if( ( [foreignKeys count] > 0 ) && ( [arrOfDictionaries count] > 0 ) )
		{
			[super setAssociationforObjects:arrOfDictionaries forKeys:foreignKeys];
		}
		[foreignKeys release];
		[arrOfDictionaries release];

		m_CityCrime = [[DataServiceQuery alloc]initWithUri:@"CityCrime" objectContext: self];
		
	}
	return self;
}


/**
 * Method returns DataServiceQuery reference for
 * the entityset CityCrime
 */
- (id) citycrime
{
	[self.m_CityCrime clearAllOptions];
	return self.m_CityCrime;
}

/**
 * Methods for adding object to the entityset/collection
 */

- (void) addToCityCrime:(id)anObject
{
	[super addObject:@"CityCrime" object:anObject];
}

- (void) dealloc
{
	[ m_OData_etag release];
	m_OData_etag = nil;
	
	[m_CityCrime release];
	m_CityCrime = nil;

	[super dealloc];
}

@end
/**
 * @interface:CityCrime
 * @key:ROWID
 */
@implementation data_gov_Crimes_CityCrime
	@synthesize m_ROWID;
	@synthesize m_State;
	@synthesize m_City;
	@synthesize m_Year;
	@synthesize m_Population;
	@synthesize m_ViolentCrime;
	@synthesize m_MurderAndNonEgligentManslaughter;
	@synthesize m_ForcibleRape;
	@synthesize m_Robbery;
	@synthesize m_AggravatedAssault;
	@synthesize m_PropertyCrime;
	@synthesize m_Burglary;
	@synthesize m_LarcenyTheft;
	@synthesize m_MotorVehicleTheft;
	@synthesize m_Arson;

/**
 *Method to create an instance of CityCrime
 */
+ (id) CreateCityCrimeWithrowid:(NSNumber *)aROWID year:(NSNumber *)aYear population:(NSNumber *)aPopulation violentcrime:(NSNumber *)aViolentCrime murderandnonegligentmanslaughter:(NSNumber *)aMurderAndNonEgligentManslaughter forciblerape:(NSNumber *)aForcibleRape robbery:(NSNumber *)aRobbery aggravatedassault:(NSNumber *)aAggravatedAssault propertycrime:(NSNumber *)aPropertyCrime burglary:(NSNumber *)aBurglary larcenytheft:(NSNumber *)aLarcenyTheft motorvehicletheft:(NSNumber *)aMotorVehicleTheft arson:(NSNumber *)aArson
{
	data_gov_Crimes_CityCrime *aCityCrime = [[data_gov_Crimes_CityCrime alloc]init];
	
	aCityCrime.m_ROWID = aROWID;

	
	aCityCrime.m_Year = aYear;

	
	aCityCrime.m_Population = aPopulation;

	
	aCityCrime.m_ViolentCrime = aViolentCrime;

	
	aCityCrime.m_MurderAndNonEgligentManslaughter = aMurderAndNonEgligentManslaughter;

	
	aCityCrime.m_ForcibleRape = aForcibleRape;

	
	aCityCrime.m_Robbery = aRobbery;

	
	aCityCrime.m_AggravatedAssault = aAggravatedAssault;

	
	aCityCrime.m_PropertyCrime = aPropertyCrime;

	
	aCityCrime.m_Burglary = aBurglary;

	
	aCityCrime.m_LarcenyTheft = aLarcenyTheft;

	
	aCityCrime.m_MotorVehicleTheft = aMotorVehicleTheft;

	
	aCityCrime.m_Arson = aArson;

	return aCityCrime;
}
/**
 * Initialising object for CityCrime
 */
- (id) init
{
	self=[self initWithUri:nil];
	return self;
}

- (id) initWithUri:(NSString*)anUri 
{
	if(self=[super initWithUri:anUri])
	{
		[self setBaseURI:anUri];
		m_OData_hasStream.booleanvalue=NO;
		mProperties *obj;
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_ROWID"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.String" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:YES Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_State"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.String" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:YES Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_City"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_Year"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_Population"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_ViolentCrime"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_MurderAndNonEgligentManslaughter"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_ForcibleRape"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_Robbery"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_AggravatedAssault"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_PropertyCrime"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_Burglary"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_LarcenyTheft"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_MotorVehicleTheft"];
		[obj release];
		
		obj=[[mProperties alloc]initWithEdmType:@"Edm.Int32" MaxLength:@"" MinLength:@"" FixedLength:NO Nullable:NO Unicode:NO ConcurrencyMode:@"" FC_TargetPath:@"" FC_KeepInContent:YES FC_SourcePath:@"" FC_ContentKind:@"" FC_NsPrefix:@"" FC_NsUri:@""];
		[m_OData_propertiesMap setObject:obj forKey:@"m_Arson"];
		[obj release];
		

		NSMutableArray *anEntityKey=[[NSMutableArray alloc]init];
		[anEntityKey addObject:@"ROWID"];
		[m_OData_entityKey setObject:anEntityKey forKey:@"CityCrime"];
		[anEntityKey release];
	}
	return self;
}

-(NSMutableArray *)getSyndicateArray
{
	NSMutableArray *syndicateArray=[[NSMutableArray alloc]init];
	
	return [syndicateArray autorelease];
}
-(data_gov_Crimes_CityCrime *)getDeepCopy
{
	data_gov_Crimes_CityCrime *obj=[[data_gov_Crimes_CityCrime alloc]initWithUri:[self getBaseURI]];
	[obj setROWID:[self getROWID]];
	[obj setState:[self getState]];
	[obj setCity:[self getCity]];
	[obj setYear:[self getYear]];
	[obj setPopulation:[self getPopulation]];
	[obj setViolentCrime:[self getViolentCrime]];
	[obj setMurderAndNonEgligentManslaughter:[self getMurderAndNonEgligentManslaughter]];
	[obj setForcibleRape:[self getForcibleRape]];
	[obj setRobbery:[self getRobbery]];
	[obj setAggravatedAssault:[self getAggravatedAssault]];
	[obj setPropertyCrime:[self getPropertyCrime]];
	[obj setBurglary:[self getBurglary]];
	[obj setLarcenyTheft:[self getLarcenyTheft]];
	[obj setMotorVehicleTheft:[self getMotorVehicleTheft]];
	[obj setArson:[self getArson]];

	return [obj autorelease];
}
- (void) dealloc
{
	[m_ROWID release];
	m_ROWID = nil;
	[m_State release];
	m_State = nil;
	[m_City release];
	m_City = nil;
	[m_Year release];
	m_Year = nil;
	[m_Population release];
	m_Population = nil;
	[m_ViolentCrime release];
	m_ViolentCrime = nil;
	[m_MurderAndNonEgligentManslaughter release];
	m_MurderAndNonEgligentManslaughter = nil;
	[m_ForcibleRape release];
	m_ForcibleRape = nil;
	[m_Robbery release];
	m_Robbery = nil;
	[m_AggravatedAssault release];
	m_AggravatedAssault = nil;
	[m_PropertyCrime release];
	m_PropertyCrime = nil;
	[m_Burglary release];
	m_Burglary = nil;
	[m_LarcenyTheft release];
	m_LarcenyTheft = nil;
	[m_MotorVehicleTheft release];
	m_MotorVehicleTheft = nil;
	[m_Arson release];
	m_Arson = nil;
	
	[super dealloc];
}

@end
