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
/**
* Defines default Data Service URL for this proxy class
*/
#define DEFAULT_SERVICE_URL @""


#define DataServiceVersion @"2.0"

#import "ODataObject.h"
#import "ObjectContext.h"
#import "DataServiceQuery.h"
#import "ODataGUID.h"
#import "ODataBool.h"
#import  "mProperties.h"


@class NetflixCatalog_Model_BoxArt;

@class NetflixCatalog_Model_InstantAvailability;

@class NetflixCatalog_Model_DeliveryFormatAvailability;

/**
 * @interface:BoxArt
 */
@interface NetflixCatalog_Model_BoxArt :ODataObject
{
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.String
	* @MaxLength:80
	* @FixedLength:false
	*/
	NSString *m_SmallUrl;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.String
	* @MaxLength:80
	* @FixedLength:false
	*/
	NSString *m_MediumUrl;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.String
	* @MaxLength:80
	* @FixedLength:false
	*/
	NSString *m_LargeUrl;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.String
	* @MaxLength:80
	* @FixedLength:false
	*/
	NSString *m_HighDefinitionUrl;
	
}

@property ( nonatomic , retain , getter=getSmallUrl , setter=setSmallUrl ) NSString *m_SmallUrl;
@property ( nonatomic , retain , getter=getMediumUrl , setter=setMediumUrl ) NSString *m_MediumUrl;
@property ( nonatomic , retain , getter=getLargeUrl , setter=setLargeUrl ) NSString *m_LargeUrl;
@property ( nonatomic , retain , getter=getHighDefinitionUrl , setter=setHighDefinitionUrl ) NSString *m_HighDefinitionUrl;

@end

/**
 * @interface:InstantAvailability
 */
@interface NetflixCatalog_Model_InstantAvailability :ODataObject
{
	/**
	* @Type:ComplexTypeProperty
	* NotNullable
	* @EdmType:Edm.Boolean
	*/
	ODataBool *m_Available;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.DateTime
	*/
	NSDate *m_AvailableFrom;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.DateTime
	*/
	NSDate *m_AvailableTo;
	
	/**
	* @Type:ComplexTypeProperty
	* NotNullable
	* @EdmType:Edm.Boolean
	*/
	ODataBool *m_HighDefinitionAvailable;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Runtime;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.String
	* @MaxLength:10
	* @FixedLength:false
	*/
	NSString *m_Rating;
	
}

@property ( nonatomic , assign , getter=getAvailable , setter=setAvailable )ODataBool *m_Available;
@property ( nonatomic , retain , getter=getAvailableFrom , setter=setAvailableFrom )NSDate *m_AvailableFrom;
@property ( nonatomic , retain , getter=getAvailableTo , setter=setAvailableTo )NSDate *m_AvailableTo;
@property ( nonatomic , assign , getter=getHighDefinitionAvailable , setter=setHighDefinitionAvailable )ODataBool *m_HighDefinitionAvailable;
@property ( nonatomic , retain , getter=getRuntime , setter=setRuntime )NSNumber *m_Runtime;
@property ( nonatomic , retain , getter=getRating , setter=setRating ) NSString *m_Rating;

@end

/**
 * @interface:DeliveryFormatAvailability
 */
@interface NetflixCatalog_Model_DeliveryFormatAvailability :ODataObject
{
	/**
	* @Type:ComplexTypeProperty
	* NotNullable
	* @EdmType:Edm.Boolean
	*/
	ODataBool *m_Available;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.DateTime
	*/
	NSDate *m_AvailableFrom;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.DateTime
	*/
	NSDate *m_AvailableTo;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Runtime;
	
	/**
	* @Type:ComplexTypeProperty
	* @EdmType:Edm.String
	* @MaxLength:10
	* @FixedLength:false
	*/
	NSString *m_Rating;
	
}

@property ( nonatomic , assign , getter=getAvailable , setter=setAvailable )ODataBool *m_Available;
@property ( nonatomic , retain , getter=getAvailableFrom , setter=setAvailableFrom )NSDate *m_AvailableFrom;
@property ( nonatomic , retain , getter=getAvailableTo , setter=setAvailableTo )NSDate *m_AvailableTo;
@property ( nonatomic , retain , getter=getRuntime , setter=setRuntime )NSNumber *m_Runtime;
@property ( nonatomic , retain , getter=getRating , setter=setRating ) NSString *m_Rating;

@end

/**
 * @interface:Language
 * @Type:EntityType
 
 * @key:Name* 
 */
@interface NetflixCatalog_Model_Language : ODataObject
{
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:80
	* @FixedLength:false
	* @FC_TargetPath:SyndicationTitle
	* @FC_ContentKind:
	* @FC_NsPrefix:
	* @FC_NsUri:
	* @FC_KeepInContent:
   * @FC_Criteria:NIL
	
	*/
	NSString *m_Name;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:TitleLanguages
	* @FromRole:Language
	* @ToRole:Titles
	*/
	NSMutableArray *m_Titles;
	
}

@property ( nonatomic , retain , getter=getName , setter=setName ) NSString *m_Name;
@property ( nonatomic , retain , getter=getTitles , setter=setTitles )NSMutableArray *m_Titles;

+ (id) CreateLanguageWithname:(NSString *)aName;
- (id) init;
- (id) initWithUri:(NSString*)anUri;
@end

/**
 * @interface:Person
 * @Type:EntityType
 
 * @key:Id* 
 */
@interface NetflixCatalog_Model_Person : ODataObject
{
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Id;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:80
	* @FixedLength:false
	* @FC_TargetPath:SyndicationTitle
	* @FC_ContentKind:
	* @FC_NsPrefix:
	* @FC_NsUri:
	* @FC_KeepInContent:
   * @FC_Criteria:NIL
	
	*/
	NSString *m_Name;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_TitleAward_Person
	* @FromRole:People
	* @ToRole:TitleAwards
	*/
	NSMutableArray *m_Awards;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:TitleActors
	* @FromRole:People
	* @ToRole:Titles
	*/
	NSMutableArray *m_TitlesActedIn;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:TitleDirectors
	* @FromRole:People
	* @ToRole:Titles
	*/
	NSMutableArray *m_TitlesDirected;
	
}

@property ( nonatomic , retain , getter=getId , setter=setId )NSNumber *m_Id;
@property ( nonatomic , retain , getter=getName , setter=setName ) NSString *m_Name;
@property ( nonatomic , retain , getter=getAwards , setter=setAwards )NSMutableArray *m_Awards;
@property ( nonatomic , retain , getter=getTitlesActedIn , setter=setTitlesActedIn )NSMutableArray *m_TitlesActedIn;
@property ( nonatomic , retain , getter=getTitlesDirected , setter=setTitlesDirected )NSMutableArray *m_TitlesDirected;

+ (id) CreatePersonWithid:(NSNumber *)aId name:(NSString *)aName;
- (id) init;
- (id) initWithUri:(NSString*)anUri;
@end

/**
 * @interface:TitleAudioFormat
 * @Type:EntityType
 
 * @key:TitleId
 * @key:DeliveryFormat
 * @key:Language
 * @key:Format* 
 */
@interface NetflixCatalog_Model_TitleAudioFormat : ODataObject
{
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:30
	* @FixedLength:false
	*/
	NSString *m_TitleId;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:10
	* @FixedLength:false
	*/
	NSString *m_DeliveryFormat;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:30
	* @FixedLength:false
	*/
	NSString *m_Language;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:30
	* @FixedLength:false
	*/
	NSString *m_Format;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_TitleAudioFormat_Title
	* @FromRole:TitleAudioFormats
	* @ToRole:Titles
	*/
	NSMutableArray *m_Title;
	
}

@property ( nonatomic , retain , getter=getTitleId , setter=setTitleId ) NSString *m_TitleId;
@property ( nonatomic , retain , getter=getDeliveryFormat , setter=setDeliveryFormat ) NSString *m_DeliveryFormat;
@property ( nonatomic , retain , getter=getLanguage , setter=setLanguage ) NSString *m_Language;
@property ( nonatomic , retain , getter=getFormat , setter=setFormat ) NSString *m_Format;
@property ( nonatomic , retain , getter=getTitle , setter=setTitle )NSMutableArray *m_Title;

+ (id) CreateTitleAudioFormatWithtitleid:(NSString *)aTitleId deliveryformat:(NSString *)aDeliveryFormat language:(NSString *)aLanguage format:(NSString *)aFormat;
- (id) init;
- (id) initWithUri:(NSString*)anUri;
@end

/**
 * @interface:TitleAward
 * @Type:EntityType
 
 * @key:Id* 
 */
@interface NetflixCatalog_Model_TitleAward : ODataObject
{
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Guid
	*/
	NSString *m_Id;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:30
	* @FixedLength:false
	*/
	NSString *m_Type;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:60
	* @FixedLength:false
	*/
	NSString *m_Category;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Year;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Boolean
	*/
	ODataBool *m_Won;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_TitleAward_Title
	* @FromRole:TitleAwards
	* @ToRole:Titles
	*/
	NSMutableArray *m_Title;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_TitleAward_Person
	* @FromRole:TitleAwards
	* @ToRole:People
	*/
	NSMutableArray *m_Person;
	
}

@property ( nonatomic , retain ,  getter=getId , setter=setId )NSString *m_Id;
@property ( nonatomic , retain , getter=getType , setter=setType ) NSString *m_Type;
@property ( nonatomic , retain , getter=getCategory , setter=setCategory ) NSString *m_Category;
@property ( nonatomic , retain , getter=getYear , setter=setYear )NSNumber *m_Year;
@property ( nonatomic , retain , getter=getWon , setter=setWon )ODataBool *m_Won;
@property ( nonatomic , retain , getter=getTitle , setter=setTitle )NSMutableArray *m_Title;
@property ( nonatomic , retain , getter=getPerson , setter=setPerson )NSMutableArray *m_Person;

+ (id) CreateTitleAwardWithid:(NSString *)aId type:(NSString *)aType category:(NSString *)aCategory won:(ODataBool *)aWon;
- (id) init;
- (id) initWithUri:(NSString*)anUri;
@end

/**
 * @interface:Title
 * @Type:EntityType
 
 * @key:Id* 
 */
@interface NetflixCatalog_Model_Title : ODataObject
{
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:30
	* @FixedLength:false
	*/
	NSString *m_Id;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.String
	* @MaxLength:Max
	* @FixedLength:false
	* @FC_TargetPath:SyndicationSummary
	* @FC_ContentKind:html
	* @FC_NsPrefix:
	* @FC_NsUri:
	* @FC_KeepInContent:
   * @FC_Criteria:NIL
	
	*/
	NSString *m_Synopsis;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.String
	* @MaxLength:Max
	* @FixedLength:false
	*/
	NSString *m_ShortSynopsis;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.Double
	*/
	NSDecimalNumber *m_AverageRating;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_ReleaseYear;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.String
	* @MaxLength:200
	* @FixedLength:false
	*/
	NSString *m_Url;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Runtime;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.String
	* @MaxLength:10
	* @FixedLength:false
	*/
	NSString *m_Rating;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.DateTime
	* @FC_TargetPath:SyndicationUpdated
	* @FC_ContentKind:
	* @FC_NsPrefix:
	* @FC_NsUri:
	* @FC_KeepInContent:false
   * @FC_Criteria:NIL
	
	*/
	NSDate *m_DateModified;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:8
	* @FixedLength:false
	*/
	NSString *m_Type;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:NetflixCatalog.Model.BoxArt
	*/
	NetflixCatalog_Model_BoxArt *m_BoxArt;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:200
	* @FixedLength:false
	*/
	NSString *m_ShortName;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:200
	* @FixedLength:false
	* @FC_TargetPath:SyndicationTitle
	* @FC_ContentKind:
	* @FC_NsPrefix:
	* @FC_NsUri:
	* @FC_KeepInContent:
   * @FC_Criteria:NIL
	
	*/
	NSString *m_Name;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:NetflixCatalog.Model.InstantAvailability
	*/
	NetflixCatalog_Model_InstantAvailability *m_Instant;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:NetflixCatalog.Model.DeliveryFormatAvailability
	*/
	NetflixCatalog_Model_DeliveryFormatAvailability *m_Dvd;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:NetflixCatalog.Model.DeliveryFormatAvailability
	*/
	NetflixCatalog_Model_DeliveryFormatAvailability *m_BluRay;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:30
	* @FixedLength:
	*/
	NSString *m_TinyUrl;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.String
	* @MaxLength:200
	* @FixedLength:
	*/
	NSString *m_WebsiteUrl;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:200
	* @FixedLength:
	*/
	NSString *m_NetflixApiId;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_TitleAudioFormat_Title
	* @FromRole:Titles
	* @ToRole:TitleAudioFormats
	*/
	NSMutableArray *m_AudioFormats;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_TitleAward_Title
	* @FromRole:Titles
	* @ToRole:TitleAwards
	*/
	NSMutableArray *m_Awards;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_Title_Disc
	* @FromRole:Titles1
	* @ToRole:Titles
	*/
	NSMutableArray *m_Disc;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_Title_Movie
	* @FromRole:Titles1
	* @ToRole:Titles
	*/
	NSMutableArray *m_Movie;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_Title_Season
	* @FromRole:Titles1
	* @ToRole:Titles
	*/
	NSMutableArray *m_Season;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_Title_Series
	* @FromRole:Titles1
	* @ToRole:Titles
	*/
	NSMutableArray *m_Series;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_TitleScreenFormat_Title
	* @FromRole:Titles
	* @ToRole:TitleScreenFormats
	*/
	NSMutableArray *m_ScreenFormats;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:TitleActors
	* @FromRole:Titles
	* @ToRole:People
	*/
	NSMutableArray *m_Cast;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:TitleLanguages
	* @FromRole:Titles
	* @ToRole:Language
	*/
	NSMutableArray *m_Languages;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:TitleDirectors
	* @FromRole:Titles
	* @ToRole:People
	*/
	NSMutableArray *m_Directors;
	
}

@property ( nonatomic , retain , getter=getId , setter=setId ) NSString *m_Id;
@property ( nonatomic , retain , getter=getSynopsis , setter=setSynopsis ) NSString *m_Synopsis;
@property ( nonatomic , retain , getter=getShortSynopsis , setter=setShortSynopsis ) NSString *m_ShortSynopsis;
@property ( nonatomic , retain , getter=getAverageRating , setter=setAverageRating )NSDecimalNumber *m_AverageRating;
@property ( nonatomic , retain , getter=getReleaseYear , setter=setReleaseYear )NSNumber *m_ReleaseYear;
@property ( nonatomic , retain , getter=getUrl , setter=setUrl ) NSString *m_Url;
@property ( nonatomic , retain , getter=getRuntime , setter=setRuntime )NSNumber *m_Runtime;
@property ( nonatomic , retain , getter=getRating , setter=setRating ) NSString *m_Rating;
@property ( nonatomic , retain , getter=getDateModified , setter=setDateModified )NSDate *m_DateModified;
@property ( nonatomic , retain , getter=getType , setter=setType ) NSString *m_Type;
@property ( nonatomic ,  retain , getter=getBoxArt , setter=setBoxArt )NetflixCatalog_Model_BoxArt *m_BoxArt;
@property ( nonatomic , retain , getter=getShortName , setter=setShortName ) NSString *m_ShortName;
@property ( nonatomic , retain , getter=getName , setter=setName ) NSString *m_Name;
@property ( nonatomic ,  retain , getter=getInstant , setter=setInstant )NetflixCatalog_Model_InstantAvailability *m_Instant;
@property ( nonatomic ,  retain , getter=getDvd , setter=setDvd )NetflixCatalog_Model_DeliveryFormatAvailability *m_Dvd;
@property ( nonatomic ,  retain , getter=getBluRay , setter=setBluRay )NetflixCatalog_Model_DeliveryFormatAvailability *m_BluRay;
@property ( nonatomic , retain , getter=getTinyUrl , setter=setTinyUrl ) NSString *m_TinyUrl;
@property ( nonatomic , retain , getter=getWebsiteUrl , setter=setWebsiteUrl ) NSString *m_WebsiteUrl;
@property ( nonatomic , retain , getter=getNetflixApiId , setter=setNetflixApiId ) NSString *m_NetflixApiId;
@property ( nonatomic , retain , getter=getAudioFormats , setter=setAudioFormats )NSMutableArray *m_AudioFormats;
@property ( nonatomic , retain , getter=getAwards , setter=setAwards )NSMutableArray *m_Awards;
@property ( nonatomic , retain , getter=getDisc , setter=setDisc )NSMutableArray *m_Disc;
@property ( nonatomic , retain , getter=getMovie , setter=setMovie )NSMutableArray *m_Movie;
@property ( nonatomic , retain , getter=getSeason , setter=setSeason )NSMutableArray *m_Season;
@property ( nonatomic , retain , getter=getSeries , setter=setSeries )NSMutableArray *m_Series;
@property ( nonatomic , retain , getter=getScreenFormats , setter=setScreenFormats )NSMutableArray *m_ScreenFormats;
@property ( nonatomic , retain , getter=getCast , setter=setCast )NSMutableArray *m_Cast;
@property ( nonatomic , retain , getter=getLanguages , setter=setLanguages )NSMutableArray *m_Languages;
@property ( nonatomic , retain , getter=getDirectors , setter=setDirectors )NSMutableArray *m_Directors;

+ (id) CreateTitleWithid:(NSString *)aId datemodified:(NSDate *)aDateModified type:(NSString *)aType boxart:(NetflixCatalog_Model_BoxArt *)aBoxArt shortname:(NSString *)aShortName name:(NSString *)aName instant:(NetflixCatalog_Model_InstantAvailability *)aInstant dvd:(NetflixCatalog_Model_DeliveryFormatAvailability *)aDvd bluray:(NetflixCatalog_Model_DeliveryFormatAvailability *)aBluRay tinyurl:(NSString *)aTinyUrl netflixapiid:(NSString *)aNetflixApiId;
- (id) init;
- (id) initWithUri:(NSString*)anUri;
@end

/**
 * @interface:TitleScreenFormat
 * @Type:EntityType
 
 * @key:TitleId
 * @key:DeliveryFormat
 * @key:Format* 
 */
@interface NetflixCatalog_Model_TitleScreenFormat : ODataObject
{
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:30
	* @FixedLength:false
	*/
	NSString *m_TitleId;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:10
	* @FixedLength:false
	*/
	NSString *m_DeliveryFormat;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.String
	* @MaxLength:30
	* @FixedLength:false
	*/
	NSString *m_Format;
	
	/**
	* @Type:NavigationProperty
	* @Relationship:FK_TitleScreenFormat_Title
	* @FromRole:TitleScreenFormats
	* @ToRole:Titles
	*/
	NSMutableArray *m_Title;
	
}

@property ( nonatomic , retain , getter=getTitleId , setter=setTitleId ) NSString *m_TitleId;
@property ( nonatomic , retain , getter=getDeliveryFormat , setter=setDeliveryFormat ) NSString *m_DeliveryFormat;
@property ( nonatomic , retain , getter=getFormat , setter=setFormat ) NSString *m_Format;
@property ( nonatomic , retain , getter=getTitle , setter=setTitle )NSMutableArray *m_Title;

+ (id) CreateTitleScreenFormatWithtitleid:(NSString *)aTitleId deliveryformat:(NSString *)aDeliveryFormat format:(NSString *)aFormat;
- (id) init;
- (id) initWithUri:(NSString*)anUri;
@end

/**
 * Container interface NetflixCatalog, Namespace: NetflixCatalog.Model
 */
@interface NetflixCatalog : ObjectContext
{
	 NSString *m_OData_etag;
	 DataServiceQuery *m_Languages;
	 DataServiceQuery *m_People;
	 DataServiceQuery *m_TitleAudioFormats;
	 DataServiceQuery *m_TitleAwards;
	 DataServiceQuery *m_Titles;
	 DataServiceQuery *m_TitleScreenFormats;
	
}

@property ( nonatomic , retain , getter=getEtag , setter=setEtag )NSString *m_OData_etag;
@property ( nonatomic , retain , getter=getLanguages , setter=setLanguages ) DataServiceQuery *m_Languages;
@property ( nonatomic , retain , getter=getPeople , setter=setPeople ) DataServiceQuery *m_People;
@property ( nonatomic , retain , getter=getTitleAudioFormats , setter=setTitleAudioFormats ) DataServiceQuery *m_TitleAudioFormats;
@property ( nonatomic , retain , getter=getTitleAwards , setter=setTitleAwards ) DataServiceQuery *m_TitleAwards;
@property ( nonatomic , retain , getter=getTitles , setter=setTitles ) DataServiceQuery *m_Titles;
@property ( nonatomic , retain , getter=getTitleScreenFormats , setter=setTitleScreenFormats ) DataServiceQuery *m_TitleScreenFormats;

- (id) init;
- (id) initWithUri:(NSString*)anUri credential:(id)acredential;
- (NSArray *) Movies;
- (NSArray *) Series;
- (NSArray *) Seasons;
- (NSArray *) Discs;
- (NSArray *) Episodes;
- (id) languages;
- (id) people;
- (id) titleaudioformats;
- (id) titleawards;
- (id) titles;
- (id) titlescreenformats;
- (void) addToLanguages:(id)anObject;
- (void) addToPeople:(id)anObject;
- (void) addToTitleAudioFormats:(id)anObject;
- (void) addToTitleAwards:(id)anObject;
- (void) addToTitles:(id)anObject;
- (void) addToTitleScreenFormats:(id)anObject;

@end
